#include "test_seq.h"
#include "test_sorts.h"
#include "interface_and_time.h"


int main()
{
    Test_seq();
    TEST_ALL_SORTS();
    cout << "if you see this message it means tests for sequence and sorts passed well" << endl;
    interface();
}

/*   
1)отсортировать массив( длина и массив на вход)
2)узнать лучшую сортировку для конкретного массива(по времени)
3)сформировать случайный массив и отсортировать его(по длине)
4)узнать какая сортировка лучше на отсортированном, случайно сортированном и тд
*/