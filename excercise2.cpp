#include<iostream>
using namespace std;
int main(){
   int studentCount=30;
   float temperature =36.2;
   char grade='A';
   bool passed =true;
   cout<<"Number  of  student  is:"<< studentCount<<"\n";
   cout<<"The    temperature   is:"<< temperature <<"\n";
   cout<<"The grade of student is:"<<grade<<"\n";
   cout<<"The number of passes is:"<<passed<<"\n";
   if(passed){
    cout<<"The student is passed"<<"\n";
   }else{
    cout<<"The student is failed"<<"\n";
   }
   return 0;
}