#include<bits/stdc++.h>
using namespace std;
class iteam {
protected:
    char name[20][20];
    float price[20];
    int sum, code[20];
public:
    iteam() {
        sum = 0;
        temp = 0;
    }
    char category[20];
    int  temp;
    void insert();
    void display();
    void total_amount();
    void catago_amount();
    void initial_task();
    int function1();
};
void iteam::insert()
{
    int i, n, k;
    printf ( "Enter Category Name=" );
    cin >> category;
    printf ( "How many item do you want to insert =" );
    cin >> n;
    for ( i = temp; i < n; i++ )
    {
        printf ( "Enter name of the item=" );
        cin >> name[temp];
        printf ( "Enter code=" );
        cin >> code[temp];
        printf ( "Enter price=" );
        cin >> price[temp];
        temp++;
        sum = sum + price[i];
    }
}
void iteam::display()
{
    int i;
    cout << "Under the " << category << " Category the items are:" << '\n' << '\n';
    cout << "Item name" << '\t';
    cout << "Code" << '\t';
    cout << "Price" << '\t' << '\n';
    for ( i = 0; i < temp; i++ )
    {
        cout << name[i] << '\t' << '\t';
        cout << code[i] << '\t';
        cout << price[i];
    }
    cout << '\n' << '\n';
}
void iteam::total_amount()
{
    cout << "The total price of all the items of all categories is = " << sum << '\n' << '\n';
}
void iteam :: catago_amount()
{
    cout << "Under the " << category << " category the total price of the items are=" << sum << '\n' << '\n';
}
void iteam::initial_task()
{
    printf ( "What do you want to do ?\n" );
    printf ( "1.if you want to insert press 1\n" );
    printf ( "2.if you want to display press 3\n" );
    printf ( "3.if you want to see the total price press 6\n" );
    printf ( "4.if you want to exit press 0\n" );
}
int iteam::function1()
{
    int a1;
    cout << "Choose a option to enter from the following sites" << '\n';
    cout << "Press 1 for item to be inserted." << '\n' << "Press 2 for daily using thing." << '\n' << "Press 0 for exit." << '\n';
    cin >> a1;
    return a1;
}
class cloth:
    public iteam {
private:
    char clt[15], cr[15];
public:
    cloth operator+ ( cloth );
    void insert_cl();
    void display_cl();
};
cloth  cloth::operator+ ( cloth c )
{
    cloth ob1;
    ob1.sum = sum + c.sum;
    return ( ob1 );
}
void cloth::insert_cl()
{
    cout << "What type of item is this ?" << '\n';
    cin >> clt;
    cout << "What's the colour of the item ?" << '\n';
    cin >> cr;
    cout << '\n';
}
void cloth::display_cl()
{
    cout << "Type :" << clt << '\t';
    cout << "Colour :" << cr << '\n' << '\n';
}
class dusing: public iteam {
private:
    char dus[15];
public:
    dusing operator+ ( dusing );
    void insert_du();
    void display_du();
};
dusing dusing::operator+ ( dusing c )
{
    dusing ob2;
    ob2.sum = sum + c.sum;
    return ( ob2 );
}
void dusing::insert_du()
{
    cout << "What type of daily using thing is this ?" << '\n';
    cin >> dus;
    cout << '\n';
}

void dusing::display_du()
{
    cout << "Type :" << dus << '\n';
}

class material: public iteam {
private:
    int sp;
    char mat[14], qu[15];
public:
    material operator+ ( material c );
    void insert_ma();
    void display_ma();
};
material material::operator+ ( material c )
{
    material ob3;
    ob3.sum = sum + c.sum;
    return ( ob3 );
}
void material::insert_ma()
{
    cout << endl;
}
void material::display_ma()
{
    cout << endl;
}

int main()
{
    cloth t[20], f1, ob;
    dusing du[20], f2, ob1;
    material ma[20], f3, ob2;
    int i, x = 0, n, a, j, k, l, s, m, b, c, q, g = 0, a1, y = 0, z = 0;
    char inp[20];
    for ( i = 0;; i++ )
    {
        a1 = ob.function1();
        switch ( a1 )
        {
        case 1:
            for ( i = 0;; i++ )
            {
                ob.initial_task();
                cin >> a;
                switch ( a )
                {
                case 1:
                    printf ( "How many category do you want to insert=" );
                    cin >> n;
                    for ( i = 0; i < n; i++ )
                    {
                        t[x].insert();
                        t[x].insert_cl();
                        x++;
                    }
                    break;
                case 3:
                    for ( s = 0; s < x; s++ )
                    {
                        t[s].display();
                        t[s].display_cl();
                    }
                    break;
                case 4:
                    if ( x > 0 )
                    {
                        printf ( "Enter your desired category=" );
                        cin >> inp;
                        for ( c = 0; c < x; c++ )
                        {
                            b = strcmp ( inp, t[c].category );
                            if ( b == 0 )
                                break;
                        }
                    }
                case 5:
                    printf ( "Enter your desired category=" );
                    cin >> inp;
                    for ( c = 0; c < x; c++ )
                    {
                        b = strcmp ( t[c].category, inp );
                        if ( b == 0 )
                            break;
                    }
                case 6:
                    for ( z = g; z < x; z++ )
                    {
                        f1 = f1 + t[z];
                        g++;
                    }
                    for ( i = 0; i < x; i++ )
                        t[i].catago_amount();
                    f1.total_amount();
                    break;
                }
                if ( a == 0 )
                    break;
            }
            break;
        case 2:
            for ( i = 0;; i++ )
            {
                ob1.initial_task();
                cin >> a;
                switch ( a )
                {
                case 1:
                    printf ( "How many category do you want to insert=" );
                    cin >> n;
                    for ( i = 0; i < n; i++ )
                    {
                        du[y].insert();
                        du[y].insert_du();
                        y++;
                    }
                    break;
                case 3:
                    for ( s = 0; s < y; s++ )
                    {
                        du[s].display();
                        du[s].display_du();
                    }
                    break;
                case 4:
                    if ( y > 0 )
                    {
                        printf ( "Enter your desired category=" );
                        cin >> inp;
                        for ( c = 0; c < y; c++ )
                        {
                            b = strcmp ( inp, du[c].category );
                            if ( b == 0 )
                                break;
                        }
                    }
                case 5:
                    printf ( "=Enter your desired category=" );
                    cin >> inp;
                    for ( c = 0; c < y; c++ )
                    {
                        b = strcmp ( du[c].category, inp );
                        if ( b == 0 )
                            break;
                    }
                case 6:
                    for ( z = g; z < x; z++ )
                    {
                        f2 = f2 + du[z];
                        g++;
                    }
                    for ( i = 0; i < y; i++ )
                        du[i].catago_amount();
                    f2.total_amount();
                    break;
                }
                if ( a == 0 )
                    break;
            }
            break;
        case 3:
            for ( i = 0;; i++ )
            {
                ob2.initial_task();
                cin >> a;
                switch ( a )
                {
                case 1:
                    printf ( "How many category do you want to insert=" );
                    cin >> n;
                    for ( i = 0; i < n; i++ )
                    {
                        ma[z].insert();
                        ma[z].insert_ma();
                        z++;
                    }
                    break;
                case 3:
                    for ( s = 0; s < z; s++ )
                    {
                        ma[s].display();
                        ma[s].display_ma();
                    }
                    break;
                case 4:
                    printf ( "Enter your desired category=" );
                    cin >> inp;
                    for ( c = 0; c < z; c++ )
                    {
                        b = strcmp ( inp, ma[c].category );
                        if ( b == 0 )
                            break;
                    }
                }
            case 5:
                printf ( "Enter your desired category= " );
                cin >> inp;
                for ( c = 0; c < z; c++ )
                {
                    b = strcmp ( ma[c].category, inp );
                    if ( b == 0 )
                        break;
                }
            case 6:
                for ( q = g; q < z; q++ )
                {
                    f3 = f3 + ma[q];
                    g++;
                }
                for ( i = 0; i < z; i++ )
                    ma[i].catago_amount();
                f3.total_amount();
                break;
            }
            if ( a == 0 )
                break;
        }
        break;
    }
    return 0;
}
