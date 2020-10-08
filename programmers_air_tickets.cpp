/************************************************************
 *  name : Youngwoo Park
 *  date : 10-02-2020
 *  level: l3
 *  problem source: programmers
 *  lang: C++
 *  skill:  bfs
 * *********************************************************/
 
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>

using namespace std;

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    stack<string> s;
    string theTemp;
    map<string, vector<string>> m;
    int count = 0, theIndex= 0 ;
    
    for(int i = 0 ; i < tickets.size() ; i++){
        m[tickets[i][0]].push_back(tickets[i][1]);
    }
    count =  m.size() ;
    bool visited[count];
    
    for(auto itr = m.begin() ; itr != m.end() ; itr++){
        sort(m[itr->first].begin(), m[itr->first].end());
    }

    s.push("ICN");

    while(!s.empty()){    
        theTemp = s.top();
        answer.push_back(theTemp);
        s.pop();
        if(m[theTemp].size() == 1){
            cout << "Push: " << m[theTemp][0] << endl;
            s.push(m[theTemp][0]);                
            m[theTemp].erase(m[theTemp].begin());                    
        }
        else if(m[theTemp].size() > 1){
            if(m[m[theTemp][0]].size() == 0){
                theIndex = 1;
                for(int j = 1 ; j < m[theTemp].size() && m[m[theTemp][j]].size() == 0; j++){
                    cout << j << ";" <<  m[m[theTemp][j]].size() << endl;
                    theIndex = j;
                }
                
                cout << "Push: " << m[theTemp][theIndex] << endl;
                s.push(m[theTemp][theIndex]);
                m[theTemp].erase(m[theTemp].begin()+theIndex);                    

            }
            else{
                cout << "Push: " << m[theTemp][0] << endl;
                s.push(m[theTemp][0]);                
                m[theTemp].erase(m[theTemp].begin());                    
            }    

        }
    }
    
    return answer;
}