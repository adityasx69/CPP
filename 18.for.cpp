#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Printing numbers from 1 to n"<<endl;

    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
}
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"Printing numbers from 1 to n"<<endl;
//     int i=1;
//     for(; ;){
//         if(i<=n){
//         cout<<i<<endl;
//         i++;
//         }
//         else{
//             break;
//         }
//     }
// }