#include <iostream>

#include<gtest/gtest.h>

#include "../src/libreria.hpp"

TEST(MyTestSuite,TestOdd){
    MyInt *obj= new MyInt(5);
    ASSERT_TRUE(obj->isOdd());

}

TEST(MyTestSuite,TestEven){
    MyInt *obj= new MyInt(6);
    ASSERT_TRUE(obj->isEven());

}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}