#ifndef POW_HPP
#define POW_HPP
#include "base.hpp"
#include <string>
#include <cmath>
using namespace std;

class Pow: public Base {
private:
Base* Object1;
Base* Object2;
public:
         Pow(Base* ob1, Base* ob2) : Base() {Object1 = ob1;
Object2 = ob2;
 }
        virtual double evaluate() { return pow(Object1->evaluate(), Object2->evaluate()); }
        virtual std::string stringify() { return Object1->stringify()+ " ** " + Object2->stringify(); }
	
	 Iterator* create_iterator(){
          return new BinaryIterator(this);
        }

	 virtual Base* get_left(){
        return Object1;
        }

        virtual Base* get_right(){
        return Object2;
        }
	
	virtual void accept(CountVisitor* visit){
                visit->visit_pow();
        }
};
#endif //POW_HPP
