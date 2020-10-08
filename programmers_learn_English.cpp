/************************************************************
 *  name : Youngwoo Park
 *  date : 09-24-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: vector and map
 * *********************************************************/
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<int,int> m;
    map<string,int> strings;
    string beforeWord;
    int count = 0;
    
    for(int i = 0 ; i < n; i++){
        m.insert({i,0});
    }

    for(int i = 0 ; i < words.size() ; i++){
        m[count]++;
        if(strings.find(words[i]) == strings.end()){
            strings.insert({words[i],1});            
        }
        else{
            answer.push_back(count+1);
            answer.push_back(m[count]);
            return answer;
        }
        
        if(i != 0 && beforeWord[beforeWord.size()-1] != words[i][0]){
            answer.push_back(count+1);
            answer.push_back(m[count]);
            return answer;
        }
        count++;
        if(count == n)
            count = 0;
        beforeWord = words[i];
    }
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}