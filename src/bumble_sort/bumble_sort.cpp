#include <random>
#include "bumble_sort.h"

namespace bumble_sort {
    std::mt19937 mt;

    void bumble_sort(std::vector<int>& items)
    {
        std::uniform_int_distribution<> dist(0, items.size()-1);
        do {
            std::swap(items[dist(mt)], items[dist(mt)]);
        } while(!std::is_sorted(items.begin(),items.end()));
    }
}
