/************************************************************
 *  name : Youngwoo Park
 *  date : 09-23-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: 2-d vector int
 * *********************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int answerNum;
    
    for(int i = 0 ; i < arr1.size() ; i++){
        answer.push_back(vector<int>());
        for(int k = 0 ; k < arr2[0].size() ; k++){
            answerNum = 0;
            for(int j = 0 ; j < arr1[0].size() ; j++)
            {
                answerNum += arr1[i][j] * arr2[j][k];
            }
            answer[i].push_back(answerNum);
        }
    }
    
    return answer;
}