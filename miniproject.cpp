#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double u, angle, t, h, r;
    const double g = 9.8;

    cout << "Enter Initial Velocity (m/s): ";
    cin >> u;
    cout << "Enter Angle of Projection (degrees): ";
    cin >> angle;

    double rad = angle * M_PI / 180.0;

    t = (2 * u * sin(rad)) / g;
    h = (u * u * pow(sin(rad), 2)) / (2 * g);
    r = (u * u * sin(2 * rad)) / g;

    cout << "\n--- Projectile Motion Results ---" << endl;
    cout << "Time of Flight (T): " << t << " seconds" << endl;
    cout << "Maximum Height (H): " << h << " meters" << endl;
    cout << "Range (R): " << r << " meters" << endl;

    return 0;
}
