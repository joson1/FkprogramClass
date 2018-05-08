#include<stdio.h>
#include<iostream>
#include<stdlib>
using namespace std;
int main()
{
  
  int magic;
  int guess;
  int count=0;
  magic=rand()%100+1;
  do{
    cout<<"please guess a magic number: "<<endl;
    cin>>magic;
    count++;
    if(guess>magic)
    {
      cout<<"Wrong! Too high"<<endl;
      
    }else if(guess<magic){
      cout<<"Wrong! Too low"<<endl;
      
    }
    
    

  }while(guess!=magic);

  cout<<"Right!"endl;
  cout<<"counter="<<count<<endl;
  system("pause");
}
