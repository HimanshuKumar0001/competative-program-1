#include<iostream>
using namespace std;
int main()
{
    int x,rev=0,temp,rem=0;
    cout<<"enter no.";
    cin>>x;
    temp=x;
    while(x>0)
    {
     rem=x%10;
     rev=(rev*10)+rem;
     x=x/10;
    }
    if(rev<0)
        cout<<"False";
    if(rev==temp)
        cout<<"True";
    else
        cout<<"False";
    return 0;

}

