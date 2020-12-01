#ifndef __COUNT_VISITOR_HPP__
#define __COUNT_VISITOR_HPP__
#include "iterator.hpp"
class CountVisitor{
    private:
        int ops;
        int rands;
        int mults;
        int divs;
        int add;
        int sub;
        int pow;

    public:
        CountVisitor(): ops(0),rands(0),mults(0),divs(0),add(0),sub(0),pow(0){}

        void visit_op();
        int op_count(){ops++;}
        void visit_rand();
        int rand_count(){rands++;}
        void visit_mult();
        int mult_count(){mults++;}
        void visit_div();
        int div_count(){divs++;}
        void visit_add();
        int add_count(){add++;}
        void visit_sub();
        int sub_count(){sub++}
        void visit_pow();
        int pow_count(){pow++}

};

#endif //__COUNT_VISITOR_HPP__
