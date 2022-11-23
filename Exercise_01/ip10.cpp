#include <bits/stdc++.h>
#include <string>

using namespace std;

bool isAnagram(string str1 , string str2){
	int len1;
	int len2;
	
	len1 = str1.size();
	len2 = str2.size();
	
	sort(str1.begin() , str1.end());
	sort(str2.begin() , str2.end());

	if(len1 == len2){
		int i = 0;
		while(len1 > i){
			if(str1[i] == str2[i]){
				return true;
			}
			else{
				return false;
			}
		}
	}
	else{
			return false;
	}
}

int main(){
	string string1;
	string string2;
	
	cout << "Enter the first string : ";
	cin >> string1;
	
	cout << "Enter the second string : ";
	cin >> string2;
	
	isAnagram(string1,string2);
	
	if (isAnagram(string1,string2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";
	return 0;
}
