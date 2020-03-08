#include <stdio.h>
int main()
{
    int i;
    i=1;
    for(;;)
    {
        if(i>100)
            break;

        if(i%3==0)
            printf("%d\t",i);
        i++;
    }
    return 0;
}

