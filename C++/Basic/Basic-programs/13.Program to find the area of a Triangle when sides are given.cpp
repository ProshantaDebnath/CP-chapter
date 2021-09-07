#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){

    double a, b, c, s, area;
    cout << "Enter the 3 sides of the triangle : ";
    cin >> a >> b >> c;

    s = (a+b+c) / 2;

    area = sqrt(s * ( s - a ) * ( s - b ) * ( s - c ));

    cout << fixed << setprecision(3);
    cout << "Area of triangle is : " <<area;
    return 0;

}
