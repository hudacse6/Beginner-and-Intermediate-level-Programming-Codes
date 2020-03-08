#include<bits/stdc++.h>
using namespace std;
class traingle
{
    int area;
public:
    void get()
    {
        cin >> area;
    }
    void disp()
    {
        cout << area << endl;
    }
    void calc ( traingle, traingle );
};

void traingle::calc ( traingle c1, traingle c2 )
{
    area = ( c1.area * c2.area ) / 2;
}

int main()
{
    traingle c1, c2, c3;
    cout << "Enter base:";
    c1.get();
    cout << "Enter hight:";
    c2.get();
    c3.calc ( c1, c2 );
    cout << "Area of triangle is : ";
    c3.disp();
}
