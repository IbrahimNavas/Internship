#include <iostream>

using namespace std;

int print2largest(int * arr , int range ){
	int max = arr[0];
	int max2 = arr[1];
	for(int i = 0 ; i < range ; i++){
		if(arr[i] > max){
			int temp;
			temp = max;
			max = arr[i];
			arr[i] = temp;
		}
	}
	cout << "The largest number is : " << max << endl;
	for(int j = 0 ; j < range ; j++){
		if(arr[j] == max){
			continue;
		}
		else if(arr[j] > max2){
			int temp;
			temp = max2;
			max2 = arr[j];
			arr[j] = temp;
		}
	}
	cout << "The second largest number is : " << max2 << endl;
	if(range == 1){
		return -1;
	}
	else{
		return 0;
	}
}

int main(){
	int range;
	cout << "Enter the range of the array : ";
	cin >> range;
	
	int arr[range];
	
	for(int i = 0 ; i < range ; i++){
		cout << "Enter the element : ";
		cin >> arr[i];
	}
	
	print2largest(arr,range);
}
