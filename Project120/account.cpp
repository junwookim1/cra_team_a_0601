class Account
{
public:
	explicit Account(int balance): balance(balance)
	{
	}

	int getBalance() const
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

	void setInterest(int inter)
	{
		interest = inter;
	}

	int getInterest() const
	{
		return interest;
	}

	void increase()
	{
		balance = getBalanceByInterest(balance);
	}

	int expectBalanceYears(int y) const
	{
		int temp_balance = balance;
		while (y)
		{
			temp_balance = getBalanceByInterest(temp_balance);
			y--;
		}
		return temp_balance;
	}

private:
	int balance;
	int interest = 5;

	int getBalanceByInterest(int bal) const
	{
		return bal = bal * (100 + interest) / 100;
	}
};
