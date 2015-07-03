#include "Headers.h"

void nullptr_demo()
{
	int* a = NULL; // try commenting out the =NULL part
	int* b = nullptr;

	if (a == b)
	{

	}

	// you also have boolean coercion, so
	if (a) {}

	bool c = nullptr;

	// the following will NOT compile (use reinterpret_cast)
	//int d = nullptr;
}