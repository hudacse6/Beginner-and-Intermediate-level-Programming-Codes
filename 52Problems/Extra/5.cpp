#include<stdio.h>
int main()
{
    int Tcase,n,i;
    scanf("%d",&Tcase);
    while(Tcase--) // for input case
    {
        scanf("%d",&n) ;
        for( i= 0 ; i < n ; i++) // for output
        {
            for(int j = 0 ; j < n ; j++ )
            {
                printf("*") ;
            }
             printf("\n") ;
        }
    }
    return 0;
}
