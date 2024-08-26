#include<iostream>
using namespace std;
int main()
{
  int g1,g2,g3,g4,g5;
  int sum=0;
  float avg=0;
  cout<<"Enter grade 1: ";
  cin>>g1;
  cout<<"Enter grade 2: ";
  cin>>g2;
  cout<<"Enter grade 3: ";
  cin>>g3;
  cout<<"Enter grade 4: ";
  cin>>g4;
  cout<<"Enter grade 5: ";
  cin>>g5;
  sum=(g1+g2+g3+g4+g5);
  avg=float(sum)/5;
  cout<<"The average grade is: "<<avg<<endl;
  return 0;
}