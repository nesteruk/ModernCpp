#include "Headers.h"

class Address
{
public:
	Address() {}
	Address(const Address&) { cout << "Address copied!" << endl; }
	int house_number;
	string street;
	string city;
	string postcode;
};

Address create_address(int house, string postcode)
{
	Address address{};
	address.house_number=house;
	address.postcode = postcode;

	// fill other fields

	return address; // rvo?
}

unique_ptr<Address> create_address_smart(int house, string postcode)
{
	auto a = make_unique<Address>();
	return a;
}


//class Person
//{
//public:
//	Address* address;
//	Person() { address = new Address(); }
//	~Person() { delete address; }
//};

class Person {
public:
	unique_ptr<Address> address;

	Person()
	{
		address = make_unique<Address>();
	}
	~Person()
	{
		cout << "Person destroyed" << endl;
	}
};

int main()
{
	cout << "Smart pointer test!" << endl;
	auto my_address = create_address(32, "SO171BJ");
	auto my_address2 = create_address_smart(32, "SO171BJ");

//	Address* a;
//	{
//		Person p;
//		a = p.address;
//	}
//	cout << a->city << endl;

	unique_ptr<Address> a;
	{
		Person p;
		p.address->city = "London";
		//a = p.address; // on unique_ptr will not work
	}
	cout << a->city;

	getchar();
	return 0;
}

