#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{
    double x, xp, xk, dx, y, R;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
         << setw(7) << "y" << " |" << endl; 
    cout << "---------------------------" << endl;
                 
    x = xp;
    while (x <= xk)
    {
        if (x<= -1-R && y>=0)
            y=-x;
        else 
            if ( -1-R <= x && x<= -1 && y>=0)
                 y*y == R+(R*R - x*x);
            else 
                 if (-1 <= x && x<= 1 && y>=0)
                 y=R;
                 else
                     if (1<=x && x<= 2)
                     y=-2*x;
                     else
                     y=-1;
        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y 
             << " |" << endl;
        x += dx; 
    }
    cout << "---------------------------" << endl; 

return 0;
}