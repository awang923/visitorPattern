#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include <vector>
using namespace std;

class Add : public Base {
    private:
	Base* left;
	Base* right;
    public:
        //constructor
        Add(Base* l, Base* r): Base() {
	   left = l;
	   right = r;
	}
	virtual double evaluate(){
	  return left->evaluate() + right->evaluate();
	}
	virtual string stringify() {
	   return left->stringify() + " + " + right->stringify();
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
                visit->visit_add();
        }
};

class threeAddSevenMock: public Base{
	public:
	  threeAddSevenMock() {};
	  virtual double evaluate(){return 10.0;}
	  virtual string stringify(){return "3+7";}
};

#endif //__ADD_HPP__
