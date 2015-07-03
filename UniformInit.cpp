#include "Headers.h"

struct Address {

};

struct Person
{
	string name;
	int age;
	Person(const string &name, int age) : name(name), age(age) { }

	Address address;
	Person(Address address) {}
};

struct PersonFactory
{
  static Person make_person(string name, int age){
	  return {name, age};
  }
};

struct Exchange
{
	int count;
  	float rates[2];

	// this won't work
	//Exchange(initializer_list<float> r) : rates(r) {}

	Exchange(std::initializer_list<float> r)
	{
		if (r.size() < 2) return;

		auto i = r.begin(); // ---> segway into next segment
		rates[0] = *i;
		i++;
		rates[1] = *i;
	}
};

int main()
{
	int a = 4;
	int n{4};

	// shouldn't work
	int m{3.5};
	cout << m << endl;

	string s{"foo"};


	// remark on the confusion between init lists and member init lists
	vector<int> values{1,2,3}; // = optional
//	values.push_back(1);
//	values.push_back(1);
//	values.push_back(1);


	array<float,3> coeff{0.1,0.2,0.3};

	vector<int> what_is_this{123};

	// careful here
	map<string,string> capitals = {
			{"UK", "London"},
			{"France", "Paris"}
	};

	// but it's not just the built-in types!

	Person p2{"Dmitri", 500};
	auto p = PersonFactory::make_person("Dmitri", 500);
	cout << p.name << " " << p.age  << endl;


	// most vexing parse
	//Person person(Address());
	Person person{Address{}};
	auto z = person.address;

	// here's a more interesting case
	Exchange e{1,2,3};

	return 0; // this line is critical
}