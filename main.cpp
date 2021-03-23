#include <iostream>
#include <algorithm>
using namespace std;

void func9(){
	int from=0, to=0;
	cout << "두 개의 숫자를 입력하세요 : ";
	cin >> from >> to;

	bool arr[to+1] = { false, };

	arr[0] = true;
	arr[1] = true;

	for(int i=2; i<=to; i++){
		if(arr[i]) continue;

		for(int j=2*i; j<=to; j+=i){
			arr[j] = true;
		}
	}

	for(int i=from; i<=to; i++){
		if(!arr[i]){
			cout << i << " ";
		}
	} cout << "\n";
}
void func4(){
	int temp=0;

	cout << "숫자를 입력하세요 : ";
	cin >> temp;
	cout << (temp*(temp+1))/2;
}
int main()
{

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

		if(nInputManu==1) { }
		else if(nInputManu==2) { }
		else if(nInputManu==3) { }
		else if(nInputManu==4) func4();
		else if(nInputManu==5) { }
		else if(nInputManu==6) { }
		else if(nInputManu==7) { }
		else if(nInputManu==8) { }
		else if(nInputManu==9) func9();
		else if(nInputManu==10) { }
		else if(nInputManu==11) { }
		else if(nInputManu==12) { }
		else break;
	}

	return 0;
}
