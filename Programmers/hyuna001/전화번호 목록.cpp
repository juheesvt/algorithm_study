#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    // 전화번호를 오름차순으로 정렬
    sort(phone_book.begin(), phone_book.end());

    // 전화번호를 비교하여 접두어인지 확인
    for (int i = 0; i < phone_book.size() - 1; i++) {
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].length())) {
            answer = false;
            break;
        }
    }
    return answer;
}