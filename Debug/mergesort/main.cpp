#include <bits/stdc++.h>
using namespace std;

#define size 8
int array[size];
int result[size];

void mergesort(int s, int f);
void merge(int l1,int r1, int l2, int r2);

int main()
{
    mergesort(0, 7);
    for(int k=0 ; k<8 ; k++)
    {
        cout<<result[k]<<" ";
    }
    return 0;
}

void mergesort(int s, int f)
{
    if(s<f)
    {
        int middle= (s+f)/2;

        mergesort(s,middle);
        mergesort(middle+1,f);

        merge( s,middle,middle+1,f );
    }
}

void merge(int l1,int r1, int l2, int r2)
{
    int i=l1,j=l2;
    int k=l1;
    for( k= l1 ; k<= r2 ; k++)
    {
        if( array[i]<= array[j]  && i <= r1 && j<= r2)
        {
            result[k]= array[i];
            i++;
        }
        else if (array[i] > array[j]  && i <= r1 && j<= r2 )
        {
             result[k]= array[i];
            j++;
        }
        else if( i<= r1)
        {
            result[k]= array[i++];
        }
        else if( j<= r2)
        {
            result[k]= array[j++];
        }
    }
    for( i= l1 ; i<=r2 ; i++)
    {
            array[i]=result[i];
    }

}
