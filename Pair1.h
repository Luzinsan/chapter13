#pragma once

template <class T> 
class Pair1 
{
private:
	T m_1, m_2;
public:
	Pair1(const T& value1 = 0, const T& value2 = 0);
	~Pair1();

	T& first();
	T& second();
	const T& first() const;
	const T& second() const;
};
