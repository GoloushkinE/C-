// Разработайте программу, которая будет выводить пирамиду высоты n.
// Также на вход поступает длина основания пирамиды

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    char sim;
    double a, h, b;
    cout << "Enter symbol: ";
    cin >> sim;
    cout << "Enter a and h: ";
    cin >> a >> h;
    b = a / 2;

    for (int j = h; j > 0; j--) {
        for (int i = 0; i < b; i++) {
            if (j == 1 || i == round(j * b / h)) {
                cout << sim;
            }
            else { cout << " "; }
        }
        for (int i = b; i < a; i++) {
            if (j == 1 || i == round(j * b / h)) {
                cout << sim;
            }
            else { cout << " "; }
        }
        cout << endl;
    }
    return 0;
}

