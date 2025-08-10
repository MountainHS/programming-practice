#include <iostream>
using namespace std;
int N;
void PrintLine(int n){
    for (int i = 0; i < n; i++){
        cout << "12345^&*()_" << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // Problem: 2
    cin >> N;

    PrintLine(N);
    cin.ignore();
    cin.get();
    return 0;
}