//#include<bits/stdc++.h>
//using namespace std;

#include<stdio.h>
int main()
{
    int a, b, tcase, i,n;
    scanf("%d",&tcase);
    int zero,cont;
    while ( tcase-- )
    {
        int value=0;
        scanf ( "%d", &a);
        for ( i = 5 ; i <= a ; i *= 5 )
        {
            zero=a/i;
            value=value+zero;
        }
        printf("%d\n",value) ;
    }
    return 0;
}





//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    double n, fact = 1;
//    cin >> n;
//    for ( int i = 1  ; i <= n ; i++ )
//    {
//        fact = fact * i;
//    }
//    printf ( "%.llf", fact );
//    return 0;
//}
