#include <string>
#include <vector>

using namespace std;
string subak(int n){
    if(n == 1)
        return "수";
    else if(n%2 == 1)
        return subak(n-1) + "수";
    else
        return subak(n-1) + "박"; 
}
string solution(int n) {
    string answer = "";
    answer = subak(n);
    return answer;
}