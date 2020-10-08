#include <string>
#include <vector>

using namespace std;
char goBig(char word, int n){
    if(word + n > 90)
        return word + n - 26;
    else
        return word + n;
}
char goSmall(char word, int n){
    if(word + n > 122)
        return word + n - 26;
    else
        return word + n;
}
string solution(string s, int n) {
    string answer = "";
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] >= 65 && s[i] <= 90)
            answer.push_back(goBig(s[i],n));
        else if(s[i] >= 97 && s[i] <= 122)
            answer.push_back(goSmall(s[i], n));
        else if(s[i] == ' ')
            answer.push_back(' ');
    }
    return answer;
}