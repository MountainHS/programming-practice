#include <iostream>

using namespace std;

int a, b;

bool CheckPrime(int n){
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    cin >> a >> b;
    int sum = 0;

    // Please write your code here.
    for (int i = a; i <= b; i++){
        if (CheckPrime(i)){
            sum += i;
        }
    }
    cout << sum;
    cin.ignore();
    cin.get();

    return 0;
}