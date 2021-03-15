#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cout<<"Enter a number: ";
    cin>>number;
    while(number>0)
    {
        int r=number%10;
        sum+=r;
        number=number/10;
    }
    cout<<"Sum is = "<<sum;

}
