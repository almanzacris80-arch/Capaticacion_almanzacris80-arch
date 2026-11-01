#include <iostream>

int main (){
    using namespace std;

    int N;
    cin >> N;

    int a = 0, b = 1, numeroSiguiente;

    cout<<a<<", "<<b<<", ";
    for(int i = 3; i <= N; i++){
        numeroSiguiente = a + b;
        a = b;
        b = numeroSiguiente;
        cout << numeroSiguiente << ", ";
    }

    return 0;
}