#include "pch.h"
#include "../Project120/cal.cpp"

TEST(CalTest, Basic) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(CalTest, getSum)
{
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(CalTest, getGop)
{
	Cal* cal = new Cal();
	EXPECT_EQ(cal->getGop(3, 4), 12);
}

TEST(CalTest, getZegop)
{
	EXPECT_EQ(25, Cal().getZegop(5));
}

TEST(CalTest, getMinus)
{
	Cal* cal = new Cal();
	EXPECT_TRUE(5 == cal->getMinus(8, 3));
}

TEST(CalTest, getDivide)
{
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(CalTest, getSumSum)
{
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}
