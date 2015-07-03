#include "Headers.h"

// add this later
auto sum() { return 0; }

template <typename H, typename... T>
auto sum(H h, T... t) // -> decltype(h + sum(t...))
{
	return h + sum(t...);
}

auto sum_product(double a, double b)
{
	return make_pair(a+b, a*b);
}

int main()
{
	cout << sum(1,2.5) << endl;

	cout << sum(string("hello,"),"variadics") << endl;

	auto person = make_tuple(string("Dmitri"), 500);

	//auto values = sum_product(3,4);
	//auto s = get<0>(values);

	float s;
	tie(s, ignore) = sum_product(3,4);

	cout << "sum = " << s << endl;
}