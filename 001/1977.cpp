#include <iostream>
#include <vector>
using namespace std;
int main(){
    int left;
    int right;
    cin >> left;
    cin >> right;
    vector<int> jegob;

    for (int i = 1 ; i <= 100; i++){
        int jegobsu = i*i;
        if ( jegobsu >= left && jegobsu <= right){
            jegob.push_back(jegobsu);
        }
    }
    int sum = 0; 
    for ( int i = 0 ; i < jegob.size() ; i++){
        sum+= jegob.at(i);
    }
    if (jegob.size() == 0){
        cout << -1 << endl;
    }else{
        cout << sum << endl;
        cout << jegob.at(0) << endl;
    }
    
    
    return 0;
}