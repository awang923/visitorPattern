#ifndef __OP_HPP__
#define __OP_HPP__
#include "base.hpp"
#include <string>
using namespace std;

class Op : public Base {
 private:
 double val;  
 public:
        Op(double value) : Base() {val = value; }
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return to_string(val); }
	
	 Iterator* create_iterator(){
          return new NullIterator(this);
        }
	
	 virtual Base* get_left(){
        return nullptr;
        }

        virtual Base* get_right(){
        return nullptr;
        }
	virtual void accept(CountVisitor* visit){
                visit->visit_op();
        }

};

class SevenOpMock: public Base{
        public:
                SevenOpMock() {};
                virtual double evaluate(){return 7.5;}
                virtual string stringify() {return "7.5";}
};
class NegOpMock: public Base{
        public:
                NegOpMock() {};
                virtual double evaluate(){return -7.5;}
                virtual string stringify() {return "-7.5";}
};

class TripleOpMock: public Base{
        public:
                TripleOpMock() {};
                virtual double evaluate(){return 312.123;}
                virtual string stringify() {return "312.123";}
};

class IntOpMock: public Base{
        public:
                IntOpMock() {};
                virtual double evaluate(){return 1;}
                virtual string stringify() {return "1";}
};

#endif //__OP_HPP__
