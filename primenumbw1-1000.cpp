#include<iostream>
using namespace std;
bool isPrimeFlag(int number)
{
    bool isPrime = true;
    for(int i=2;i<number;i++)
    {

        int a= number%i;

        if(a==0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main()
{
    int num1,num2;
    cout<<"Program to find prime numbers between two numbers"<<endl;
    cout<<"Least number where to start finding prime numbers between them begins:-"<<endl;
    cin>> num1;
    system("cls");
    cout<<"Highest number excluding it upto which we have to find prime:-"<<endl;
    cin>>num2;
    system("cls");
    for(int j=num1+1;j<num2;j++)
        {
            bool prime = isPrimeFlag(j);
            if(prime == true)
        {
        cout<<j<<endl;
        }
        }

    system ("pause>0");

}
