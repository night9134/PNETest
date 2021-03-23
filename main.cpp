#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

//func8
void func8()
{
	int nInput, flag=0;  
  	cout << "Enter the Number to check Prime: ";  
  	cin >> nInput;  
  	
  	for(int i = 2; i <= nInput/2; i++)  
	{  
		if(nInput % i == 0)  
		{  
			cout<<"Number is not Prime."<<endl;  
			flag=1;  
			break;  
		}  
	}  

	if (flag==0)  
		cout << "Number is Prime."<<endl;  
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

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
		else if(nInputManu==4) { }
		else if(nInputManu==5) { }
		else if(nInputManu==6) { }
		else if(nInputManu==7) { }
		else if(nInputManu==8) {func8(); }
		else if(nInputManu==9) { }
		else if(nInputManu==10) { }
		else if(nInputManu==11) { }
		else if(nInputManu==12) { }
		else break;
	}

	return 0;
}
