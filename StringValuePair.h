#pragma once
#include "Pair.h"
#include <string>
template <class S>
class StringValuePair: public Pair<std::string, S>
{
public:
	StringValuePair(const std::string& value1 = 0, const S& value2 = 0);
};
