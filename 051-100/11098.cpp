#include <iostream>

using namespace std;

int main(){

    int tc = 0;
    cin >> tc ;
    for (int i = 0 ; i < tc; i++){
        int p = 0;//선수 수
        cin >> p ;
        int max_value = 0;
        string max_name = "";
        for (int j = 0 ; j < p ; j++){
            int value = 0;
            string name = "";
            cin >> value;
            cin >> name;
            if (max_value < value){
                max_value = value;
                max_name = name;
            }
        }
        cout << max_name << endl;
    }
    return 0;
}