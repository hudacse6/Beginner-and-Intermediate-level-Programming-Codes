#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    int x1, x2, y1, y2,r;
    while ( tcase-- )
    {
        cin >> x1 >> y1 >> r >>x2 >> y2 ;
        if ( sqrt ( pow( (x2 - x1 ),2)  +  pow( (y2 - y1 ),2)) > r )
            cout<<"out of circle "<<"\n";
        else
            cout<<" In circle "<<"\n";
    }
    return 0;
}
