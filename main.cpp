#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    bool isPrime = true;
    for(int i=2;i<num;i++)
    {int a;
    a=num%i;
        if(a==0)
        {
            isPrime =false;
            break;
        }
     }


if(isPrime){cout<<"prime"<<endl;}

else{cout<<"Not Prime"<<endl;}


    return 0;

}
