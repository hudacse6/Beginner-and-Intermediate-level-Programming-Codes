#include<bits/stdc++.h>
#include<string.h>
using namespace std;

 int main()
 {
     char s[1002];
     char word[100];
     int i, j, length, is_word_started;
     length = strlen(s);
     is_word_started = 0;
     j = 0 ;
     while (gets(s))
    {
     for (i = 0 ; i < length ; i++)
        {
         if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (is_word_started == 0)
                    {
                        is_word_started = 1;
                        word[j] = 'A' + s[i] - 'a'; // first character is capital
                        j++;
                    }
                else
                    {
                        word[j] = s[i];
                        j++;
                    }
            }

         else if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '.' && s[i] <= '9')
                {
                   if(is_word_started==0)
                        {
                            is_word_started = 1;
                            word[j] = s[i];
                            j++;
                        }
                    else
                        {
                            word[j] = s[i];
                            j++;
                        }
                }
         else
            {
             if (is_word_started == 1)
             {
                is_word_started = 0;
                word[j] = '\0';
                printf("%s\n", word);
                word[j]=0;
                j = 0;
             }
           }

     }
     printf("%s\n", word);
    cout<<"-------------------------\n";
     }


     return 0;
 }

