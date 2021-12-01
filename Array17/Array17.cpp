#include <iostream>
using namespace std;

int length = 5;
int mass[5]{ 0,1,2,3,4 };

void getCoinciding();

int main()
{
	setlocale(LC_ALL, "RUS");

	getCoinciding();
}

void getCoinciding()
{
	int coincNum = 0;
	int coincNumTemp = 0;
	for (int i = 0; i < length; i++)
	{
		if (mass[i] == i)
		{
			coincNum = mass[i];
			coincNumTemp += coincNum;
		}
	}
	cout << endl << "Сумма чисел: " << coincNumTemp << endl;
}