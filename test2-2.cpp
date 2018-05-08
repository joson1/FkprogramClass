#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int a,b;

  cout<<"input 2 numbers:"<<endl;
  cin>>a>>b;


  cout<< (a<b?a:b)<<(a>b?a:b)<<endl;
  system("pause");
}
