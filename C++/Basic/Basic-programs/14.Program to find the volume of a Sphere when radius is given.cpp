#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){

    double radius, volume;

    cout << "Enter the radius of the sphere : ";
    cin >> radius;

    float pie=3.14285714286;

    volume = ((4.0 / 3.0) * pie * (radius * radius * radius));

    cout << fixed << setprecision(3);
    cout << "Volume of the sphere is : " << volume;

    return 0;

}


//Complexity
//O(1)


