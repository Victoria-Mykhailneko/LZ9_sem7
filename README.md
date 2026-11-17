#Лабораторна робота №9: Опрацювання однозв'язних списків

**Виконала:** студентка групи 4 СОМ Вікторія Михайленко (Варіант №9)

**Мета:**набути практичних навичок створення та застосування однозв’язних списків
за допомогою контейнера forward_list.

##  Завдання.
**Завдання 1:** <img width="528" height="36" alt="image" src="https://github.com/user-attachments/assets/fae32b92-8ce6-408f-89ba-01db7ecfb67b" />

### 💻 Код програми:
```cpp
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
```

**Результат:**
<img width="897" height="592" alt="image" src="https://github.com/user-attachments/assets/91a0fd71-5a5a-41b2-91d5-7dfaef14b584" />


**Завдання 2:** <img width="512" height="37" alt="image" src="https://github.com/user-attachments/assets/323230dc-e85b-4d49-acf4-0d8e2e55d257" />


### 💻 Код програми:
```cpp
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
```

**Результат:**
<img width="897" height="487" alt="image" src="https://github.com/user-attachments/assets/29848ea0-4c7d-4bc8-8032-ab7216a21680" />


**Висновок:** Під час виконання лабораторної роботи я опанувала роботу з контейнером однозв’язного списку std::forward_list 
у мові програмування C++. Засвоїла основні методи роботи з даними за допомогою ітераторів та вбудованих функцій 
(таких як push_front, remove, insert_after та erase_after). Реалізувала алгоритми динамічного додавання, пошуку 
та видалення елементів за заданою умовою.
