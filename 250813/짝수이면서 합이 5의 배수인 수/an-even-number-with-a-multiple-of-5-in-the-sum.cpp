#include <iostream>

using namespace std;

int n;
bool check(int i){
    int div = 10;
    int sum = 0;
    int j = i;
    while (j != 0){
        sum += j % div;
        j /= div;
    }
    return i % 2 == 0 && sum % 5 == 0;
}

int main() {
    cin >> n;

    // Please write your code here.
    cout << (check(n) ? "Yes" : "No") << flush;
    cin.ignore();
    cin.get();

    return 0;
}