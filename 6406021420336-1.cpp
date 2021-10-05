#include <iostream>
using namespace std;

int main()
{
    {
        int Year;
        cout <<"\nEnter year :";
        cin >>Year;
        if ((Year % 4)!=0){
            cout <<Year<<"is not a leap year";

        }
        else if ((Year%400)==0){
            cout<<Year<<"is leap a year";

        }
        else if ((Year%400)==0){
             cout<<Year<<"is not leap a year";
        }
        else {
            cout<<Year<<"is leap a year";
        }
    } 
    return 0;
}
