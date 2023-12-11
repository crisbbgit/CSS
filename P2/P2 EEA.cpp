// A-02 Aditi Dalvi
#include<bits/stdc++.h>
using namespace std;

int d, x, y;
void extendedEuclid(int A, int B)
{
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    } else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int main( )
{
    cout << "A-02 Aditi Dalvi" << endl << endl;
    int a,b;
    cout<<"Enter the Numbers: ";
    cin >> a >> b;
    extendedEuclid(a, b);
    cout <<"The GCD of " << a << " and " << b << " is "<< d << endl;
    cout <<"Coefficients x and y are "<< x <<" and "<< y << endl;

    return 0;
}
