#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "", subString ="";
    k = number.size()-k;
    int firstIndex = 0 , lastIndex = 0;
    int bigNum = 0, bigIndex = 0;

    while( k > 0 ){
        lastIndex = number.size() - k - firstIndex+1;
        subString = number.substr(firstIndex,lastIndex);
        for(int i = 0 ; i < subString.size() ; i++){
            if(bigNum < subString[i]-48){
                bigNum = subString[i]-48;
                bigIndex = i + firstIndex;
            }
        }
        answer.push_back(char(bigNum+48));
        k--;
        firstIndex = bigIndex+1;
        bigNum = 0;            

    }
    return answer;
}
