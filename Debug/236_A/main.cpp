#include<bits/stdc++.h>
using namespace std;

int main()
{
     while(1)
     {
        char Tcase[100];
        cin>>Tcase;
        int len = strlen( Tcase );
        sort(Tcase,Tcase+len)  ;
        char a[1];
        a[1]=Tcase[1];
        int count=0,i;
        for( i= 1 ; i<len ; i++)
        {
            if(Tcase[i] != a[1]);
            {
                count++;
                a[1]=Tcase[i];
            }

        }
        if ( count % 2 == 0 )
            cout <<"CHAT WITH HER!" << "\n"<<count<< endl;
        else
            cout <<"IGNORE HIM!"<< "\n"<<count<< endl ;

}

    return 0;
}



