#include<bits/stdc++.h>
using namespace std;

static int x=10;

void x1()
{
    x=10;
    printf("\n From x1():x=%d\n",x);///10
    x=15;
}

void x2()
{
    printf("\n From x2():x=%d\n",x);
}

int main()
{
    int x=12;
    printf("\n From main():x=%d\n",x);///12
    x1();
    x2();
    return 0;

}



//#include<bits/stdc++.h>
//using namespace std;
//
// int n;
//int main()
//{
//    int n=10;
//    printf("In scope level 1:n=%d\n",n); //10
//    {
//        n++;//11
//        printf("In scope level 2:n (n++)=%d\n",n); //11
//        {
//            int n=1;
//            printf("\n In scope level 3: n=%d\n",n);  //1
//            n++;
//            printf("\n In scope level 3: n (n++) =%d\n\n",n); //2
//        }
//        printf("\n In scope level 2: n  =%d\n",n);  //11
//
//    }
//    printf("\n In scope level 1: n =%d\n",n);   //10
//    return 0;
//
//}




//
//#include<bits/stdc++.h>
//using namespace std;
//
//
//
//void loc_var(void)
//{
//    int ratna,nipu,romi;
//    ratna=15,nipu=12,romi=11;
//    printf("Ratna:%d Nipu:%d Rumi:%d",ratna,nipu,romi);
//}
//
//
//int main()
//{
//
//    loc_var();
//    printf("Ratna:%d Nipu:%d Rumi:%d",ratna,nipu,romi);
//    return 0;
//}

