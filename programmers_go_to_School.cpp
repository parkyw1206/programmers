/************************************************************
 *  name : Youngwoo Park
 *  date : 10-02-2020
 *  level: l3
 *  problem source: programmers
 *  lang: C++
 *  skill:  dfs
 * *********************************************************/
#include <string>
#include <vector>
#include <iostream>

using namespace std;
int R,C,SUM;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    int arr[n][m];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++)
            arr[i][j] = 0;
    }
    
    for(int i = 0 ; i < n ; i++)
        arr[i][0] = 1;
    for(int j = 0 ; j < m ; j++)
        arr[0][j] = 1;
    
    for(int i =  0 ; i < puddles.size() ; i++){
        arr[puddles[i][1]-1][puddles[i][0]-1] = -1;
        if(puddles[i][1]-1 == 0)
        {
            for(int j = puddles[i][0]-1 ; j < m ; j++)
                arr[0][j] = -1;
        }
        if(puddles[i][0]-1 == 0){
            for(int j = puddles[i][1]-1 ; j < n ; j++)
                arr[j][0] = -1;
        }
    }

    
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < m ; j++){
            if(arr[i][j] != -1){
                if(arr[i-1][j] == -1)
                    arr[i][j] = arr[i][j-1];
                else if(arr[i][j-1] == -1)
                    arr[i][j] = arr[i-1][j];
                else
                    arr[i][j] = (arr[i-1][j] + arr[i][j-1])%1000000007;                 
            }
        }
    }
    
    for(int i = 0; i < n ; i ++){
        for(int j = 0 ; j < m ; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    arr[n-1][m-1]%= 1000000007;
    
    if(arr[n-1][m-1] == -1)
        return 0;
    else
        return arr[n-1][m-1];
}