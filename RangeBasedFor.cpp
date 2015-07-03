#include "Headers.h"

void rbf_demo()
{
	vector<int> v{1,2,3};

	for (int& a : v)
	{
		a = a*a;
	}

	for (int x : {1,2,3})
	{
		// requires initializer list knowledge :)
	}

	map<string, int> histogram;

	// key value pairs
	for (const auto& kvp : histogram)
	{
		auto key = kvp.first;
		auto value = kvp.second;
	}
}