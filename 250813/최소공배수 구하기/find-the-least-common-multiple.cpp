#include <iostream>

using namespace std;

int n, m;
int LCM(){
    for (int i = 1; i <= n*m; i++){
        if (i % n == 0 && i % m == 0){
            return i;
        }
    }
    return 0;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    cout << LCM();

    return 0;
}