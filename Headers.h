#pragma once

#if defined(_WIN32) || (defined(__APPLE__) && defined(__MACH__))
  #include <cstdio>
  #include <iostream>
  #include <string>
  #include <vector>
  #include <map>
  #include <algorithm>
  #include <functional>
  #include <memory>
  #include <type_traits>
  #include <initializer_list>
#else
  #include <bits/stdc++.h>
#endif

using namespace std;

#pragma ide diagnostic ignored "CannotResolve"

/*
template<typename T, typename... Args>
unique_ptr<T> make_unique(Args&&... args)
{
	return unique_ptr<T>(new T(forward<Args>(args)));
}*/