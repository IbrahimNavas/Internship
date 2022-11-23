#include <iostream>
#include <cmath>
using namespace std;

void reverse_digit(int num1){
	int num2;
	int digs = 0;
	num2 = num1;
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
	cout << "The reversed number is :";
	for(int i = 0 ; i <= digs-1 ; i++){
		cout << arr[i];
	}
}

int main(){
	int n1;
	cout << "Enter a number : ";
	cin >> n1;
	reverse_digit(n1);
	return 0;
}
