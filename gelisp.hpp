#ifndef __GELISP_HPP__
#define __GELISP_HPP__


#include <iostream>
#include <vector>
#include <gecode/kernel.hh>
#include <gecode/int.hh>
#include <gecode/set.hh>
#include <cprel/cprel.hh>

namespace GeLisp {

  class GlIntVar;
  class GlBoolVar;
  class GlSetVar;
  class GlCPRelVar;
	
  class GlSpace : public Gecode::Space {
    GlSpace(bool share, GlSpace&);
  public:
    /// The integer variables
    std::vector<GlIntVar> iv;
    /// The Boolean variables
    std::vector<GlBoolVar> bv;
    /// The set variables
    std::vector<GlSetVar> sv;
    /// The relation variables
    //std::vector<GlCPRelVar> rv;
	std::vector<GlCPRelVar> rv;
    /// Construct an empty space
    GlSpace(void);
    /// Destructor
    ~GlSpace(void);
    

    /// Create a new integer variable with domain [lb,ub]
    GlIntVar& newIntVar(int lb, int ub);
    /// Create a new integer variable from IntSet is
    GlIntVar& newIntVar(const Gecode::IntSet &d);
    
    /// Create a new boolean variable with domain [lb,ub]
    GlBoolVar& newBoolVar(int lb, int ub);
    
    /// Create a new set variable from home
    GlSetVar& newSetVar();
    
    /// Create a new set variable with bounds and cardinality
    GlSetVar& newSetVar(int glbMin,int glbMax,int lubMin,int lubMax, 
			unsigned int cardMin = 0, unsigned int cardMax = Gecode::Set::Limits::card);
           
    /// Create a new set variable with bounds(lower bound is an IntSet) and cardinality
    GlSetVar& newSetVar(const Gecode::IntSet& glbD,int lubMin,int lubMax,
			unsigned int cardMin = 0,
			unsigned int cardMax = Gecode::Set::Limits::card);       
    
    /// Create a new set variable with bounds(upper bound is an IntSet) and cardinality
    GlSetVar&
    newSetVar(int glbMin,int glbMax,const Gecode::IntSet& lubD,
	      unsigned int cardMin = 0,
	      unsigned int cardMax = Gecode::Set::Limits::card);
           
    /// Create a new set variable with bounds(lower and upper bound is an IntSet) and cardinality       
    GlSetVar&
    newSetVar(const Gecode::IntSet& glbD,const Gecode::IntSet& lubD,
	      unsigned int cardMin = 0,
	      unsigned int cardMax = Gecode::Set::Limits::card);
	

	GlCPRelVar&
    newCPRelVar(const MPG::CPRel::GRelation& l, const MPG::CPRel::GRelation& u);

    /// Perform propagation
    const char* status(void);
    /// Print space information
    void print(std::ostream& os) const;
    /// Debug 
    const char* debug(void) const;
    /// Post the branchings
    void branch(void);
    /// Run the search for nbSolutions, returns the number of solutions. if nbSolutions = 0, search on all the space.
    template<template<class> class Engine>
    unsigned int runEngine(std::ostream& os, int nbSolutions, std::vector<GlSpace*>& solutionsVector);
    /// Returns the number of solutions to the problem
    const char* run(int nbSolutions, std::vector<GlSpace*>& solutionsVector);
    
    /// Copy function
    virtual Gecode::Space* copy(bool share);
    
    //get the variable reference from the index of iv
    GlIntVar& getIntVar(int indexInVector);
    
    //get the variable reference from the index of bv
    GlBoolVar& getBoolVar(int indexInVector);
    
    //get the variable reference from the index of sv
    GlSetVar& getSetVar(int indexInVector);
    
   	//get the variable reference from the index of rv
	GlCPRelVar& getCPRelVar(int indexInVector);

    //create a vector of GlSpace and return a reference on it
    std::vector<GlSpace*> createGlSpaceVector(void);
    
    //gives access to an element of a vector of GlSpace at a given index
    GlSpace* getGlSpaceFromVector(std::vector<GlSpace*>& vec, int index);
    
  };


  //classe utilisee a la place de IntVar car on a besoin de connaitre l'indice de l'objet dans le vecteur iv
  class GlIntVar: public Gecode::IntVar
  {
    int index; //index of the variable in iv vector (used to get the values solution after search)
  public:
    GlIntVar(void):Gecode::IntVar()
    {
      index = -1;
    }
		
    GlIntVar(GlSpace& home, int lb, int ub):Gecode::IntVar(home, lb, ub)
    {
      index = -1;
    }
    GlIntVar(GlSpace& home, const Gecode::IntSet &d):Gecode::IntVar(home, d)
    {
      index = -1;
    }
    int getIndexInVector(void)
    {
      return index;
    }
    void setIndexInVector(int newIndex)
    {
      index = newIndex;
    }
		
  };
	
	
  //classe utilisee a la place de BoolVar car on a besoin de connaitre l'indice de l'objet dans le vecteur bv
  class GlBoolVar: public Gecode::BoolVar
  {
    int index; //index of the variable in bv vector (used to get the values solution after search)
  public:
    GlBoolVar(void):Gecode::BoolVar()
    {
      index = -1;
    }
		
    GlBoolVar(GlSpace& home, int lb, int ub):Gecode::BoolVar(home, lb, ub)
    {
      index = -1;
    }
		
    int getIndexInVector(void)
    {
      return index;
    }
    void setIndexInVector(int newIndex)
    {
      index = newIndex;
    }
		
  };	
	

  //classe utilisee a la place de SetVar car on a besoin de connaitre l'indice de l'objet dans le vecteur sv
  class GlSetVar: public Gecode::SetVar
  {
    int index; //index of the variable in sv vector (used to get the values solution after search)
  public:
	
    GlSetVar(void):Gecode::SetVar()
    {
      index = -1;
    }
		
    GlSetVar(GlSpace& home):Gecode::SetVar(home)
    {
      index = -1;
    }
		
    GlSetVar(GlSpace& home, int glbMin,int glbMax,int lubMin,int lubMax, unsigned int cardMin = 0, unsigned int cardMax = Gecode::Set::Limits::card):Gecode::SetVar(home, glbMin, glbMax, lubMin, lubMax, cardMin, cardMax)
    {
      index = -1;
    }
		
    GlSetVar(GlSpace& home, const Gecode::IntSet& glbD,int lubMin,int lubMax, unsigned int cardMin = 0,
	     unsigned int cardMax = Gecode::Set::Limits::card):Gecode::SetVar(home, glbD, lubMin, lubMax, cardMin, cardMax)
    {
      index = -1;
    }
		
    GlSetVar(GlSpace& home, int glbMin,int glbMax,const Gecode::IntSet& lubD, unsigned int cardMin = 0, 
	     unsigned int cardMax = Gecode::Set::Limits::card):Gecode::SetVar(home, glbMin, glbMax, lubD, cardMin, cardMax)
    {
      index = -1	;
    }
		
    GlSetVar(GlSpace& home, const Gecode::IntSet& glbD,const Gecode::IntSet& lubD, unsigned int cardMin = 0,
	     unsigned int cardMax = Gecode::Set::Limits::card):Gecode::SetVar(home, glbD, lubD, cardMin, cardMax)
    {
      index = -1;
    }
		
    int getIndexInVector(void)
    {
      return index;
    }
    void setIndexInVector(int newIndex)
    {
      index = newIndex;
    }
		
  };	
  

	class GlCPRelVar: public MPG::CPRelVar
	{
		int index;
		
	public:
		GlCPRelVar(void):MPG::CPRelVar()
	    {
	      index = -1;
	    }
		
		GlCPRelVar(GlSpace& home, const MPG::CPRel::GRelation& l, const MPG::CPRel::GRelation& u):MPG::CPRelVar(home,l,u)
	    {
	      index = -1;
	    }

	    int getIndexInVector(void)
	    {
	      return index;
	    }
	    void setIndexInVector(int newIndex)
	    {
	      index = newIndex;
	    }
		
		
		
	};
	

  
  class IntVarList {
    Gecode::IntVarArgs va;
    std::vector<int> vectorOfIndex; //will contain the indexes of the IntVar objects in the iv vector
  public:
    IntVarList(void)  
      {
    	
      }
    IntVarList(GlSpace& home, int n, int min, int max)  {
      //va = new Gecode::IntVarArgs(0);
      GlIntVar* tempVar;
      for (int i = 0; i < n; i++) {
	tempVar = &(home.newIntVar(min,max));
	va << *tempVar;
	vectorOfIndex.push_back(tempVar->getIndexInVector());
      }
    }
    IntVarList(GlSpace& home, int n, const Gecode::IntSet &d){
      for (int i = 0; i < n; i++) {
	va << home.newIntVar(d);
      }
    }  
    
    unsigned int size(void) {
      return va.size();
    } 
    void add(/*const*/ GlIntVar& x) {
      va << x;
      vectorOfIndex.push_back(x.getIndexInVector());
    }
    const Gecode::IntVarArgs& get(void) {
      return va;
    }

    const GlIntVar& getVar(int i) {
      assert(i >= 0 && i < va.size());
      GlIntVar& toReturn = ((GlIntVar&) va[i]) ;
      return toReturn;
    }
    
    //return the index in iv of an IntVar in va
    const int getIndexOfAVarInVector(int i)
    {
      return vectorOfIndex[i];
    }
  };
	
	
	
  class BoolVarList {
    Gecode::BoolVarArgs ba;
    std::vector<int> vectorOfIndex; //will contain the indexes of the BoolVar objects in the bv vector
  public:
    //BoolVarList(void)  {}
    BoolVarList(GlSpace& home, int n, int min, int max)  {    	
      GlBoolVar* tempVar;
      for (int i = 0; i < n; i++) {
	tempVar = &(home.newBoolVar(min,max));
	ba << *tempVar;
	vectorOfIndex.push_back(tempVar->getIndexInVector());
      }
    }
    unsigned int size(void) {
      return ba.size();
    } 
    void add(GlBoolVar& x) {
      ba << x;
      vectorOfIndex.push_back(x.getIndexInVector());
    }
    const Gecode::BoolVarArgs& get(void) {
      return ba;
    }

    const GlBoolVar& getVar(int i) {
      assert(i >= 0 && i < ba.size());
      GlBoolVar& toReturn = ((GlBoolVar&) ba[i]) ;
      return toReturn;

    }
    
    //return the index in bv of an IntVar in ba
    const int getIndexOfAVarInVector(int i)
    {
      return vectorOfIndex[i];
    }

  };

	
	
  class SetVarList {
    Gecode::SetVarArgs sa;
    std::vector<int> vectorOfIndex; //will contain the indexes of the SetVar objects in the sv vector
  public:
  
    //CONSTRUCTORS
  	
    SetVarList(GlSpace& home, int n) 
    {   	
      GlSetVar* tempVar;
      for (int i = 0; i < n; i++) 
    	{
	  tempVar = &(home.newSetVar());
	  sa << *tempVar;
	  vectorOfIndex.push_back(tempVar->getIndexInVector());
     	}
    }
    
    SetVarList(GlSpace& home, int n, int glbMin,int glbMax,int lubMin,int lubMax, 
	       unsigned int cardMin = 0, unsigned int cardMax = Gecode::Set::Limits::card)  
    {
      GlSetVar* tempVar;
      for (int i = 0; i < n; i++) 
    	{
	  tempVar = &(home.newSetVar(glbMin, glbMax, lubMin, lubMax, cardMin, cardMax));
	  sa << *tempVar;
	  vectorOfIndex.push_back(tempVar->getIndexInVector());
      	}
    }
    
    SetVarList(GlSpace& home, int n, const Gecode::IntSet& glbD, int lubMin,int lubMax, 
	       unsigned int cardMin = 0, unsigned int cardMax = Gecode::Set::Limits::card)  
    {
      GlSetVar* tempVar;
      for (int i = 0; i < n; i++) 
      	{
	  tempVar = &(home.newSetVar(glbD, lubMin, lubMax, cardMin, cardMax));
	  sa << *tempVar;
	  vectorOfIndex.push_back(tempVar->getIndexInVector());
      	}
    }
    
    SetVarList(GlSpace& home, int n, int glbMin,int glbMax, const Gecode::IntSet& lubD, 
	       unsigned int cardMin = 0, unsigned int cardMax = Gecode::Set::Limits::card)  
    {
      GlSetVar* tempVar;
      for (int i = 0; i < n; i++) 
      	{
	  tempVar = &(home.newSetVar(glbMin, glbMax, lubD, cardMin, cardMax));
	  sa << *tempVar;
	  vectorOfIndex.push_back(tempVar->getIndexInVector());
    	}
    }
    
    SetVarList(GlSpace& home, int n, const Gecode::IntSet& glbD, const Gecode::IntSet& lubD, 
	       unsigned int cardMin = 0, unsigned int cardMax = Gecode::Set::Limits::card)  
    {
      GlSetVar* tempVar;
      for (int i = 0; i < n; i++) 
      	{
	  tempVar = &(home.newSetVar(glbD, lubD, cardMin, cardMax));
	  sa << *tempVar;
	  vectorOfIndex.push_back(tempVar->getIndexInVector());
      	}
    }
    
    //METHODS
    unsigned int size(void) {
      return sa.size();
    } 
    void add(GlSetVar& x) {
      sa << x;
      vectorOfIndex.push_back(x.getIndexInVector());
    }
    const Gecode::SetVarArgs& get(void) {
      return sa;
    }

    const Gecode::SetVar& getVar(int i) {
      assert(i >= 0 && i < sa.size());
      GlSetVar& toReturn = ((GlSetVar&) sa[i]) ;
      return toReturn;
    }
    
    //return the index in sv of an IntVar in sa
    const int getIndexOfAVarInVector(int i)
    {
      return vectorOfIndex[i];
    }

  };
	
	
	
	class CPRelVarList {
	    MPG::CPRelVarArgs cpa;
	    std::vector<int> vectorOfIndex; //will contain the indexes of the IntVar objects in the iv vector
	 
	    CPRelVarList(GlSpace& home, int n, const MPG::CPRel::GRelation& l, const MPG::CPRel::GRelation& u)
		{
	      GlCPRelVar* tempVar;
	      for (int i = 0; i < n; i++) {
		tempVar = &(home.newCPRelVar(l,u));
		cpa << *tempVar;
		vectorOfIndex.push_back(tempVar->getIndexInVector());
	      }
	    }
	      

	    unsigned int size(void) {
	      return cpa.size();
	    }
	    void add(GlCPRelVar& x) {
	      cpa << x;
	      vectorOfIndex.push_back(x.getIndexInVector());
	    }
	    const MPG::CPRelVarArgs& get(void) {
	      return cpa;
	    }

	    const GlCPRelVar& getVar(int i) {
	      assert(i >= 0 && i < cpa.size());
	      GlCPRelVar& toReturn = ((GlCPRelVar&) cpa[i]) ;
	      return toReturn;
	    }

	    //return the index in rv of an CPRelVar in cpa
	    const int getIndexOfAVarInVector(int i)
	    {
	      return vectorOfIndex[i];
	    }
	  };
	
	
	
	
  class IntList {
		
  private:
    Gecode::IntArgs va;
  public:
	
    IntList(int n):va(n){}
		
    IntList(int n, int defaultValue):va(n)
    {
      for(int i = 0; i < n; i++)
	{
	  va[i] = defaultValue;
				
	}
			
    }
		
    IntList(int n,int start, int inc):va(n)
    {
      for(int i = 0; i < n; i++, start+=inc)
	{
	  va[i] = start;
				
	}
    }
    const Gecode::IntArgs& get(void) {
      return va;
    }
		
    unsigned int size(void) {
      return va.size();
    } 

    const int getVar(int i) {
      assert(i >= 0 && i < va.size());
      return va[i];
      	
    }
    const void setVar(int i, int value) {
      assert(i >= 0 && i < va.size());
      va[i] = value ;
    }
    	
    const char* print(){
    		
      std::stringstream out;
      out << "[ " ;
      for(int i = 0; i < va.size() - 1; i++)
	{
	  out << va[i] << ", " ;
	}
      out << va[va.size() - 1] << "]" << std::endl;
      return out.str().c_str();
    }

	
  };
	
  class IntSetList {
		
  private:
    Gecode::IntSetArgs isa;
  public:
    IntSetList(int n,int min, int max):isa(n)
    {
      for(int i = 0; i < n; i++)
	{
	  isa[i] = Gecode::IntSet(min,max);
				
	}
    }
    const Gecode::IntSetArgs& get(void) {
      return isa;
    }
		
    const Gecode::IntSet& getElement(int i) {
      return isa[i];
    }
	
  };
	 	
		 
}



#endif



