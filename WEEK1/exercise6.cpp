#include<iostream>
using namespace std;
int main(){
   char grade;
   cout<<"Enter the grade only uppercase: "<<"\n" ;
   cin>>grade;
   switch(grade){
    case 'A': cout<<"Excellent\n"; break;
    case 'B': cout<<"Very Good\n"; break;
    case 'C': cout<<"Good\n"; break;
    case 'D': cout<<"Fair\n"; break;
    case 'E': cout<<"Poor\n"; break;
    case 'F': cout<<"Fail\n"; break;
    default : cout<<"Needs improvement\n";
   }
   return 0;
}