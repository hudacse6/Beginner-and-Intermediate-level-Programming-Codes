#include<bits/stdc++.h>
using namespace std;



void recursive()
{
   static int count=1;
    if(count>5)
    {
        return ;
    }
    //printf("I am learning recursion.\n");
    printf("Count =%d\n",count);
    //recursive(count+1);
    count+=1;
    recursive();
    //printf("Count =%d\n",count);
}

int main()
{
   recursive();
   return 0;
}
