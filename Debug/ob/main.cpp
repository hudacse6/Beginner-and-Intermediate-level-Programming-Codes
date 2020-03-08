#include<iostream>
using namespace std;
class traingle {
    double base, hight, area;
public:
    void get() {
        cin >> base >> hight ;
    }
    void disp() {
        cout << area << endl;
    }
    void calculation ( traingle, traingle );
};
void traingle :: calculation ( traingle c1, traingle c2 )
{
    area = ( c1.base * c1.hight ) / 2;
}
int main()
{
    traingle c1, c2;
    cout << "Enter base and hight no.:";
    c1.get();
    cout << "\nThe Area is = ";
    c2.disp();
}
