#include<stdlib.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

 
int main()
{
    int Book = 0, Toy = 0, Model = 0, Stationery = 0, salary = 1000;
    float Books = 0, Toys = 0, Models = 0, Stationerys = 0, sum = 0, Payment = 0, bonus = 0;

    cout<<"Enter your Books:";
    cin >> Book;
    cout<<"Enter your Toys:";
    cin >> Toys;
    cout<<"Enter your Toys:";
    cin >> Model;
    cout<<"Enter your Stationerys:";
    cin >> Stationery;

    Books = Book  * 120;
    Toys = Toy  * 80;
    Models = Model * 50;
    Stationerys = Stationerys *15;
    sum = Books, Toys, Models, Stationerys;
    if (sum == 0)
    {
        Payment = salary *0.5;
    }
    else if (sum > 0 && sum <= 4999)
    {
        Payment = salary *0.9;
    }
    else if (sum >= 5000 && sum <= 9999)
    {
        Payment = salary;
    }
    else if (sum >= 10000 && sum <= 9999)
    {
        Payment = salary + (sum *0.05);
    }
    else if (sum >= 100000)
    {
        Payment = salary + (sum *0.1);
    }
    cout <<"sum is:"<< sum << "bonus is"<< bonus << endl;
    cout << "Payment="<< Payment;

} 
