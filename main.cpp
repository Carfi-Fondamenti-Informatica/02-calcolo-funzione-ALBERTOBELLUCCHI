#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a, b, x, y;
    cin>>a>>b>>x>>y;//input

    if( x<0 && y>0) cout<<(a*x)-(b*y)<<endl;//f1
    else if( x>=0 && y<=0) cout<< (a*pow(x,2))-(b*y)<<endl;//f2
    else cout<<(a*x) + (b*pow(y,2))<<endl;//f3

    return 0;
}
