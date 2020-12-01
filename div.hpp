#ifndef DIV_HPP
#define DIV_HPP

#include "base.hpp"
#include <string>
#include <stdexcept>
using namespace std;

class Div: public Base {
private:
Base* Object1;
Base* Object2;
public:
         Div(Base* ob1, Base* ob2) : Base() {Object1 = ob1;
Object2 = ob2;
}
        virtual double evaluate() { return Object1->evaluate()/Object2->evaluate(); }
        virtual std::string stringify() { return Object1->stringify()+ " / " +Object2->stringify(); }

         Iterator* create_iterator(){
	  return new BinaryIterator(this);
	}

	 virtual Base* get_left(){
        return Object1;
        }

        virtual Base* get_right(){
        return Object2;
        }
        
 	void accept(CountVisitor* visit){
		visit->visit_div();
	}
};
#endif //DIV_HPP
