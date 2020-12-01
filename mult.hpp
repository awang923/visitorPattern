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

	virtual Base* get_left(){
        return left;
        }

        virtual Base* get_right(){
        return right;
        }

	virtual Iterator* create_iterator(){
	   return new BinaryIterator(this);
	}
	
	  void accept(CountVisitor* visit){
                visit->visit_mult();
        }
};

#endif //__MULT_HPP
