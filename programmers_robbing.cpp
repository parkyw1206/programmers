/************************************************************
 *  name : Youngwoo Park
 *  date : 10-07-2020
 *  level: l3
 *  problem source: programmers
 *  lang: C++
 *  skill:  dynamic programming
 * *********************************************************/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> money) {
    int answer = 0 , money1= 0 , money2 = 0;
    int arr[money.size()],arr1[money.size()];
    
    arr[0] = money[0];
    arr[1] = money[1];
    
    for(int i  = 2 ; i < money.size()-1 ; i++){
        if(i > 2)  {
            arr[i] = max(money[i] + arr[i-2],money[i]+arr[i-3]);
            arr[i] = max(arr[i], arr[i-1]);            
        }
        else{
            arr[i] = max(money[i] + arr[i-2],arr[i-1]);            
        }
    }
    money1 = arr[money.size()-2];
    
    arr1[0] = 0;
    arr1[1] = money[1];
    for(int i  = 2 ; i < money.size() ; i++){
        if(i > 2)  {
            arr1[i] = max(money[i] + arr1[i-2],money[i]+arr1[i-3]);
            arr1[i] = max(arr1[i], arr1[i-1]);            
        }else{
            arr1[i] = max(money[i] + arr1[i-2],arr1[i-1]);            
        }
    }
    money2 = arr1[money.size()-1];
    answer = max(money1,money2);
    return answer;
}