#include <iostream>
using namespace std;
// if else x, y;
int main() {
    int x , y;
    cout << "podaj zmienu x: ";
    cin >> x;
    cout << "podaj zmienu y: ";
    cin >> y;
    if (x > y){
        cout << "x jest wikśnej od y";
    }
    else if (x == y){
        cout << " x jest równa y ";
    }
    else {
        cout << " x jest mniśne od y";

    }



    return 0;
}

