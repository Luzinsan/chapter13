#include "StringValuePair.h"

template <class S>
StringValuePair<S>::StringValuePair(const std::string& value1, const S& value2)
	: Pair<std::string, S>(value1, value2) {}

