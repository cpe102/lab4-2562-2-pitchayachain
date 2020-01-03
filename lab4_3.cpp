#include <iostream>
using namespace std;
#include <cmath>

 int findDivisor(int num){
    int min;
     if(num > 1){
         min = num;
     }

int i = 2;
while (i > 0){
   if(num%i == 0 ){
    return i;
    }else{
            i++;
        }
    }
 }
 int main(){
     int num;
     cout << "input =";
     cin >> num;
     cout << "Answer = " << findDivisor(num);

     return 0;
 }
