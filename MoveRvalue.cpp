#include "Headers.h"

string getName()
{
	return "Dmitri";
}

void printName(const string& name) // refers to a permanent object
{
	cout << "Ordinary reference: " << name << endl;
}

void printName(string&& name) // refers to a temp object
{
	cout << "Rvalue reference: " << name << endl;
}

class Widget {
public:
	Widget() { cout << "Widget ctor" << endl; }
	Widget(Widget&& w)
	{
		cout << "Widget move ctor" << endl;
	}
	~Widget() {
		cout << "Widget destructor" << endl;
	}
};

int main()
{
	// RVALUE REFERENCES

	// this is ok
	string name1 = getName();

	// not ok because expression must be lvalue
	//string& name2 = getName();

	// this is just bizarre
	getName() = "Ann";

	// this is legit
	const string& name3 = getName();

	// but try compiling this
	//name3 = "John";

	string&& name4 = getName();
	name4 = "Jack";
	cout << name4 << endl;

	// so now what we can do is
	string j{"John"};
	printName(getName());
	printName(j);

	// MOVE SEMANTICS
	cout << endl << "=== Putting widget into vector ===" << endl;
	vector<Widget> widgets;
	Widget w;
	//widgets.push_back(w);
	//widgets.emplace_back(w);


	return 0;
}