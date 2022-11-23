#include <bits/stdc++.h>

using namespace std;

string isPalindrome(string string1){
	int i;
	int length;
	length = string1.size();
	string string2 = string1;
	reverse(string2.begin(),string2.end());
	if(string1 == string2){
		cout << "The given string is Palindrome ";
	}
	else{
		cout << "The given string is not Palindrome ";
	}
	
}

int main(){
	string str1;
	cout << "Enter the string : ";
	cin >> str1;
	isPalindrome(str1);
}
