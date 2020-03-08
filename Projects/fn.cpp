#include<bits/stdc++.h>
using namespace std;

int fn1(int v1,int v2)
{
  int add;
  add=v1+v2;
  cout<<add<<endl;
  return add;
}

int fn2(int v1,int v2)
{
   int add;
  add=v1*v2;
  cout<<add<<endl;
  return add;
}

int fn3(int v1,int v2)
{
 int add;
  add=v1+v2;
  cout<<add;
  return add;
}

int main()
{
    int v=5,v1=6,v3=10;
    int n1=fn1(v,v1);
    int n2=fn2(n1,v3);
    int n3=fn3(n1,n2);
}
