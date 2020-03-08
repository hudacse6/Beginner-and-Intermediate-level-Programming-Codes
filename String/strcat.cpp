#include<bits/stdc++.h>
using namespace std;
int j;/// for global declaration it takes initialize value of 0;
int main()
{
    char str1[]="bangla";
    char str2[]="desh";
    char str3[12];

    for(int i=0 ; i<6 ; i++ )
    {

        str3[j]=str1[i];
        j++;
    }

   for(int i=0 ; i<4 ; i++)
    {

        str3[j]=str2[i];
        j++;

    }

    str3[j]='\0';
    printf("%s\n",str3);
    return 0;
}



/*
int main()
{
    char str1[]="Hadisur";
    char str2[]="Rahman";
    char str3[14]=" ",i;
    for(int i=0 ;  str1[i]!='\0' ; i++)
    {
        str3[i]=str1[i];
        cout<<str3[i];
    }
   cout<<"\t";
     for(int i=0 ; str2[i]!='\0';i++)
    {
        str3[i]=str2[i];
       cout<<str3[i];
    }
 return 0;
}
*/

/*
int main()
{
    char ch1[]="Hadisur";
    char ch2[]=" Rahman";
    strcat(ch1,ch2);
    puts(ch1);
    return 0;
}
*/


/// concatenation two string using strcat function
/*
int main()
{
    char ch[100]="My name is ";
    strcat(ch,"Hadisur rahman");
    puts(ch);
    return 0;
}

*/
