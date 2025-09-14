#include<iostream>
using namespace std;
class add
{
    public:
int sum(int a, int b)
{
    return a+b;
}};
int main()
{int a,b;
add a1;
cout<<"Enter the first number:";
cin>>a;
cout<<"Enter second number:";
cin>>b;
cout<<"Sum of both numbers:"<<a1.sum(a,b)<<endl;
return 0;
}