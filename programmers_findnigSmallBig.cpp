#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int theNum = 0;
    string stringNum = "";
    bool neg = false;
    vector<int> v;
    
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '-'){
            neg = true;
        }
        else if(s[i] != ' '){
            stringNum.push_back(s[i]);
        }
        else {
            if(neg == false)
               v.push_back(stoi(stringNum));
            else{
                v.push_back(stoi(stringNum) * -1);
            }
            neg = false;
            stringNum = "";
        }
    }
    if(neg == false)
       v.push_back(stoi(stringNum));
    else{
        v.push_back(stoi(stringNum) * -1);
    }    
    sort(v.begin() , v.end());
    answer+= to_string(v[0]);
    answer.push_back(' ');
    answer += to_string(v[v.size()-1]);
    return answer;
}