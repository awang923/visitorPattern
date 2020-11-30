#ifndef __MULT_HPP
#define __MULT_HPP

#include "base.hpp"

using namespace std;

class Mult: public Base{
   private:
	Base* left;
	Base* right;
   public:
	Mult(Base* l, Base* r): Base(){
   	   left = l;
	   right = r;
   	}
	virtual double evaluate(){
	   return left->evaluate() * right->evaluate();
	}
	virtual string stringify(){
	   return left->stringify() + " * " + right->stringify();
	}
	virtual Iterator* create_iterator(){
	   return BinaryIterator(this);
	}
};

#endif //__MULT_HPP
