#ifndef __RAND_HPP
#define __RAND_HPP

#include "base.hpp"
#include <string>


using namespace std;

class Rand : public Base {
 private:
 double val;
 public:
        Rand() : Base() {
	   val = rand() % 100; 
	}
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return to_string(val); }

	 Iterator* create_iterator(){
          return new NullIterator(this);
        }
};

#endif //__RAND_HPP
