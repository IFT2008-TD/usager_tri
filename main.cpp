#include <iostream>
#include <vector>
#include <insert_sort_int.h>

int main() {
    std::vector<int> v {3, 4, 1, 8, 2, 9, 2, 6, 5, 8, 0, 1} ;
    insert_sort_int(v) ;
    for (auto e: v) std::cout << e << " " ;
    return 0;
}
