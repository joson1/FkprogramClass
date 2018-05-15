//unsolved
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;
    int c[4] = {6,8,10,12};
    float s[4] = {100.0,100.0,100.0,100.0};
    int y[4] = {0,0,0,0};
    for(i=0;i<4;i++){
        do{
            s[i] = s[i]*(1+c[i]/100.0);
            y[i]=y[i]+1;
        }while(s[i]<200.0);
    }
    for(j=0;j<4;j++)
        cout<<y[i]<<endl;
    return 0;
}
