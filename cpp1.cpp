#include <iostream>
using namespace std;
int c=0;
int su=0;
int arey [50];
void tusker(arey)
void whilewhile(arey)
void recurecu(arey)
int main ()
{
    int ch;
    cout<<"Enter the list of number you want the sum of:";
    for (int k=0; k<50; k++)
        cin>>arey[k];
    cout<<"Enter a choice: 1 for "for loop", 2 for "while loop" and 3 for recursion";
    cin>>ch;
    if (ch = 1)
        tusker(arey);
    else if (ch = 2)
        whilewhile(arey);
    else if (ch = 3)
        recurecu(arey);
}
void tusker()
{
    int s = 0;
    for (int k=0;k<50;k++)
        s=s+arey[k];
    cout<<"The sum of the numbers you entered is"<<s;
}
void whilewhile ()
{
    int s = 0, k = 0;
    while (k < 50)
    {
        s=s+arey[k];
        k++;
    }
    cout<<"the sum is"<<s;
}
void recurecu ()
{
    su=su+arey[c];
    if (c<50)
    {
        c++;
        recurecu();
    }
    else
    {
        cout<<"sum="<<su;
    }
}
