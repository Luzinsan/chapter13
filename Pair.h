#ifndef PAIR_H
#define PAIR_H

template <class T, class S>
class Pair
{
private:
	T m_1;
	S m_2;
public:
	Pair(const T& value1 = 0, const S& value2 = 0);
	virtual ~Pair();

	T& first();
	S& second();
	const T& first() const;
	const S& second() const;
};

#endif 
