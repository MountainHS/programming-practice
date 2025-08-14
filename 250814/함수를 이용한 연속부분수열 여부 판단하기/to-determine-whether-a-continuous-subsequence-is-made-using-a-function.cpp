#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool CheckSubSeq(int i){
    int i1 = i;
    int i2 = 0;

    while (i1 < n1 && i2 < n2){
        if (a[i1] != b[i2])
            return false;
        i1++;
        i2++;
    }
    return true;
}
int main() {
    bool check = true;
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    for (int i = 0; i < n1-n2+1 && check; i++){
        if (CheckSubSeq(i)){
            check = false;
        }
    }

    cout << (check ? "No" : "Yes");
    cin.ignore();
    cin.get();

    return 0;
}