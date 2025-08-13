#include <iostream>

using namespace std;

int a;
int c;
char o;
void Add(int a, int c){
    cout << a << " + " << c << " = " << a+c;
}
void Sub(int a, int c){
    cout << a << " - " << c << " = " << a-c;
}
void Mul(int a, int c){
    cout << a << " * " << c << " = " << a*c;
}
void Div(int a, int c){
    cout << a << " / " << c << " = " << a/c;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    switch (o){
        case '+':
            Add(a, c);
            break;
        case '-':
            Sub(a, c);
            break;
        case '*':
            Mul(a, c);
            break;
        case '/':
            Div(a, c);
            break;
        default:
            cout << "False";
    }
    cin.ignore();
    cin.get();

    return 0;
}