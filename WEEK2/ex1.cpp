#include<iostream>
#include<iomanip>
using namespace std;
int add(int a, int b){
    int addition=a+b;
    return addition;
}
int subtract(int a,int b){
    int subtr=a-b;
    return subtr;
}
int multiply(int a,int b){
    int multiplication=a*b;
    return multiplication;
}
double divide(int a, int b=1){
    if(b==0){
    return 0.0;
    }
double div= (double)a/b;
return div;
}
double add(double a, double b){
    double addition=a+b;
    return addition;
}
int main(){
  cout<<"The result of addition in integer is "<<add(5,3)<<"\n";
  cout<<"The result of addition in decimal is "<<add(2.5,4.2)<<"\n";
  cout<<"The result of subtraction is "        <<subtract(10,4)<<"\n";
  cout<<"The result of multiplication is "     <<multiply(7,6)<<"\n";
  cout<<fixed<<setprecision(1)<<"The result of division is "           <<divide(20,4)<<"\n";
  cout<<fixed<<setprecision(1)<<"The result of division is "           <<divide(9)<<"\n";
  return 0;  
}