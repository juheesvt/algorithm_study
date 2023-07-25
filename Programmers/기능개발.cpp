#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int n = progresses.size(); // 작업의 개수
    int idx = 0; // 배포될 작업들을 가리키는 인덱스

    while (idx < n) {
        int day = 0; // 배포되는 날짜
        // 현재 인덱스의 작업이 배포될 때까지 걸리는 일 수 계산
        while (progresses[idx] + (speeds[idx] * day) < 100) {
            day++;
        }

        int deploy_count = 0; // 배포되는 기능의 개수
        // 배포될 작업들을 찾고, 배포되는 기능의 개수를 세기
        while (idx < n && progresses[idx] + (speeds[idx] * day) >= 100) {
            deploy_count++;
            idx++;
        }

        answer.push_back(deploy_count); // 배포되는 기능의 개수를 결과에 추가
    }

    return answer;
}