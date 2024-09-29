#include <iostream>
using namespace std;
// Sizeof Массивы

int main() {
    int arr[]{ 5, 230, 4500 }; // в переменной int храниться 4 байта данных, а у нас 3 элемента в массиве. То есть 4*3=12 байт
    cout << sizeof(arr) << endl;
}
// Полный список размеров типов данных в README.md