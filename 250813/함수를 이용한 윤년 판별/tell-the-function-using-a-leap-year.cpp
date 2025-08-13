#include <iostream>

using namespace std;

int y;

bool CheckLeapYear(){
    if (y % 100 == 0 && y % 400 != 0)
        return false;
    if (y % 4 == 0)
        return true;
    return false;
}
int main() {
    cin >> y;

    // Please write your code here.
    cout << (CheckLeapYear() ? "true" : "false");
    cin.ignore();
    cin.get();

    return 0;
}