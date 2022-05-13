#include <iostream>
using namespace std;
int main(){
    int tc = 0;
    cin >> tc;
    int res = 0;
    for (int i = 0 ; i < tc; i++){
        int student,apple;
        cin >> student >> apple;
        res += apple % student;
    }
    cout << res << endl;
    return 0;
}