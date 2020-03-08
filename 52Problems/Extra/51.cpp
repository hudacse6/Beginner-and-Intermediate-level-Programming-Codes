#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int j,i;
        char s1[129];
        char s2[129];
        cin>>s1>>s2;
        int k1=strlen(s1);
        int k2=strlen(s2);
        for(i=0; i<=(k1-k2); i++)
        {
            if(s2[0] == s1[i])
            {
                for(j=0; j<k2; j++)
                {
                    if(s2[j] != s1[i+j])  ///  0  !=  0 -false
                    break;
                }
                if(j == k2)
                {
                    cout<<i<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}
