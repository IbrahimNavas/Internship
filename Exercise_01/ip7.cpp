#include <iostream>

using namespace std;

string search(int * arr,int range){
	int elem;
	cout << "Enter the element to be searched :";
	cin >> elem;
	for(int i = 0 ; i < range ; i++){
		if(arr[i] == elem){
			cout << "The element belongs to the array and is at the position :";
			cout << i;
		}
		else if(arr[i] != elem){
			continue;
		}
		else{
			cout << "The element doesn't belong to the array";
		}
	}
}

int main(){
	int range;
	cout << "Enter the array length : ";
	cin >> range;
	int arr[range];
	for(int i = 0 ; i < range ; i++){
		cout  << "Enter the array element : ";
		cin >> arr[i];
	}
	
	search(arr,range);
}
