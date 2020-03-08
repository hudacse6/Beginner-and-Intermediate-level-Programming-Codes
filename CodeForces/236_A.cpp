#include<bits/stdc++.h>
using namespace std;

int main()
{
        char Tcase[100]; int t=1;
        gets(Tcase);
        int len = strlen( Tcase );
        sort(Tcase,Tcase+len);
        int count=0;
        for(int  i= 0 ; i<len ; i++)
        {
            if(Tcase[i] != Tcase[i+1])
            {
                count++;
            }

        }
        if ( count % 2 == 0 )
            cout <<"CHAT WITH HER!" << "\n";
        else
            cout <<"IGNORE HIM!"<< "\n";

    return 0;
}



