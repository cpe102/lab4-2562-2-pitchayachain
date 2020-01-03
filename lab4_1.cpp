#include <iostream>
#include <cmath>
using namespace std;


    double aaa(double x){

        double y = 3*pow(x,3)+2*2.71828+pow(2,2*x+1)+sqrt(pow(x,2)+1);
        return y;
    }

    int main(){
    	
double n;
cout << "Enter x = ";
cin >> n;
cout << "Result y = "<< aaa(n);

	return 0;
}



