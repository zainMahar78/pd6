#include <iostream>
using namespace std;
string pointchecking_1(int h, int x, int y) ;
int main() {
    int h, x, y;
    cout << "Enter the value of h: ";
    cin >> h;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    string result = pointchecking_1(h, x, y);
    cout << result;
}
string pointchecking_1(int h, int x, int y) {
    if (x < 0 || x > 2*h || y < 0 || y > 4*h) {
        return "Outside";
    } else if (x > h && x < 2*h && y > h && y < 4*h) {
        return "Inside";
    } else {
        return "Border";
        }
        }