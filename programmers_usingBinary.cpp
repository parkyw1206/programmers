#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

unsigned long long solution(int n, vector<int> times) {
    unsigned long long answer = 0;
    sort(times.begin(),times.end());

    unsigned long long low = 1,mid,count;
    unsigned long long high = times[times.size()-1]*n;

    while(low <= high){
        mid = (low + high)/2;
        cout << "[" << low << "," << mid << "," << high << "] --> ";
        count = 0;
        for(int i = 0 ; i < times.size();i++){
            count += mid / times[i];
        }
        cout << count << endl;        

        if(count >= n){
            if(answer == 0)
                answer = mid;
            else
                answer = min(answer,mid);
            high = mid -1;
        }else
            low = mid + 1;

    }

    return answer;
}