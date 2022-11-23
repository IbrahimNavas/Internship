#include <iostream>
using namespace std;
int main(){
	int year;
	string month;
	cout << "Enter the year : ";
	cin >> year;
	cout << "Enter the month : ";
	cin >> month;
	int leap = 1;
	if(year%4 == 0){
		leap = 1;
	}
	else{
		leap = 0;
	}
	if(leap == 1 && month == "February"){
		cout << "The month has 29 days ";
	}
	else if(leap == 0 && month == "February"){
		cout << "The month has 28 days ";
	}
	else if(month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December"){
		cout << "The month has 31 days ";
	}
	else if(month == "April" ||2020 month == "June" || month == "September" || month == "November"){
		cout << "The month has 30 days ";
	}
}
