#include <iostream>

using namespace std;
bool IsPrime(int i){
    for (int j = 2; j <= i/2; j++){
        if (i % j == 0){
            return false;
        }
    }
    return true;
}

bool IsDigitSumEven(int i){
    int j = i;
    int sum = 0;
    while (j != 0){
        sum += j % 10;
        j /= 10;
    }
    if (sum % 2 == 0){
        return true;
    }
    return false;
}
bool Check(int i){
    if (!IsPrime(i))
        return false;
    if (!IsDigitSumEven(i))
        return false;
    
    return true;
}
int a, b;

int main() {
    int count = 0;
    cin >> a >> b;

    // Please write your code here.
    for (int i = a; i <= b; i++){
        if (Check(i))
            count++;
    }
    cout << count;
    cin.ignore();
    cin.get();

    return 0;
}