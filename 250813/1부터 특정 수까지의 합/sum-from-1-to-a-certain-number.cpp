#include <iostream>

using namespace std;

int N;
int SumToNAndDivide(){
    int sum = 0;
    for (int i = 1; i <= N; i++){
        sum += i;
    }
    return sum / 10;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << SumToNAndDivide();
    cin.ignore();
    cin.get();

    return 0;
}