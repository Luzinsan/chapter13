#pragma once

template <class T, class S>
class Pair
{
private:
	T m_1;
	S m_2;
public:
	Pair(const T& value1 = 0, const S& value2 = 0) : m_1(value1), m_2(value2) {}
	virtual ~Pair() {}

	T& first() { return m_1; }
	S& second() { return m_2; }
	const T& first() const { return m_1; }
	const S& second() const { return m_2; }
};
