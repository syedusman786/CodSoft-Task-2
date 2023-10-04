#include<iostream>
using namespace std;

int main ()
{
    int  num1,num2,choose;
    cout<<"*******************"<<endl;
    cout<<"   Calculator"<<endl;
    cout<<"*******************"<<endl;

    cout<<"Enter 1st number: ";
    cin>>num1;

    cout<<"1).Addition                     2).Subtraction"<<endl<<endl;
    cout<<"3).Multiplication               4).Division"<<endl<<endl;
    cout<<"Choose an arithmetic  operation: ";
    cin>>choose;

    if (choose==1)
    {
        cout<<"Enter 2nd number: ";
        cin>>num2;
        cout<<"*******************"<<endl;
        cout<<"The answer is: "<<num1+num2<<endl;
        cout<<"*******************"<<endl;

    }

    else if (choose==2)
    {
        cout<<"Enter 2nd number: ";
        cin>>num2;
        cout<<"*******************"<<endl;
        cout<<"The answer is: "<<num1-num2<<endl;
        cout<<"*******************"<<endl;

    }

    else if (choose==3)
    {
        cout<<"Enter 2nd number: ";
        cin>>num2;
        cout<<"*******************"<<endl;
        cout<<"The answer is: "<<num1*num2<<endl;
        cout<<"*******************"<<endl;

    }

    else if (choose==4)
    {
        cout<<"Enter 2nd number: ";
        cin>>num2;
        cout<<"*******************"<<endl;
        cout<<"The answer is: "<<num1/num2<<endl;
        cout<<"*******************"<<endl;

    }
    
    else
    cout<<"Invalid Input"<<endl;

}