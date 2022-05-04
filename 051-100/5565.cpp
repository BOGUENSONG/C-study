#include <iostream>
using namespace std;
int main(){
    int total;
    int nine = 0;
    cin >> total;
    for (int i = 0 ; i < 9 ; i++){
        int number;
        cin >> number;
        nine += number;
    }
    cout << total-nine << endl;
}