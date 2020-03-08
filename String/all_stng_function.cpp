#include<bits/stdc++.h>
using namespace std;
int main()
{
    char mainstring[50],substring[50],*pos='\0';

    cout<<"Enter the main String :";
    gets(mainstring);

    cout<<"Enter the sub String you want to find:";
    gets(substring);

    pos=strstr(mainstring,substring);

    if(pos)
        printf("%s We find the String :%d",substring,pos);


    else
        printf("%s %d",substring);

    return 0;


                                     j
//    char str1[50],str2[50];
//    cout<<"Enter 1st String :";
//    gets(str1);
//
//    strdup()


//    char name_1[100]="Hadisur ";
//    char name_2[100]="Rahman";
//    strcpy(name_2,name_1);
//    int len;
//    len=strlen(name_1);
//    cout<<len;
//
//    strcat(name_1,"Rahman.h");
//
//
//    puts(name_1);
//    char str1[50],str2[50];
//    cout<<"Enter 1st String :";
//    gets(str1);
//
//    cout<<"Enter 1st String :";
//    gets(str2);
//
//    int value;
//
//    value=strcmp(str1,str2);
//
//    if( 0 == value)
//        cout<<"Two string are  equal";
//    else
//        cout<<" Two string are not equal";

//    char str1[50],str2[50];
//    cout<<"Enter 1st String :";
//    gets(str1);
//
//    strrev(str1);
//    puts(str1);
}
