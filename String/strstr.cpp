#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
/*
	char *pos,*mainstring,*substring;
    cout<<" \nEnter main string :";
    gets(mainstring);
    cout<<" \nEnter the string u want find:";
    gets(substring);

    pos=strstr(mainstring,substring);

   printf("%d",pos);*/



    char haystack[20] = "TutorialsPoint";
    char needle[10] = "Point";
    char *ret;

    ret = strstr(haystack, needle);

	printf("The substring is: %s\n", ret);

return 0;
}
