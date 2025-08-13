#include <iostream>

using namespace std;

int a, b;
bool check369(int n){
    while (n != 0){
        if (n%10%3 == 0)
            return true;
        n /= 10;
    }
    return false;
}
bool check(int n){
    return n % 3 == 0 || check369(n);
}

int main() {
    int count = 0;
    cin >> a >> b;

    // Please write your code here.
    for (int i = a; i <= b; i++){
        if (check(i)) count++;
    }
    cout << count;
    cin.ignore();
    cin.get();

    return 0;
}