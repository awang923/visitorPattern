#ifndef __ITTEST_HPP__
#define __ITTEST_HPP__

#include "gtest/gtest.h"
#include "iterator.hpp"
#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "pow.hpp"

TEST(itTest, addGetLeft){
	  Base* left = new Op(3);
    Base* right = new Op(7);
    Add* test = new Add(left,right);
    EXPECT_EQ(test->get_left()->evaluate(), 3); 
}

TEST(itTest, addGetRight){
	  Base* left = new Op(3);
    Base* right = new Op(7);
    Add* test = new Add(left,right);
    EXPECT_EQ(test->get_right()->evaluate(), 7); 
}

TEST(itTest, subGetLeft){
	  Base* left = new Op(10);
    Base* right = new Op(2);
    Sub* test = new Sub(left,right);
    EXPECT_EQ(test->get_left()->evaluate(), 10); 
}

TEST(itTest, subGetRight){
	  Base* left = new Op(10);
    Base* right = new Op(2);
    Sub* test = new Sub(left,right);
    EXPECT_EQ(test->get_right()->evaluate(), 2); 
}

TEST(itTest, multGetLeft){
	  Base* left = new Op(3);
    Base* right = new Op(5);
    Mult* test = new Mult(left,right);
    EXPECT_EQ(test->get_left()->evaluate(), 3); 
}

TEST(itTest, multGetRight){
	  Base* left = new Op(3);
    Base* right = new Op(5);
    Mult* test = new Mult(left,right);
    EXPECT_EQ(test->get_right()->evaluate(), 5); 
}

TEST(itTest, divGetRight){
	 Base* left = new Op(10);
   Base* right = new Op(2);
   Div* test = new Div(left,right);
   EXPECT_EQ(test->get_right()->evaluate(),2);
}
   
TEST(itTest, divGetLeft){
   Base* left = new Op(10);
   Base* right = new Op(2);
   Div* test = new Div(left,right);
   EXPECT_EQ(test->get_left()->evaluate(),10);
}
   
TEST(itTest, powGetLeft){
	 Base* left = new Op(10);
   Base* right = new Op(2);
   Pow* test = new Pow(left,right);
   EXPECT_EQ(test->get_left()->evaluate(),10);
   }
   
TEST(itTest, powGetRight){
	 Base* left = new Op(10);
   Base* right = new Op(2);
   Pow* test = new Pow(left,right);
   EXPECT_EQ(test->get_right()->evaluate(),2);
   }
   
TEST(itTest, opGetLeft){
	 Base* opp = new Op(10);
   EXPECT_TRUE( opp->get_left() == nullptr);
   }
   
TEST(itTest, opGetRight){
	 Base* opp = new Op(10);
   EXPECT_TRUE( opp->get_right() == nullptr);
   }
   
   
TEST(itTest, randGetLeft){
	 Base* tst = new Rand();
   EXPECT_TRUE( tst->get_left() == nullptr);
   }
   
TEST(itTest, randGetRight){
	 Base* tst = new Rand();
   EXPECT_TRUE( tst->get_right() == nullptr);
   }


#endif //__ITTEST_HPP__
