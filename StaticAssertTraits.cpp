#include "Headers.h"

template <typename T, size_t Size>
class Values
{
	static_assert(Size > 1, "Use a scalar");
	T values[Size];
};

void Foo()
{
	Values<int, 3> stuff;
}

// copy this from elsewhere (use search)
template <typename T, typename U>
auto add(T t, U u) -> decltype(t+u)
{
	static_assert(is_integral<T>::value, "First value must be integer");

	return t+u;
}

auto qq = add(2,3.7);
// this line will fail
//auto z = add(string("foo"), string("bar"));