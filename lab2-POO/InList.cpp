#include "InList.h"

void NumberList::Init() {

    count = 0;

}
bool NumberList::Add(int x) {

    numbers[count] = x;
    count++;

    return true;
}
void NumberList::Sort() {

    bool ok = false;

    do {
        ok = false;

        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count - 1; j++) {
                if (numbers[j] > numbers[j + 1]) {
                    ok = true;
                    swap(numbers[j], numbers[j + 1]);
                }



            }



        }





    } while (ok == true);

}

void NumberList::Print() {

    for (int i = 0; i < count; i++) {
        cout << numbers[i] << ' ';
    }

}