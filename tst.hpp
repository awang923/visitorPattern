fndef __TST_HPP__
#define __TST_HPP__

#include "gtest/gtest.h"
#include "iterator.hpp"
#include "visitor.hpp"
#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "pow.hpp"

TEST(vistTst, oneObj){
Op* num1 = new Op(3);
Op* num2 = new Op(2);
Mult mul = new Mult(num1,num2);
Base* root = new add(mul,nullptr);
}
