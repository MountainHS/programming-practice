#include <iostream>
using namespace std;
void Print10Stars(void){
    for (int i = 0; i < 10; i++){
        cout << "*";
    }
    cout << "\n";
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // Problem: 1
    
    for (int i = 0; i < 5; i++){
        Print10Stars();
    }
    cin.ignore();
    cin.get();
    return 0;
}