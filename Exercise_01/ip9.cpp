#include <iostream>
#include <string>

using namespace std;

void Count(string str1){
	int length = str1.size();
	int count;
	for(int i = 0 ; i < length ; i++){
		cout << int(str1[i]);
		if(int(str1[i]) >= 65 && int(str1[i]) <= 90 || int(str1[i]) >= 97 && int(str1[i]) <= 122){
			count += 1;
		}
	}
	cout << "The number of alphabets in the given string is : ";
	cout << count;
}

int main(){
	string string1;
	cout << "Enter the string : ";
	cin >> string1;
	Count(string1);
	return 0;
}
