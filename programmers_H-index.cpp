#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0, count = 0;
    sort(citations.begin() , citations.end());
    for(int i = citations.size() ; i >= 0; i--){
        count = 0;
        for(int j = citations.size()-1 ; j >= 0 ; j--){
            //cout << "Compare " << i << " and "<< citations[j] << endl;
            if(i <= citations[j])
                count++;
            else
                break;
        }
        if(i <= count)
            return i;
    }
    return answer;
}