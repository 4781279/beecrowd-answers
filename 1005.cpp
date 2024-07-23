#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    float A, B, wA, wB;
    cin>>A;
    cin>>B;
    cout<<fixed<<setprecision(5);
    A*=3.5;
    B*=7.5;
    cout<<"MEDIA = "<<(A + B)/11<<endl;

    return 0;
}