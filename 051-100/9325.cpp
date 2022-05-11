#include <iostream>
using namespace std;
int main(){
    int tc;
    cin >> tc; // testcase number
    for (int i = 0 ; i < tc; i++){
        int total = 0;
        int car;
        int option;
        cin >> car >> option;
        total += car;
        for (int j = 0 ; j < option; j++){
            int optnum, price;
            cin >> optnum >> price;
            total += (optnum*price);
        }
        cout << total << endl;
    }
}