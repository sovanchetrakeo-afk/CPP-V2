#include<iostream>
using namespace std;
int main(){
    int multipleResult;
  for(int i=1;i<=10;i++){
     multipleResult=i*5;
     cout<<i<<"*5="<<multipleResult<<"\n";
  } 
  cout<<"The first 10 multiple of 5 are\n";
  for(int i=1;i<=10;i++){
    multipleResult=i*5;
  cout<<" "<<multipleResult;
  } 
  return 0;
}
