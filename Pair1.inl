#include "Pair1.h"

template <class T>
Pair1<T>::Pair1(const T& value1, const T& value2)
	: m_1(value1), m_2(value2) {}

template <class T>
Pair1<T>::~Pair1() {}

template <class T>
T& Pair1<T>::first() { return m_1; }

template <class T>
T& Pair1<T>::second() { return m_2; }

template <class T>
const T& Pair1<T>::first() const { return m_1; }

template <class T>
const T& Pair1<T>::second() const { return m_2; }
