#include <iostream>

using namespace std;

void maximizeMoney(int houses , int money){
	int amount;
	if(houses%2 == 0){
		amount = money*(houses/2);
	}
	else{
		amount = money*((houses/2)+1);
	}

	
	cout << "Maximum money robbed is : ";
	cout << amount;
}

int main(){
	int N;
	cout << "Enter the no.of houses : ";
	cin >> N;
	int K;
	cout << "Enter the money : ";
	cin >>  K;
	
	maximizeMoney(N,K);
	return 0;
}
