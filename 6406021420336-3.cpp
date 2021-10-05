#include<iostream>
using namespace std;
int main()
{
    int DD =0 , MM =0, YY =0, total_day=0;
    
    cout<<"Please enter day month and year :";
    cin>>DD;cin>> MM;cin>> YY;

    total_day+= (YY-2513.)*12*30;
    total_day+= (MM-1)*30;
    total_day+= DD-1;

    cout <<"The difference is about "<<total_day << "days";
    
    return(0);
}