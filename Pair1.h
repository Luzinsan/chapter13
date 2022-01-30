#pragma once

template <class T> 
class Pair1 
{
private:
	T m_1, m_2;
public:
	Pair1(const T& value1 = 0, const T& value2 = 0) : m_1(value1), m_2(value2) {}
	~Pair1() {}

	T& first() { return m_1; }
	T& second() { return m_2; }
	const T& first() const  { return m_1;  }
	const T& second() const { return m_2; }
};
