// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
#include <iostream>
using namespace std;




























void func1()
{
	int a = 0, b = 0;
	cout << "두 개의 숫자를 입력하세요 : ";
	cin >> a >> b;

	int temp = a;
	a = b;
	b = temp;

	cout << "a : " << a << ", " << "b : " << b << endl;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);

	while (true)
	{
		int nInputManu = 0;

		cout << "\n Select Method below \n";
		cout << "1. Swap two number \n"; //test
		cout << "2. Quotient and Remainder \n";
		cout << "3. Check whether number is Even or Odd \n";
		cout << "4. Calculate Sum of Natural Numbers \n";
		cout << "5. Check Leap Year \n";
		cout << "6. Factorial \n";
		cout << "7. Find Largest element of an array \n";
		cout << "8. Check Prime Number \n";
		cout << "9. Display Prime Number between two intervals \n";
		cout << "10. Calculate Power of a Number \n";
		cout << "11. Find GCD \n";
		cout << "12. Find LCM \n";
		cout << "Select Number>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
		cin >> nInputManu;

		if(nInputManu==1) func1();
		else if(nInputManu==2) { }
		else if(nInputManu==3) { }
		else if(nInputManu==4) { }
		else if(nInputManu==5) { }
		else if(nInputManu==6) { }
		else if(nInputManu==7) { }
		else if(nInputManu==8) { }
		else if(nInputManu==9) { }
		else if(nInputManu==10) { }
		else if(nInputManu==11) { }
		else if(nInputManu==12) { }
		else break;
	}

	return 0;
}
