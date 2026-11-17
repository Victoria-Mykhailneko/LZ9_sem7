#include <iostream>
#include <forward_list>
using namespace std;
int main() {
    forward_list<int> numList;
    numList.push_front(4);
    numList.push_front(1);
    numList.push_front(7);
    numList.push_front(4);
    numList.push_front(5);
    numList.push_front(1);
    numList.push_front(4);
    numList.push_front(9);

    cout << "Початковий список чисел: ";
    for (int n : numList) {
        cout << n << " ";
    }
    cout << endl;

    for (auto it = numList.begin(); it != numList.end(); ++it) {
        if (*it == 4) {
            auto next_it = it;
            ++next_it;
            if (next_it != numList.end()) {
                numList.erase_after(it);
            }
        }
    }

    auto prev = numList.before_begin();
    auto curr = numList.begin();
    while (curr != numList.end()) {
        if (*curr == 1) {
            prev = numList.insert_after(prev, 0);
        }
        prev = curr;
        ++curr;
    }

    cout << "Список чисел після змін: ";
    for (int n : numList) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}