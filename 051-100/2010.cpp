#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int result = 0;
    for (int i = 0 ; i < N ; i++){
        int M;
        cin >> M;
        result += M;
    }
    result -= (N-1);
    cout << result << endl;
}