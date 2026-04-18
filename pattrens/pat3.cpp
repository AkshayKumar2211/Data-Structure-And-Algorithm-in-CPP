#include<iostream>
using namespace std;

int main()
{
    // pattern 1
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }

        cout<<endl;
    }

      cout<<endl;
    // pattern 2
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

       cout<<endl;
    // pattern 3

    for(int i=6;i>=1;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }


       cout<<endl;
       //pattrern 4


       for(int i=5;i>0;i--)
       {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
       }

}