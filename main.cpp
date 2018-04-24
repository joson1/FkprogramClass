#include <iostream>

using namespace std;

void main()
{
    float h,w,t;
    cout<<"please enter h,w"<<endl;
    cin>>h>>w;
    t=w/(h*h);
    if(t<=18) cout<<"T="<<t<<"\tLow Weight!"<<endl;
    if(t>=18&&t<25)  cout<<"T="<<t<<"\tStandard Weight!"<<endl;
    if(t>=25&&t<27)  cout<<"T="<<t<<"\tHigher Weight!"<<endl;
    if(t>27)  cout<<"T="<<t<<"\tToo fat! Weight!"<<endl;
    system("pause");
}