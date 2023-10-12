#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    double x, y;
    int num_shots = 10;
    srand(static_cast<unsigned>(time(0)));

    // Зчитування параметру R з клавіатури
    double R;
    cout << "Введіть значення R: ";
    cin >> R;

    cout << "1 спосіб:" << endl;
    for (int i = 0; i < num_shots; i++) {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y >= 1 && y <= 3 && x >= -1 && x <= 1) ||
            (x * x + y * y <= 1) ||
            (y >= -2 && y <= x - 1 && y <= -x - 1))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << "2 спосіб:" << endl;
    for (int i = 0; i < num_shots; i++) {
        x = 6.0 * rand() / RAND_MAX - 3;
        y = 6.0 * rand() / RAND_MAX - 3;

        if ((x * x + y * y <= R * R && y >= 0) ||
            (y >= -R && y <= x && x <= 0))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}
