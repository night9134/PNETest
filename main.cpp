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

void quick(int *arr,int left, int right)
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
    quick(arr, left, R);
  if (L < right)
    quick(arr, L, right);

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
		else if(nInputManu==6) 
		{
			int start =1;
			printf("factorial %d\n",func6(10,&start)); 
		}
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
