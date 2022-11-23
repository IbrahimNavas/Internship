#include <iostream>
#include <cmath>

using namespace std;

string armstrongNumber(int num1){
	int num2;
	int digs = 0;
	num2 = num1;
	int num3 = num1;
	while(num2 > 0){
		num2 /= 10;
		digs += 1;
	}
	int arr[digs];
	int i = 0;
	while(num1 > 0){
		int rem = num1%10;
		num1 = (int) num1/10;
		arr[i] = rem;
		i++;
	}
	int sum1 = 0;
	for(int i = 0 ; i < digs ; i++){
		sum1 += pow(arr[i],digs);
	}
//	cout << sum1;
	if(num3 == sum1){
		cout << "The given number is Palindrome";
	}
	else{
		cout << "The given number is not Palindrome";
	}
}

int main(){
	int n1;
	cout << "Enter the number : ";
	cin >> n1;
	armstrongNumber(n1);
	return 0;
}
