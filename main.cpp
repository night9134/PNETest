// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

/*
작성자: 박재성
일자: 2021-03-23
기능: 나눗셈, 몫/나머지 함수
*/
void func2() {
	int dividend, divisor;
	cout << "Input the Dividend: ";
	cin >> dividend;
	cout << '\n';
	cout << "Input the divisor: ";
	cin >> divisor;
	cout << '\n';
	
	int quotient = dividend / divisor;
	int remainder = dividend % divisor;
	cout << "Quotient: " << quotient << '\n';
	cout << "Remainder: " << remainder << '\n';
	return;
}

/*
작성자: 박재성
일자: 2021-03-23
기능: GCD함수
*/
void func11() {
	int A, B, C;
	cout << "Input Two Numbers: " << '\n';
	cout << "A: ";
	cin >> A;
	cout << '\n';
	cout << "B: ";
	cin >> B;
	while(B)
	{
		C = A % B;
		A = B;
		B = C;
	}
	
	cout << "GCD is " << A << '\n';
	return;
}

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
int func6(int n,int *sum)
{
	if(n==0) return 0;
	*sum *=n;
	func6(n-1,sum);
	return *sum;
}
void print(int *data,int len)
{
  printf(" --정렬 후 순서--\n"); //정렬한 후 상태 출력.
  for (int i = 0; i < len; i++) 
  {
    printf("%d ", data[i]);
  }
  printf("\n");
}
void func7(int *arr,int left, int right)
{
	int L = left;
	int R = right;
	int temp;
	int pnum = (L+R)/2;	
	int pivot = arr[pnum];
	printf("L : %d / pivot : %d / R : %d\n", L, pnum, R);

	while(L<=R)
	{
		while(arr[L]<pivot)
		{
			L++;
		}
		
		while(arr[R]>pivot)
		{
			R--;
		}
		if (L <= R) 
		{ 
			if (L != R) 
			{
				temp = arr[L];
				arr[L] = arr[R];
				arr[R] =temp;
			}
			L++,R--;
		}
	}
  if (left < R)
    func7(arr, left, R);
  if (L < right)
    func7(arr, L, right);

}
int main()
{

	while (true)
	{
		int nInputManu = 0;

		cout << "\n Select Method below \n";
		
		
		
		
		
		
		
		
		cin >> nInputManu;

		if(nInputManu==1) 
		{ 
			cout << "1. Swap two number \n"; //test

		}
		else if(nInputManu==2) 
		{ 
			cout << "2. Quotient and Remainder \n";
		}
		else if(nInputManu==3) 
		{ 
			cout << "3. Check whether number is Even or Odd \n";
		}
		else if(nInputManu==4) 
		{
			cout << "4. Calculate Sum of Natural Numbers \n";
			func4();
		}
		
		else if(nInputManu==5) 
		{ 
			cout << "5. Check Leap Year \n";
		}
		else if(nInputManu==6) 
		{
			cout << "6. Factorial \n";
			int start =1;
			printf("factorial %d\n",func6(10,&start)); 
		}
		else if(nInputManu==7) 
		{ 
			cout << "7. Find Largest element of an array \n";
			int len =10;
			int data[10]={2,3,4,7,8,10,1,5,9,6};
			func7(data,0,len-1);
			
			print(data,len);

		}
		else if(nInputManu==8) 
		{ 
			cout << "8. Check Prime Number \n";
		}
		else if(nInputManu==9) 
		{
			cout << "9. Display Prime Number between two intervals \n";
			func9();
		}
		else if(nInputManu==10)
		{
			cout << "10. Calculate Power of a Number \n";
		}
		else if(nInputManu==11)
		{
			cout << "11. Find GCD \n";

		}
		else if(nInputManu==12)
		{
			cout << "12. Find LCM \n";
		}
		
		cout << "Select Number>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
		else break;
	}

	return 0;
}
