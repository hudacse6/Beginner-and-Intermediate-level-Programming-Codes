#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total_marks[]={6,7,4,6,9,7,6,2,4,3,4,1};
    int marks_count[11];
    for(int i=0 ; i<11 ; i++)
    {
        marks_count[i]=0;

    }

    for(int i=0 ; i<12 ; i++)
        {
            marks_count[total_marks[i]]++;

                for(int j=0 ; j <=10 ;j++)
                {
                    printf(" %d ",marks_count[j]);
                }
                printf("\n");
        }

return 0;
}

