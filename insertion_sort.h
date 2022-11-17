#ifndef INSERTION_SORT_INSERTION_SORT_H
#define INSERTION_SORT_INSERTION_SORT_H
#include <iostream>
#include <vector>

// Insertion sort by Jonathan Bergius (jpggg)
size_t insertion_sort(std::ranges::common_range auto &a){

    size_t iteration_counter {0};
    for (auto i {a.begin()}, j {i+1}; i != a.end(), j != a.end();){
        if (*i > *j){
            auto tmp_i = *i;
            *i = *j;
            *j = tmp_i;
            if (i != a.begin()){--i, --j;}}
        else{++i, ++j;}
        ++iteration_counter;
    }
    return iteration_counter;
}




#endif //INSERTION_SORT_INSERTION_SORT_H
