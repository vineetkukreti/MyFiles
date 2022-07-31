

/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.*/

// iteration method 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     int b;
//     cout<<"Enter the base : ";
//     cin>>a;
//     cout<<"Enter the power : ";
//     cin>>b;
//     // example : 2^5 = 2*2*2*2*2;
//     int answer = 1;
//     for(int i = 0;i<b;i++)
//     {
//        answer = answer*a;
//     }
//     cout<<"Answer : "<<answer<<endl;


//     return 0;
// }


// Inbuit function method
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int a;
//     int b;
//     cout<<"Enter the base : ";
//     cin>>a;
//     cout<<"Enter the power : ";
//     cin>>b;
//     int answer = pow(a,b);
//     cout<<"Answer : "<<answer<<endl;

//     return 0;
// }


// solution using recursion
#include<iostream>
int FindAnswer(int a,int b)
{
    if(b==0)
     return 1;
     int smallCalculation = FindAnswer(a,b-1);
     int output = a*smallCalculation;

     return output;
}
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;
    int answer = FindAnswer(a,b);
    cout<<"Answer : "<<answer<<endl;

    return 0;
}