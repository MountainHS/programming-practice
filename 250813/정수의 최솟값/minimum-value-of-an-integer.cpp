#include <iostream>
using namespace std;
int a, b, c;
int min3(){
    int min_val = (a < b) ? a : b;
    if (c < min_val) min_val = c;
    return min_val;
}
int main(){
    // Problem: 8
    cin >> a >> b >> c;

    // Please write your code here.
    cout << min3();
    cin.ignore();
    cin.get();
    return 0;
}