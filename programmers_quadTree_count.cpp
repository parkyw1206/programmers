/************************************************************
 *  name : Youngwoo Park
 *  date : 10-12-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill:  bfs
 * *********************************************************/
 
#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<vector<int>> c;
vector<vector<int>> visited;
int divider = 0;

bool checkTrue(int startCol, int endCol, int startRow, int endRow){
    int one = c[startCol][startRow];
    
    for(int i = startCol ; i < endCol ; i++){
        for(int j = startRow ; j < endRow ; j++){
            if(one != c[i][j])
                return false;
        }
    }
    
    return true;
}
bool bfs(int startCol, int endCol, int startRow, int endRow){
    if(startCol > endCol && startRow > endRow)
        return false;
    else if(checkTrue(startCol,endCol,startRow,endRow)){
        for(int i = startCol ; i < endCol ; i++){
            for(int j = startRow ; j < endRow; j++)
                visited[i][j] = divider;
        }
        divider++;
        return false;   
    }
    else{
        for(int i = startCol ; i < endCol ; i++){
            for(int j = startRow ; j < endRow; j++)
                visited[i][j] = divider;
        }
        divider++;
        if(bfs(startCol,(startCol+endCol)/2,startRow,(startRow+endRow)/2)||
            bfs(startCol,(startCol+endCol)/2,(startRow+endRow)/2,endRow)||
            bfs((startCol+endCol)/2,endCol,startRow,(startRow+endRow)/2)||
            bfs((startCol+endCol)/2,endCol,(startRow+endRow)/2,endRow))
            return true;
        return false;
    }
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    map<int,int> m;
    int countZero = 0 ,countOne = 0;
    c = arr;
    visited = arr;
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = 0 ; j < arr.size(); j++){
            visited[i][j] = 0;
        }
    }
    bfs(0,arr.size(),0,arr.size());
    for(int i = 0 ; i < arr.size(); i++){
        for(int j = 0 ; j < arr.size() ; j++){
            if(m.find(visited[i][j]) == m.end()){
                m[visited[i][j]] = arr[i][j];
                if(arr[i][j] == 0)
                    countZero++;
                else
                    countOne++;
            }
        }
    }
    
    answer = {countZero,countOne};
    return answer;
}