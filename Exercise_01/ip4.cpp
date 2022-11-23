#include <iostream>

using namespace std;

void Nth_term(int a1 , int r1 , int n1){
	int i;
	for(i = 1 ; i <= n1 ; i++){
		a1 = a1*r1;
		if(i == n1){
			cout << "The required number is :";
			cout << a1;
		}
	}
}

int main(){
	int A;
	int R;
	int N;
	cout << "Enter the first term : " ;
	cin >> A ;
	cout << "Enter the common ratio : " ;
	cin >> R ;
	cout << "Enter the position of the term to be displayed :" ;
	cin >> N ;
	Nth_term(A,R,N);
	return 0;
}
