#include <iostream>
using namespace std;
class Area
{
    public:
    // Return type of a function does not matter
        int RectArea(int x, int y)
        {
            cout << "Rectangle function is called !!" << endl;
            return x * y;
        }
        int SquareArea(int x)
        {
            cout << "Square function is called !!" << endl;
            return x * x;
        }
        double CircleArea(double r)
        {
            cout << "Circle function is called !!" << endl;
            return 3.14 * r * r;
        }
};
int main()
{
    Area object;
    int x = 10, y = 30;
    double r = 4.5;
    cout << "Area : " << endl;
    cout << object.RectArea(x, y) << endl;
    cout << object.SquareArea(x) << endl;
    cout << object.CircleArea(r);
}