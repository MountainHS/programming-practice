#include <iostream>

using namespace std;

int n, m;
int GCD(){
    int a = (n > m) ? n : m;
    int result = 0;
    for (int i = 1; i <= a; i++){
        if (n % i == 0 && m % i == 0){
            result = i;
        }
    }
    return result;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    cout << GCD();

    return 0;
}