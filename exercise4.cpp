#include<iostream>
using namespace std;
int main(){
  int studentScore=85;                            //camelcase
  string StudentRecord="Alice completed her test";//PascalCase
  int student_score=92;                           //snake_case
  const int MAX_BUFFER_SIZE=1200;                 //SCREAMING_SNAKE_CASE
  //Then print each name and value
  cout << "camelCase - studentScore: " << studentScore << endl;
  cout << "PascalCase - StudentRecord: " << StudentRecord << endl;
  cout << "snake_case - student_score: " << student_score << endl;
  cout << "SCREAMING_SNAKE_CASE - MAX_BUFFER_SIZE: " << MAX_BUFFER_SIZE << endl;
  return 0;
}