//m5t2 -- function practice
// Mykayla lewis
// 3/23/26

#include <iostream>
#include "M5t2.h"
using namespace std;

int main()
{
    cout << "Num\tSquare" << endl;
    int start = 2;
    int finish = 10;
    for (int i=start; i <= finish; i++){
        int sq = square(i);
        print_table_line(i,sq);
    }

    return 0;
}
