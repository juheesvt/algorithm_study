#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int n = progresses.size(); 
    int idx = 0; 

    while (idx < n) {
        int day = 0; 
        while (progresses[idx] + (speeds[idx] * day) < 100) {
            day++;
        }

        int deploy_count = 0; 
        while (idx < n && progresses[idx] + (speeds[idx] * day) >= 100) {
            deploy_count++;
            idx++;
        }

        answer.push_back(deploy_count); 
    }

    return answer;
}
