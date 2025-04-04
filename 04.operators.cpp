#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 6;

    int sum = a+b;
    cout<<sum<<endl;

    int sub = a-b;
    cout<<sub<<endl;

    int mul = a*b;
    cout<<mul<<endl;

    int div = a/b;
    cout<<div<<endl;

    cout<<5.0/2<<endl;
    cout<<5.32/2<<endl;

    bool first = (a==b);
    cout<<first<<endl;
    
    bool second = (a>b);
    cout<<second<<endl;
    
    bool third = (a<b);
    cout<<third<<endl;
    
    bool fourth = (a>=b);
    cout<<fourth<<endl;
    
    bool fifth = (a<=b);
    cout<<fifth<<endl;
    
    bool sixth = (a!=b);
    cout<<sixth<<endl;
    
    // &&(AND) and ||(OR) also are operators
}