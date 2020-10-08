#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 1;
    int l = 1 ,r = 0 , sum = 0;
    while(r <= n){
        //cout << "(" << l << ", " << r << ") ==> " << sum << endl; 
        if(sum >= n){
            if(sum == n){
                answer ++;
                //cout << "Answer UP" << endl;
            }
            sum -= l;
            l++;
        }
        else{
            sum += r;
            r++;
        }

    }
    return answer;
}