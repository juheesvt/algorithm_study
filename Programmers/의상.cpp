#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> clothesMap;

    // 의상 종류별 개수 파악
    for (const auto& cloth : clothes) {
        string category = cloth[1];
        clothesMap[category]++;
    }

    // 의상 조합의 수 계산
    for (const auto& entry : clothesMap) {
        answer *= (entry.second + 1);
    }

    // 아무 것도 입지 않은 1가지 경우 제외
    answer--;

    return answer;
}