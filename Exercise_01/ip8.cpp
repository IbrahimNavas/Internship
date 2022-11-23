#include <iostream>

using namespace std;

int Fibonaci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(Fibonaci(x-1)+Fibonaci(x-2));
   }
}

int main() {
   int x , i=0;
   cout << "Enter the range of the series : ";
   cin >> x;
   cout << "Fibonnaci Series : ";
   while(i < x) {
      cout << " " << Fibonaci(i);
      i++;
   }
   return 0;
}
