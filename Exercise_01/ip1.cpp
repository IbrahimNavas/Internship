#include <iostream>
using namespace std;
int main(){
	int side1,side2,side3;
	cout << "Enter the first side : ";
	cin >> side1;
	cout << "Enter the second side : ";
	cin >> side2;
	cout << "Enter the third side : ";
	cin >> side3;
	if(side1 == side2 && side2 == side3){
		cout << "The given is an equilateral triangle" << endl;
	}
	else if(side1 == side2 || side2 == side3 || side3 == side1){
		cout << "The given is an isoceles triangle" << endl;
	}
	else{
		cout << "The given is a scalene triangle" << endl;
	}
}
