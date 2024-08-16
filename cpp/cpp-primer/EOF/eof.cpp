#include <iostream>

using namespace std;

int main()
{

    cin.setstate(cin.badbit);
    auto old_state = cin.rdstate(); // cin의 현재 상태를 기억합니다.
    cin.clear();                    // cin을 유효하게 만듭니다.
    cin.setstate(cin.eofbit);
    cin.clear();
    cin.setstate(old_state); // 이제 cin을 이전 상태로 재설정합니다.
    cout << cin.rdstate() << endl;

    // output stream
    cout << "hi!" << endl;  // hi와 개행을 쓰고 버퍼를 플러시합니다.
    cout << "hi!" << flush; // hi를 쓰고 버퍼를 플러시합니다. 데이터를 추가하지 않습니다.
    cout << "hi!" << ends;  // hi와 null을 쓰고 버퍼를 플러시합니다.

    cout << unitbuf; // 모든 쓰기는 즉시 플러시됩니다.
    // 모든 출력은 즉시 플러시됩니다. 버퍼링되지 않습니다.
    int i;
    cin >> i;
    cout << nounitbuf; // 정상적인 버퍼링으로 돌아갑니다.

    return 0;
}