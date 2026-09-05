#include "pch.h"

#include "../TriangleLib/Triangle.h"

TEST(Test_Triangle, TestConstructor) {
	EXPECT_NO_THROW([]() {Triangle t1(3, 4);}());

	EXPECT_THROW([]() {Triangle t2(0, 2);}(), std::logic_error);

	EXPECT_THROW([]() {Triangle t3(8, 0);}(), std::logic_error);

	EXPECT_THROW([]() {Triangle t4(0, 0);}(), std::logic_error);

	EXPECT_THROW([]() {Triangle t5(-1, -10);}(), std::logic_error);
}

TEST(Test_Triangle, TestGeter) {
	Triangle t1(3, 4);

	EXPECT_EQ(t1.get_side(), 3);

	EXPECT_EQ(t1.get_height(), 4);
}

TEST(Test_Triangle, TestSeter) {
	Triangle t1(3, 4);

	t1.set_side(10);
	EXPECT_EQ(t1.get_side(), 10);

	t1.set_height(5);
	EXPECT_EQ(t1.get_height(), 5);

	EXPECT_THROW(t1.set_side(0),std::logic_error);

	EXPECT_THROW(t1.set_height(-10),std::logic_error);
}

TEST(Test_Triangle, TestArea) {
	Triangle t1(3, 4);
	EXPECT_EQ(t1.area(), 6);

	Triangle t2(10, 50);
	EXPECT_EQ(t2.area(), 250);
}