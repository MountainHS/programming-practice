#include <iostream>

using namespace std;

int a, b;
bool CheckOnjeon(int i){
    if (i%2 == 0){
        return false;
    }
    if ((i%10)== 5){
        return false;
    }
    if (i%3 == 0 && i%9 != 0){
        return false;
    }
    return true;
}

int main() {
    int count = 0;
    cin >> a >> b;

    // Please write your code here.
    for (int i = a; i <= b; i++){
        if (CheckOnjeon(i)){
            count++;
        }
    }
    cout << count;
    cin.ignore();
    cin.get();

    return 0;
}