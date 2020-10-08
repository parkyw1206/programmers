#include <stack>
#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stac;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '(')
            stac.push('(');
        else{
            if(stac.size() > 0)
                stac.pop();
            else
                return false;
        }
    }
    if(stac.size() > 0)
        return false;
    else
        return true;
}