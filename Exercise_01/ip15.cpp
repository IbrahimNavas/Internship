#include <iostream>

using namespace std;

bool check_elements(int * arr , int N , int A , int B){
	int flag = 1;
	for(int i = 0 ; i < N ; i++){
		if(arr[i] >= A && arr[i] <= B){
			flag = 1;
		}
		else{
			break;
		}
	}
	if(flag == 1){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int N;
	cout << "Enter the array range : ";
	cin >> N;
	int arr[N];
	int A;
	int B;
	cout << "Enter the initial number : ";
	cin >> A;
	cout << "Enter the final number : ";
	cin >> B;
	for(int i = 0 ; i < N ; i++){
		cout << "Enter the array element : ";
		cin >> arr[i];
	}
	cout <<	check_elements(arr,N,A,B);
	return 0;
}
