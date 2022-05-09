#include <iostream>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    for (int i = 0 ; i < tc ; i++){
        int N;
        cin >> N;
        int score_all = 0;
        double gpa_all = 0.0;
        for (int j = 0 ; j < N; j++){
            int score;
            double gpa;
            cin >> score >> gpa;
            score_all += score;
            gpa_all += (score*gpa);
        }
        printf("%d %.1f\n",score_all,(gpa_all)/score_all);
    }
    return 0;
}