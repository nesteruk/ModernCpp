#include "Headers.h"

enum State {
	ok = 0,
	hint = 1,
	warn = 2,
	error = 4
};

constexpr int operator|(State s1, State s2) { return State((int)s1 | (int)s2); }

void process(State s)
{
	switch (s)
	{
		case warn|error: return;
//		case warn:
//		case error:
//			// do something
//			return;
	}
}