#include "Headers.h"

class Animal
{
protected:
	int legs = 4;
public:

	explicit Animal(int legs)
			: legs(legs)
	{
	}

	virtual int Walk(int steps)
	{
		return steps * 20;
	}
};

class Human : public Animal
{
public:
	Human() : Animal(2)
	{
	}

	Human(const Human&) = delete; // default

	virtual int Walk(int steps) override final
	{return 123;}
};

int main()
{
    Human h;
    // try adding this and seeing the error
    //Human h2{h};

    return 0;
}