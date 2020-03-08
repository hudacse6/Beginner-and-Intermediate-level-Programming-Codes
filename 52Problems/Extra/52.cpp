#include<bits/stdc++.h>
using namespace std;

int  brute_force ( char  text[], char pattern[] )
{
    int cont = 0, i, j;
    int n = strlen ( text );
    int m = strlen ( pattern );
    for ( i = 0; i < n; i++ )   // let n be the size of the text and m the size of the pattern which we want to be search
    {
        for ( j = 0; j < m && i + j < n ; j++ )
        {
            if ( text[i + j] != pattern[j] )
            {
                break;
            }
        }
        if ( j == m )
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        char s1[129]; //main text
        char s2[129];  // pattern which will be to search
        cin >> s1 >> s2;
        cout << brute_force ( s1, s2 ) << endl;
    }
    return 0;
}



//
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//int  brute_force (char  text[], char pattern[] )
//{
//    int k1=strlen(text);
//    int k2=strlen(pattern);
//    int i,j,n,m;
//    n=k1;
//    m=k2;
//    int co=0;
//    for ( i = 0; i < n; i++ )  // let n be the size of the text and m the size of the pattern
//    {
//        for ( j = 0; j < m && i + j < n ; j++ )
//            if ( text[i + j] != pattern[j] )
//                break; // miss match found, break the inner loop
//
//            if ( j == m ) // match found
//                co++;
//    }
//    return co;
//}
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int j,i;
//        char s1[129];
//        char s2[129];
//        cin>>s1>>s2;
//        cout<<brute_force(s1 ,s2)<<endl;
//    }
//    return 0;
//
//}







//function Knuth_Morris_Pratt ( text[], pattern[] )
//{
//    // let n be the size of the text, m the
//    // size of the pattern, and F[] - the
//    // "failure function"
//    build_failure_function ( pattern[] );
//    i = 0; // the initial state of the automaton is the empty string
//    j = 0; // the first character of the text
//    for ( ; ; )
//    {
//        if ( j == n ) break; // we reached the end of the text
//        // if the current character of the text "expands" the
//        // current match
//        if ( text[j] == pattern[i] )
//        {
//            i++; // change the state of the automaton
//            j++; // get the next character from the text
//            if ( i == m ) // match found
//            }
//        // if the current state is not zero (we have not
//        // reached the empty string yet) we try to
//        // "expand" the next best (largest) match
//        else if ( i > 0 ) i = F[i];
//        // if we reached the empty string and failed to
//        // "expand" even it; we go to the next
//        // character from the text, the state of the
//        // automaton remains zero
//        else j++;
//    }
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int j,i;
//        char s1[129];
//        char s2[129];
//        cin>>s1>>s2;
//        int k1=strlen(s1);
//        int k2=strlen(s2);
//         int cont=0;
//        for(i=0; i<=(k1-k2); i++)
//        {
//
//            if(s2[0] == s1[i])
//            {
//
//                for(j=0; j<k2; j++)
//                {
//                    if(s2[j] != s1[i+j])
//                    {
//                         cont++;
//                    }
//                }
//                if(j == k2)
//                {
//
//                    cout<<"cont in last id condition:"<<cont<<"\n";
//                    //break;
//                }
//            }
//        }
//    }
//    return 0;
//}
//
