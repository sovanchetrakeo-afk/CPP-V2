#include <iostream>
using namespace std;
int main(){
    int choice;
    string name;
    int n;
    int factorial=1;
    do{
        cout<<"1. Greet"<<"\n";
        cout<<"2. Calculate factorial"<<"\n";
        cout<<"0. Exit"<<"\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter your only lastname or firstname\n";
            cin>>name;
            cout<<"Hello,"<<name<<"\n";
            cout<<"Nice to meet you!\n";
            break;
        case 2:
            cout<<"Enter your number to factorial:";
            cin>>n;
            for(int i=1;i<=n;i++){
               factorial*=i;
            }
            cout<<"The result of factorial is:"<<factorial<<"\n";
            break;
        default:
            cout<<"invalid choice\n";
            break;

        }
    }while(choice!=0);
return 0;
    
}