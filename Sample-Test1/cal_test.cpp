#include "pch.h"
#include "../Project120/cal.cpp"

class AccountTest : public testing::Test
{
public:
	Account account{10000};
};

TEST_F(AccountTest, Basic)
{
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountTest, Deposit)
{
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountTest, Withdraw)
{
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountTest, DefaultIncrease)
{
	account.increase();
	EXPECT_EQ(10000*1.05, account.getBalance());
}


TEST_F(AccountTest, Interest)
{
	account.setInterest(3);
	EXPECT_EQ(3, account.getInterest());
}

TEST_F(AccountTest, IncreaseAfterSetInterest)
{
	account.setInterest(3);
	account.increase();
	EXPECT_EQ(10000 * 1.03, account.getBalance());
}

TEST_F(AccountTest, ExpectBalanceYears)
{
	account.setInterest(3);
	EXPECT_EQ(10000 * 1.03 * 1.03, account.expectBalanceYears(2));
}