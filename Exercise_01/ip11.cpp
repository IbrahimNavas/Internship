#include <iostream>

using namespace std;

int main(){
	int range;
	cout << "Enter the array length : ";
	cin >> range;
	int arr[range];
	for(int i = 0 ; i < range ; i++){
		cout  << "Enter the array element : ";
		cin >> arr[i];
	}
	cout << "The actual array is : ";
	for(int i = 0 ; i < range ; i++){
		cout << arr[i];
	}
	cout << " " << endl;
	cout << "The reverse array is : ";
	for(int i = 1 ; i <= range ; i++){
		cout << arr[range-i];
	}
	return 0;
}
