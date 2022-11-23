#include <iostream>

using namespace std;

void EvenOddSum(int * arr , int range){
	int odd_sum = 0;
	int even_sum = 0;
	for(int i = 0 ; i < range ; i++){
		if(i%2 == 0){
			odd_sum += arr[i];
		}
		else{
			even_sum += arr[i];
		}
	}
	cout << "The sum of odd placed elements is : " << odd_sum << endl;
	cout << "The sum of even placed elements is : " << even_sum;
}

int main(){
	int range;
	cout << "Enter the array range : ";
	cin >> range;
	
	int arr[range];
	for(int i = 0 ; i < range ; i++){
		cout << "Enter the array element : ";
		cin >> arr[i];
	}
	EvenOddSum(arr,range);
	return 0;
}
