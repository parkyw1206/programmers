/************************************************************
 *  name : Youngwoo Park
 *  date : 09-24-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: stack
 * *********************************************************/
#include <iostream>
#include <stack>
#include<string>

using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> st;
    
    for(int i = 0 ; i < s.size()  ; i++){
        if(st.size() == 0){
            //cout << "Push : " << s[i] << endl;
            st.push(s[i]);            
        }
        else if(st.top() != s[i]){
            //cout << "Push : " << s[i] << endl;
            st.push(s[i]);
        }
        else{
            //cout << "POP: " << st.top() << endl;
            st.pop();
        }
    }
    if(st.size() == 0)
        answer = 1;
    else
        answer = 0;
    return answer;
}