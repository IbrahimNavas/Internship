#include <iostream>

using namespace std;

void totalFine(int * car , int * fine , int N , int date){
	int Fine = 0 ;
	for(int i = 0 ; i < N ; i++){
		if(date%2 == 0 && i%2 == 0){
			Fine += fine[i];
		}
		else if(date%2 != 0 && i%2 != 0){
			Fine += fine[i];
		}
		else{
			cout << "Enter valid inputs";
		}
	}
	cout << "The total fine is : " << Fine;
}

int main(){
	int N,date;
	cout << "Enter the array range : ";
	cin >> N;
	cout << "Enter the date : ";
	cin >> date;
	int car[N],fine[N];
	for(int i = 0 ; i < N ; i++){
		cout << "Enter the car number : ";
		cin >> car[i];
	}
	for(int i = 0 ; i < N ; i++){
		cout << "Enter the fine amount : ";
		cin >> fine[i];
	}
	totalFine(car,fine,N,date);
}
//N = 4, date = 12
//car[] = {2375, 7682, 2325, 2352}
//fine[] = {250, 500, 350, 200}
