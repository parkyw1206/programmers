/************************************************************
 *  name : Youngwoo Park
 *  date : 10-03-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: dynamic programming
 * *********************************************************/
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
    int first, second, index;
    first = 0;
    second = 0;
    index = 0;
    
    for(int i = 0 ; i < land.size() ; i++){
        if(i == 0){
            for(int j = 0 ; j < land[0].size() ; j++){
                if(land[i][j] > first){
                    if(first != 0){
                        second = first;
                    }
                    first = land[i][j];
                    index = j;
                }
                else if(land[i][j] > second){
                    second = land[i][j];
                }
            }
        }
        else{
            for(int j = 0 ; j < land[0].size() ; j++){
                if(j != index){
                    land[i][j] += first;
                }            
                else
                    land[i][j] += second;
            }
            first = 0;
            second = 0;
            index = 0;
            for(int j = 0 ; j < land[0].size() ; j++){
                if(land[i][j] > first){
                    if(first != 0){
                        second = first;
                    }
                    first = land[i][j];
                    index = j;
                }else if(land[i][j] > second){
                    second = land[i][j];
                }
            }
        }
    }
    return first;
}