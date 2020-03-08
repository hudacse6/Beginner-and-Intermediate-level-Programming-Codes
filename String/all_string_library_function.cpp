/// strtok
#include<bits/stdc++.h>
using namespace std;
int main()
{
  ///  freopen("sss.txt" , "r" , stdin);
    char str[1001] = "Hadisur -rahman , is $student . of CSE adsa kljsdfoi klsjcslmclascdjio mnc sdlkjfas; oifj sacdkl cmnaskjcn sdlk,x,cmnv ;aodshfjiasdv x,mcvndfkj aksjdhvfdksjahfj anv,m.scvndskjvhndkjashfao n,mvndkljshfasoihfa ekdjashv x,cmnv,m.xzvn lasjdhv.,mxcnv askdjvhf;as .xcmvhnjsdvhn x,mcvklsjdhfsdpwhnvdask knjvjds vcmvn kdjhvsikdhfvnksdnv ,mxcnv ksdhakvnxcnv,.xmnvijksdvn .xcnvklsjdbhv x,mcbvnklj asdbvhklvnxcmnvliadjshblan vz.kasjdhfi bcvnuiae f,xkhdsamjdncis ncvmn xkcmvnauidhsvksdnvk nvkjxvljdksvn xmncvdhfvkljdbnv dkjvfbn dkljs ldkjfvh dljfk vn kdjvndfjsv 'aaa ";
    char *token=strtok ( str ," ");
    int i=0;
    while ( token != NULL )
    {
        if( token[i] >= 'a' &&  token[i] <= 'z' )
        {
            token[i]=token[i]-32;  // maks this upcase letters
            //cout << token <<endl;
        }
        cout << token <<endl;
        token=strtok(NULL, " - , . ; ' $ " )  ;
    }
    return 0;
}


/*
/// strrev
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[101];
    char str2[101];
    gets(str1);
    gets(str2);
    strrev(str1) ;
    strrev(str2);
    cout<<str1<<" \n"<<str2;
    return 0;
}

*/

/*
/// strupr
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[101];
    char str2[101];
    gets(str1);
    gets(str2);
    strupr(str1) ;
    strupr(str2);
    cout<<str1<<" \n"<<str2;
    return 0;
}
*/
/*
/// strlwr
#include<bits/stdc++.h>
using namespace std;
int main()
{
   char str1[101];
   char str2[101];
   gets(str1);
   gets(str2);
   strlwr(str1) ;
   strlwr(str2);
   cout<<str1<<" \n"<<str2;
   return 0;
}

*/

/*
/// strcamp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[101];
    char str2[101];
    gets(str1);
    gets(str2);
    int cmp;
    cmp=strcmp(str1,str2);
    if( cmp > 0)

        cout<<"str1 are big ";

    else

        cout<<"str2 are big";


    return 0;
}

*/

/*
/// strcpy  copy one string to another one .
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[101]="Hadisur";
    char str2[101]="Rahman";
    strcpy(str1,str2);
    cout<<str1;

    return 0;
}
 */
/*
/// strcat   concatenating two string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[101]="Hadisur ";
    char str2[101]="Rahman";
    strcat(str1,str2);
    cout<<str1;

    return 0;
}
*/

