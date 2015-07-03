#include "Headers.h"

enum OldColor {
	Red,
	Green,
	Blue
};

OldColor oc = Green;
int g = oc; // this is legit

enum class NewColor : int
{
	Red,
	Green,
	Blue
};

NewColor nc = NewColor::Blue;
// this won't work
// int b = nc;