#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double x, y, z;
    cout << "plz typ x:";
    cin >> x ;
    cout << "plz typ y :";
    cin >> y ;
    cout << "plz typ z :";
    cin >> z ;
    cout << "javab :" << z - (x + y++)<< "\t"<< "y :"<< y ;

    getch();
    return 0 ;
}

