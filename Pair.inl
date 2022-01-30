#include "Pair.h"

template <class T, class S>
Pair<T, S>::Pair(const T& value1, const S& value2)
	: m_1(value1), m_2(value2) {}

template <class T, class S>
Pair<T, S>::~Pair() {}

template <class T, class S>
T& Pair<T, S>::first() { return m_1; }

template <class T, class S>
S& Pair<T, S>::second() { return m_2; }

template <class T, class S>
const T& Pair<T, S>::first() const { return m_1; }

template <class T, class S>
const S& Pair<T, S>::second() const { return m_2; }
