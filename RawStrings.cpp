#include "Headers.h"

int main()
{
	string s = R"(Hello,
World\n)";
	cout << s << endl;

	// this won't work
	//regex re(".+\.");

	// this is ugly
	//regex re(".+\\.");

	// so we have this
	regex re(R"(.+\.)");

	cout << regex_match("test.", re) << endl;
}