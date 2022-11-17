#include "insertion_sort.h"

int main() {

    std::vector<int> source {17,16,15,14,13,13,12,11,10,9,8,7,6,5,4,3,2,1};
    std::cout << "Size of source: " << source.size() << std::endl;
    std::cout << "Insertion sort initiated.\nIterations: " << insertion_sort(source) << std::endl;
    std::cout << "Size of sorted source: " << source.size() << std::endl;
    for (auto x : source){std::cout << x << std::endl;}

    return 0;
}
