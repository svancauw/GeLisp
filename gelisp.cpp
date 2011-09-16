#include <sstream>
#include <gecode/search.hh>
#include <gecode/gist.hh>
#include <gelisp.hpp>

namespace GeLisp {
  
  using namespace Gecode;
  using namespace MPG;

  GlSpace::GlSpace(void) 
  {
  	freopen ("/tmp/mystdout.txt","w",stdout);
  	freopen ("/tmp/mystderr.txt","w",stderr);
	std::cout << "Redirected stdout." << std::endl;
	std::cerr << "Redirected stderr." << std::endl;
	rv.reserve(1000);
  }
  
  GlSpace::~GlSpace(void)
  {
    fclose(stdout);
    fclose(stderr);
  }
  
  GlSpace::GlSpace(bool share, GlSpace& s) 
    : Space(share,s), iv(s.iv), bv(s.bv), sv(s.sv), rv(s.rv) {
	  for (int i = 0; i<iv.size(); i++) 
	  {
	  	  iv[i].update(*this,share,s.iv[i]);
		  iv[i].setIndexInVector(s.iv[i].getIndexInVector());
	  }
    for (int i = 0; i<bv.size(); i++) 
    {
		  bv[i].update(*this,share,s.bv[i]);
		  bv[i].setIndexInVector(s.bv[i].getIndexInVector());
	}
	  
	for (int i = 0; i<sv.size(); i++) 
	{
		  sv[i].update(*this,share,s.sv[i]);
		  sv[i].setIndexInVector(s.sv[i].getIndexInVector());
	}
	
	for (int i = 0; i<rv.size(); i++) 
	{
		  rv[i].update(*this,share,s.rv[i]);
		  rv[i].setIndexInVector(s.rv[i].getIndexInVector());
	}
  }
  
  Space*
  GlSpace::copy(bool share) {
    return new GlSpace(share,*this);
  }
  

  GlIntVar&
  GlSpace::newIntVar(int lb, int ub) {
	iv.push_back(GeLisp::GlIntVar(*this,lb,ub));
	iv.back().setIndexInVector(iv.size() - 1);
  	return iv.back();
  }
  
  GlIntVar&
  GlSpace::newIntVar(const IntSet &d){
  	iv.push_back(GeLisp::GlIntVar(*this,d));
  	iv.back().setIndexInVector(iv.size() - 1);
  	return iv.back();
  	}
	
	
	GlBoolVar&
  	GlSpace::newBoolVar(int lb, int ub){
  		bv.push_back(GeLisp::GlBoolVar(*this, lb, ub));
  		bv.back().setIndexInVector(bv.size() - 1);
  		return bv.back();
  	}
  	
	GlSetVar& 
	GlSpace::newSetVar(){
		sv.push_back(GeLisp::GlSetVar(*this));
		sv.back().setIndexInVector(sv.size() - 1);
		return sv.back();
		}
		
    
    GlSetVar&
    GlSpace::newSetVar(int glbMin,int glbMax,int lubMin,int lubMax,
           unsigned int cardMin,
           unsigned int cardMax){
           sv.push_back(GeLisp::GlSetVar(*this,glbMin,glbMax,lubMin,lubMax, cardMin,cardMax));
           sv.back().setIndexInVector(sv.size() - 1);
           return sv.back();
           }
           
    GlSetVar&
    GlSpace::newSetVar(const IntSet& glbD,int lubMin,int lubMax,
           unsigned int cardMin,
           unsigned int cardMax){
           sv.push_back(GeLisp::GlSetVar(*this,glbD,lubMin,lubMax, cardMin,cardMax));
           sv.back().setIndexInVector(sv.size() - 1);
           return sv.back();
           }       
    
    GlSetVar&
    GlSpace::newSetVar(int glbMin,int glbMax,const IntSet& lubD,
           unsigned int cardMin,
           unsigned int cardMax){
           sv.push_back(GeLisp::GlSetVar(*this,glbMin,glbMax,lubD, cardMin,cardMax));
           sv.back().setIndexInVector(sv.size() - 1);
           return sv.back();
           }
           
    GlSetVar&
    GlSpace::newSetVar(const IntSet& glbD,const IntSet& lubD,
           unsigned int cardMin,
           unsigned int cardMax){
           sv.push_back(GeLisp::GlSetVar(*this,glbD,lubD, cardMin,cardMax));
           sv.back().setIndexInVector(sv.size() - 1);
           return sv.back();
           }

	GlCPRelVar&
	GlSpace::newCPRelVar(const MPG::CPRel::GRelation& l, const MPG::CPRel::GRelation& u)
	{
		rv.push_back(GeLisp::GlCPRelVar(*this,l,u));
        rv.back().setIndexInVector(rv.size() - 1);
		std::cerr << "Glb of new CPRelVar : " << rv.back().glb().arity() << std::endl;
		std::cerr << "Lub of new CPRelVar : " << rv.back().lub().arity() << std::endl;
        return rv.back();
	}
  		
	
  const char*
  GlSpace::status(void) {
    Space& sp = static_cast<Space&>(*this);
    switch (sp.status()) {
    case SS_FAILED:
      return "SS_FAILED";
    case SS_SOLVED:
      return "SS_SOLVED";
    case SS_BRANCH:
      return "SS_BRANCH";
    }
    return "UNKNOWN";
  }

  void
  GlSpace::print(std::ostream& os) const {
    os << "Integer variables:" << std::endl;
    for (int i = 0; i < iv.size(); i++)
      os << "\tiv[" << i << "]: " << iv[i] << std::endl;
    os << "Bool variables:" << std::endl;
    for (int i = 0; i < bv.size(); i++)
      os << "\tbv[" << i << "]: " << bv[i] << std::endl;
    os << "Set variables:" << std::endl;
    for (int i = 0; i < sv.size(); i++)
      os << "\tsv[" << i << "]: " << sv[i] << std::endl;
    os << "CPRel variables:" << std::endl;
    for (int i = 0; i < rv.size(); i++)
      {
		std::cout << rv[i] << std::endl ;
		os << "\trv[" << i << "]: " << rv[i] << std::endl;
      }
  }
  
  const char*
  GlSpace::debug(void) const {
    std::stringstream os;
    print(os);
    return os.str().c_str();
  }

  void
  GlSpace::branch(void) {
    std::cout << "will branch...." << std::endl;
    if (iv.size() > 0) {
	  IntVarArgs ivArgs;
	  for (int i =0; i < iv.size(); i++) {
		  ivArgs<<iv[i];
	  }
      Gecode::branch(*this,ivArgs,INT_VAR_SIZE_MIN, INT_VAL_MIN);
    }
    
    if (bv.size() > 0) {
	  BoolVarArgs bvArgs;
	  for (int i =0; i < bv.size(); i++) {
		  bvArgs<<bv[i];
	  }
      Gecode::branch(*this,bvArgs,INT_VAR_SIZE_MIN, INT_VAL_MIN);
    }

    if (sv.size() > 0) {
	  SetVarArgs svArgs;
	  for (int i =0; i < sv.size(); i++) {
		  svArgs<<sv[i];
	  }
      Gecode::branch(*this,svArgs,SET_VAR_NONE, SET_VAL_MIN_INC);
    }
	
	if (rv.size() > 0) {
	  for (int i =0; i < rv.size(); i++) {
		MPG::branch(*this, rv[i]);
	  }
    }

  }
  
  template<template<class> class Engine>
  unsigned int
  GlSpace::runEngine(std::ostream& out, int nbSolutions, std::vector<GlSpace*>& solutionsVector) {
   std::cout << "will search...." << std::endl;
    using namespace std;
    Search::Options o;
    o.threads = 1;
    Engine<GlSpace> se(this,o);
    int noOfSolutions = nbSolutions;
    int findSol = noOfSolutions;
    GlSpace* sol = NULL;
    while (GlSpace* next_sol = se.next()) {
      sol = next_sol;
      solutionsVector.push_back(sol);
      sol->print(out);
      out << "----------" << std::endl;
      if (--findSol==0)
        goto stopped;
    }
    stopped:
      Gecode::Search::Statistics stat = se.statistics();
      out << std::endl
        << "%%  solutions:     " 
        << std::abs(noOfSolutions - findSol) << std::endl
        << std::endl;
    out << std::endl << "No more solutions" << std::endl;
    std::cout << "search finished..." << std::endl;
    return std::abs(noOfSolutions - findSol);
  }
    
  const char* GlSpace::run(int nbSolutions, std::vector<GlSpace*>& solutionsVector) {
    std::stringstream os;
    runEngine<DFS>(os,nbSolutions,solutionsVector);
    return os.str().c_str();
  }
    
  GlIntVar& GlSpace::getIntVar(int indexInVector)
	{
		return iv[indexInVector];
	}

	GlBoolVar& GlSpace::getBoolVar(int indexInVector)
	{
		return bv[indexInVector];
	}
	
	GlSetVar& GlSpace::getSetVar(int indexInVector)
	{
		return sv[indexInVector];
	}
	
	GlCPRelVar& GlSpace::getCPRelVar(int indexInVector)
	{
		return rv[indexInVector];
	}
		
    std::vector<GlSpace*> GlSpace::createGlSpaceVector(void)
    {
    	std::vector<GlSpace*> vec;
    	return vec;
    }
    
    GlSpace* GlSpace::getGlSpaceFromVector(std::vector<GlSpace*>& vec, int index)
    {
    	if(index >= 0 && index < vec.size())
    		return vec[index];
    	else
    		return NULL;
    		
    }
    
}
