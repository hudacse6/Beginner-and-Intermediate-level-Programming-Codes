#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include <windows.h>
#include <winbase.h>
using namespace std;

void Addition()
{
    double p,q,sum=0,n;
    cout<<"How Many Numbers Do You Want To Add? \n>>";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers (After Each Press Enter) \n";
    for(p=1; p<n+1; p++)
    {
        cout<<"Enter No."<<p<<" Here >>>";
        cin>>q;
        sum=sum+q;
    }
    cout<<"Sum Of Given "<<n<<" Numbers Is "<<sum;
}

void Subtraction()
{
    double p,q;
    cout<<"The Method Would Be X-Y\nEnter X = ";
    cin>>p;
    cout<<"Enter Y = ";
    cin>>q;
    cout<<p<<"-"<<q<<" = "<<p-q;
}

void Multiplication()
{
    double p,q,mul=1,n;
    cout<<"How Many Numbers Do You Want To Multiply? \n>>";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers (After Each Press Enter) \n";
    for(p=1; p<n+1; p++)
    {
        cin>>q;
        mul=mul*q;
    }
    cout<<"Sum Of Given "<<n<<" Numbers Is "<<mul;
}

void Division()
{
    double p,q;
    cout<<"The Method Would Be X/Y \nEnter X = ";
    cin>>p;
    cout<<"Enter Y = ";
    cin>>q;
    cout<<p<<"/"<<q<<" = "<<p/q;
}

void Square()
{
    double p;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Square Of "<<p<<"Is = "<<p*p;
}

void SquareRoot()
{
    double p;
    cout<<"Enter A Number = ";
    cin>>p;
    cout<<"Square Root Of "<<p<<"Is : "<<sqrt(p);

}

void X_Y()
{
    double p,q;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Enter Y = ";
    cin>>q;
    cout<<p<<"^"<<q<<" = "<<pow(p,q);
}

void x_nbY()
{
    double p,q,n;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Enter Y = ";
    cin>>q;
    cout<<"Enter N = ";
    cin>>n;
    cout<<p<<"^1/"<<q<<" = "<<pow(p,n/q);
}

void xEX()
{
    int i;
    double result;
    double x;
    cout<<"Enter X = ";
    cin>>x;
    for(i = 1; i <= x; i++)
    {
        result=result*i;
    }
    cout<<x<<"!"<<" = "<<result;
}

void Percent()
{
    double p,q;
    cout<<"The Function Is Like This <20%(x) Of 12000(y)\nEnter X = ";
    cin>>p;
    cout<<"Enter Y = ";
    cin>>q;
    cout<<p<<"% Of "<<q<<" Is "<<(p*q)/100;
}

void log10X()
{
    int p;
    cout<<"The Function Would Be Log10(X)\n Enter X = ";
    cin>>p;
    cout<<"Log10("<<p<<") = "<<log10(p);
}

void Modulus()
{
    int p,q;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Enter Y = ";
    cin>>q;
    cout<<p%q;
}

void sinX()
{
    double p;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Sin ("<<p<<")"<<" = "<<sin(p*3.14159/180);
}

void cosX()
{
    double p;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Cos ("<<p<<")"<<" = "<<cos(p*3.14159/180);
}

void tanX()
{
    double p;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Tan ("<<p<<")"<<" = "<<tan(p*3.14159/180);
}

void cosecX()
{
    double p;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Cosec ("<<p<<")"<<" = "<<1/(sin(p*3.14159/180));
}

void cotX()
{
    double p;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Cot ("<<p<<")"<<" = "<<1/(tan(p*3.14159/180));
}

void secX()
{
    double p;
    cout<<"Enter X = ";
    cin>>p;
    cout<<"Sec ("<<p<<")"<<" = "<<1/(cos(p*3.14159/180));
}

void MatriX()
{
    system("CLS");
    system("COLOR 74");
    int a;
    cout<<"What Action Do You Have In Mind ????\n1.Addition\n2.Subtraction\n3.Multiply\n4.Transpose\n>>";
    cin>>a;
    if(a==1)
    {
        int ok1,ok2,i,j,sum=0;
        double nix1[100][100],nix2[10][10],nix3[10][10];
        cout<<"Enter Number Of Row And columns Of Matrix >>>>\n";
        cin>>ok1;
        cin>>ok2;
        cout<<"Enter The Elements of First Matrix Here >>>\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                cin>>nix1[i][j];
        }
        cout<<"Enter The Elements of Second Matrix Here >>>\n";
        for(i=0; i<ok1; i++)
            for(j=0; j<ok2; j++)
                cin>>nix2[i][j];
        cout<<"\n The first "<<ok1<<" x "<<ok2<<" matrix entered by you is :\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++ )
                cout<<"\t"<<nix1[i][j] ;
            cout<<"\n";
        }
        cout<<"\n The Second "<<ok1<<" x "<<ok2<<" matrix entered by you is:\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++ )
                cout<<"\t"<<nix2[i][j];
            cout<<"\n";
        }
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                nix3[i][j]=nix1[i][j]+nix2[i][j];
        }
        cout<<"Sum Of Entered Matrix : \n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                cout<<"\t"<<nix3[i][j];
            cout<<"\n";
        }
    }
    else if(a==2)
    {
        int ok1,ok2,i,j,sum=0;
        int nix1[100][100],nix2[100][100],nix3[100][100],nix4[100][100];
        cout<<"Enter Number Of Row And columns Of Matrix >>>>\n";
        cin>>ok1;
        cin>>ok2;
        cout<<"Enter The Elements of First Matrix Here >>>\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                cin>>nix1[i][j];
        }
        cout<<"Enter The Elements of Second Matrix Here >>>\n";
        for(i=0; i<ok1; i++)
            for(j=0; j<ok2; j++)
                cin>>nix2[i][j];
        cout<<"\n The first "<<ok1<<" x "<<ok2<<" matrix entered by you is :\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++ )
                cout<<"\t"<<nix1[i][j] ;
            cout<<"\n";
        }
        cout<<"\n The Second "<<ok1<<" x "<<ok2<<" matrix entered by you is:\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++ )
                cout<<"\t"<<nix2[i][j];
            cout<<"\n";
        }
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                nix4[i][j]=nix1[i][j]-nix2[i][j];
        }
        cout<<"Difference Between These Two Matrix Is : \n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                cout<<"\t"<<nix4[i][j];
            cout<<"\n";
        }

    }
    if(a==3)
    {
        int ok1,ok2,i,j,sum=0;
        int nix1[100][100],nix2[100][100],nix5[100][100];
        cout<<"Enter Number Of Row And columns Of Matrix >>>>\n";
        cin>>ok1;
        cin>>ok2;
        cout<<"Enter The Elements of First Matrix Here >>>\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                cin>>nix1[i][j];
        }
        cout<<"Enter The Elements of Second Matrix Here >>>\n";
        for(i=0; i<ok1; i++)
            for(j=0; j<ok2; j++)
                cin>>nix2[i][j];
        cout<<"\n The first "<<ok1<<" x "<<ok2<<" matrix entered by you is :\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++ )
                cout<<"\t"<<nix1[i][j] ;
            cout<<"\n";
        }
        cout<<"\n The Second "<<ok1<<" x "<<ok2<<" matrix entered by you is:\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++ )
                cout<<"\t"<<nix2[i][j] ;
            cout<<"\n";
        }
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                nix5[i][j]=nix1[i][j]*nix2[i][j];
        }
        cout<<"Multiplicasion These Two Matrix Is : \n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                cout<<"\t"<<nix5[i][j];
            cout<<"\n";
        }

    }
    else if(a==4)
    {
        int ok1,ok2,i,j,sum=0;
        int nix1[100][100],nix2[100][100];
        cout<<"Enter Number Of Row And columns Of Matrix >>>>\n";
        cin>>ok1;
        cin>>ok2;
        cout<<"Enter The Elements of The Matrix Here >>>\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                cin>>nix1[i][j];
        }
        cout<<"\n The "<<ok1<<" x "<<ok2<<" Matrix Entered By You Is :\n";
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++ )
                cout<<"\t"<<nix1[i][j] ;
            cout<<"\n";
        }
        for(i=0; i<ok1; i++)
        {
            for(j=0; j<ok2; j++)
                nix2[j][i]=nix1[i][j];
        }
        cout<<"Trancepose Of The Given Matrix Is : \n";
        for(i=0; i<ok2; i++)
        {
            for(j=0; j<ok1; j++)
                cout<<"\t"<<nix2[i][j];
            cout<<"\n";
        }
    }

}

void equation()
{
    int choose;
    cout<<"What Action Do You Have In Mind ????\n1. Quardratic Equation.\n";
    cin>>choose;
    if(choose==1)
    {
        {
            double a,b,c,x1,x2;
            char x;
            cout<<"Enter The Value of a=";
            cin>>a;
            cout<<"Enter The Value of b=";
            cin>>b;
            cout<<"Enter The Value of c=";
            cin>>c;
            cout<<"The Quadratic Equation Is >>"<<a;
            cout<<"*x*x+"<<b;
            cout<<"*x+"<<c<<"\n";
            if

            (a==0 && b==0)
                cout<<"Not A Valid Equation.......";
            if

            (a==0 && b!=0)
            {
                x1=-(c/b);

                cout<<"\n";
                cout<<"Root="<<x1;
                cout<<"\n";
            }
            if ((b*b-4*a*c)>0)
            {
                x2=(b*b)-(4*a*c);
                x1=-b+sqrt(x2);
                cout<<"Root="<<x1<<"\n";
            }
            if ((b*b-4*a*c)<0)
            {
                cout<<"Not a Real Root........."<<"\n";
            }
            system("pause");
        }
    }
}

int main(int argc, char **argv)
{
    system("COLOR F0");
    cout<<"\n\nLoading Please Wait............\n";
    char buffer[256] = { 0 };
    char percent[7] = "0.0%%";
    int i, j, k;
    buffer[0] = '[';
    for(i = 0; i < 40; i++)
    {
        buffer[i + 1] = '=';
        j = i % 4;
        if(j == 0)
            buffer[i + 2] = '\\';
        else if(j == 1)
            buffer[i + 2] = '|';
        else if(j == 2)
            buffer[i + 2] = '/';
        else
            buffer[i + 2] = '-';

        for(k = i + 3; k < 41; k++)
            buffer[k] = ' ';

        buffer[41] = ']';

        sprintf(percent, "%3.2f%%", (i / 40.0) * 100.0);

        printf("%s%s\r", buffer, percent);

        Sleep(70);
    }

    sprintf(percent, "%3.2f%%", (i / 40.0) * 100.0);

    printf("%s%s\r", buffer, percent);

    int choice,shut,pass;
    cout<<"\n\n\n\n\n*************Simple CommandLine Scientific Calculator By Team Ok***************\n\n\n";
    cout<<" #############################################################"<<endl;
    cout<<" # _ #"<<endl;
    cout<<" # -=\`\\ #"<<endl;
    cout<<" # |\\ ____\\_\\_____ #"<<endl;
    cout<<" # -=\\c`""""""" "` ) Pass : 123 #"<<endl;
    cout<<" # `~~~~~/ /~~`\/ #"<<endl;
    cout<<" # -==/ / #"<<endl;
    cout<<" # '-' #"<<endl;
    cout<<" #############################################################"<<endl;
    cout<<"\nEnter The Passward To Run The Calculator >>>>";
    cin>>pass;
    cout<<"\n";
    system("COLOR 0C");
    if(pass==123)
    {
        do
        {
            cout<<"\nPlease select your operation (0 to exit):\nPress a number as >>>>>>\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square \n6.Square Root\n7. X ^ Y\n8. X ^ (A / Y)\n9. X!\n10. Percent \n11. log10(x)\n12. Modulus\n13.MatriX\n13. Sin(X)\n14. Cos(X)\n15. Tan(X)\n16. Cosec(X)\n17. Cot(X)\n18. Sec(X)\n19. Matrix\n20. Equation\nChoice: ";
            cin>>choice;
            system("COLOR FC");
            if (choice==0) exit (0);
            switch (choice)
            {
            case 1 :
                Addition();
                break;
            case 2 :
                Subtraction();
                break;
            case 3 :
                Multiplication();
                break;
            case 4 :
                Division();
                break;
            case 5 :
                Square();
                break;
            case 6 :
                SquareRoot();
                break;
            case 7 :
                X_Y();
                break;
            case 8 :
                x_nbY();
                break;
            case 9 :
                xEX();
                break;
            case 10 :
                Percent();
                break;
            case 11 :
                log10X();
                break;
            case 12 :
                Modulus();
                break;
            case 13 :
                sinX();
                break;
            case 14 :
                cosX();
                break;
            case 15 :
                tanX();
                break;
            case 16 :
                cosecX();
                break;
            case 17 :
                cotX();
                break;
            case 18 :
                secX();
                break;
            case 19 :
                MatriX();
                break;
            case 20 :
                equation();
                break;
            default :
                cout<<"Not A Valid Choice , Try Again >>>>> ";

            }
            cout<<"\n\nTo Run Calculator Again Press 1 >>>";
            cin>>choice;
        }
        while(choice==1);
        cout<<"\nThankYou ,,,,,,,,,,";
        cout<<"\nDo You Want To ShutDown The Computer Press 2>>> \nTo Exit Press 1 >>>\n";
        cin>>shut;
        if(shut==2)
        {
            system("C:\\WINDOWS\\System32\\shutdown -s");
        }
        else
        {
            exit(0);
        }
    }
    else
        cout<<"\nPlease Ask For The Password to the People Who Worked hard For This Project......\n\n\n>>>> Google For Me >> NIXON OK << <<<<";
    getch ();
    return 0;
}
