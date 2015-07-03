#include "Headers.h"

void lambda_demo()
{
	vector<int> scores{2,3,2,8};
	for_each(begin(scores), end(scores), [](int n) -> int {
		cout << n << endl;
		return n;
	});

	int zero = 0; // start w/o zero, Introduce Variable (select the zero!), also try =
	auto is_positive = [=](int n) { return n > zero; };

	bool s = is_positive(-2);

	// start with auto on the left
	// type deduction fails, specify type explicitly
	function<int(int)> fib = [&fib](int x){ return x < 2 ? 1 : fib(x-2) + fib(x-1); };
	auto fib8 = fib(8);
}