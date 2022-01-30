#include <iostream>
#include "templates.cpp"
int main()
{
	Pair1<int> p1(6, 9);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
	const Pair1<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
	system("pause");
	system("cls");

	Pair<char, double> p3(15, 7.8);
	std::cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';
	const Pair<double, int> p4(3.4, 5);
	std::cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';
	system("pause");
	system("cls");

	StringValuePair<char> svp("Amazing", 25);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
	system("pause");
	system("cls");

	return 0;
}
