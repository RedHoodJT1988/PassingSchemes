#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int num, int& num2);

int main()
{
	int myNumber = 20;

	cout << "Before valueChanged1 call, my number is " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChanged1 call, my number is " << myNumber << endl;

	cout << endl << endl;

	cout << "myNumber is currently: " << myNumber << endl;
	valueChanged2(myNumber);
	cout << "After valueChanged2 call, myNumber is " << myNumber << endl;

	threeTimesN(8, myNumber);
	cout << "Number after threeTimesN call, " << myNumber;
	return 0;
}

void valueChanged1(int someNum)
{
	someNum = 100;
	cout << "Some num in valueChanged1 is " << someNum << endl;
}

void valueChanged2(int& someNum)
{
	someNum = 100;
	cout << "Inside valueChanged2 is " << someNum << endl;
}

void threeTimesN(int num, int& num2)
{
	num2 = num * 3;
}