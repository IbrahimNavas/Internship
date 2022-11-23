#include <iostream>

using namespace std;

int main(){
	int arr[5] = {4,1,2,1,2};
	int i,j;
	int count = 1;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(arr[i] == arr[j] && i != j)
			break;
		}
		if(j == 5 ){
		printf("\nNon-repeating element [%d] : %d \n",count,arr[i]);
		++count;
		}
	}
}
