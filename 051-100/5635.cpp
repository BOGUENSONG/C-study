#include <iostream>
using namespace std;
int main(){

    int N = 0;
    cin >> N;
    int year_max = 2010;//나이가 가장 많은사람
    int month_max = 12;
    int day_max = 31;
    string name_max = "";

    int year_min = 1990; //나이가 가장 적은사람 
    int month_min = 1;
    int day_min = 1;
    string name_min = "";

    for (int i = 0 ; i < N ; i++){
        string name = "";
        int dd = 0;
        int mm = 0;
        int yy = 0;
        cin >> name >> dd >> mm >> yy ;
        //1. 나이 가장 많은 사람
        if ( yy == year_max ){
            if ( mm == month_max ){
                if (dd < day_max){
                    name_max = name;
                    day_max = dd;
                    month_max = mm;
                    year_max = yy;
                }
            }else if ( mm < month_max){
                name_max = name;
                day_max = dd;
                month_max = mm;
                year_max = yy;
            }
        } else if (yy < year_max){
            name_max = name;
            day_max = dd;
            month_max = mm;
            year_max = yy;
        }
        //2. 나이 가장 적은 사람
        if (yy == year_min){
            if ( mm == month_min){
                if (dd >= day_min){
                    name_min = name;
                    day_min = dd;
                    month_min = mm;
                    year_min = yy;
                }
            }else if ( mm > month_min){
                name_min = name;
                day_min = dd;
                month_min = mm;
                year_min = yy;
            }
        }else if (yy > year_min){
            name_min = name;
            day_min = dd;
            month_min = mm;
            year_min = yy;
        }
    }
    cout << name_min << endl;
    cout << name_max << endl;
    return 0;
}