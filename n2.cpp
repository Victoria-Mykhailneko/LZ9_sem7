#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> groupList;

    groupList.push_front(403);
    groupList.push_front(402);
    groupList.push_front(401);

    cout << "Початковий список номерів груп:\n";
    for (int group : groupList) {
        cout << group << " ";
    }
    cout << "\n\n";

    groupList.push_front(405);
    groupList.push_front(404);

    cout << "Список після додавання нових номерів:\n";
    for (int group : groupList) {
        cout << group << " ";
    }
    cout << "\n\n";

    int targetGroup = 402;
    groupList.remove(targetGroup);

    cout << "Оновлений список після видалення групи " << targetGroup << ":\n";
    for (int group : groupList) {
        cout << group << " ";
    }
    cout << endl;

    return 0;
}