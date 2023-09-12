#include <bits/stdc++.h> // import와 같은 의미
using namespace std;     // namespace는 std::cin와 같이 써야하는 것을 cin, cout으로 사용하게 해주는 기능
string a;
vector<int> b;
int main() {
    b.push_back(1);
    b.push_back(2);
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    // cin: 입력, cout: 출력
    cin >> a; // 화살표 방향으로 입력
    cout << a << "\n"; // 화살표 방향으로 출력
    return 0;
}