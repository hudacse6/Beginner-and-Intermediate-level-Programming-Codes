#include <iostream>
using namespace std;

int main()
{
    bool isPrime = true;
    cout << "Enter a number.\n";
    int number;
    cin >> number;
    for ( int i = 2; i <= number / 2; i++ ) //what is 'i <= number / 2'?
    {
        if ( number % i == 0 )
        {
            isPrime = false; //why 'isPrime = false'?
            break;
        }
    }
    if ( isPrime )
        cout << "Prime\n";
    else
        cout << "nope\n";
    return 0;
}

//প্রকৃত প্রেম
//শুধু কাছে টানে না
//গাছেও তোলে।
