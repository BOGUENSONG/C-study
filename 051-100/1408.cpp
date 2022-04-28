#include <iostream>
#include <sstream> // c++에서는 sstream으로 string을 자른다.
#include <string>
using namespace std;

int main(){
    string current  = "";
    string start = "";
    string cut;
    cin >> current >> start;
    istringstream s1(current);
    istringstream s2(start);

    int current_int = 0;
    int start_int = 0;
    getline(s1, cut, ':');
    current_int += stoi(cut)*3600;
    getline(s1, cut, ':');
    current_int += stoi(cut)*60;
    getline(s1, cut, ':');
    current_int += stoi(cut);

    getline(s2, cut, ':');
    start_int += stoi(cut)*3600;
    getline(s2, cut, ':');
    start_int += stoi(cut)*60;
    getline(s2, cut, ':');
    start_int += stoi(cut);

    int last = current_int < start_int ? start_int - current_int : (start_int+86400) - current_int;
    int hour = last/3600;
    int minute = (last%3600)/60;
    int seconds = last%60;
    
    string result = "";
    hour < 10 ? result += ("0"+to_string(hour)) : result += to_string(hour);
    result += ":";
    minute < 10 ? result += ("0"+to_string(minute)) : result += to_string(minute);
    result += ":";
    seconds < 10 ? result += ("0"+to_string(seconds)) : result += to_string(seconds);
    cout << result << endl;
    return 0;
}