#include <iostream>
#include <iomanip>
#include <vector>
#include <chrono>
#include <bumble_sort.h>

void display(const std::vector<int> items)
{
    for (const auto& i : items) {
        std::cout << i << ", ";
    }
    std::cout << "\b\b\n";
}

std::vector<int> initialize_vector(uint16_t n)
{
    std::vector<int> items;
    for(uint16_t i={n} ; i>0; --i)
    {
        items.emplace_back(i);
    }
    return items;
}

int main() {

    std::cout << std::setw(4) << "n" << std::setw(15) << "t(s)\n";
    for(uint16_t n{2} ; n<13; ++n) {
        std::vector<int> items{initialize_vector(n)};
        auto start = std::chrono::high_resolution_clock::now();
        bumble_sort::bumble_sort(items);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;
        //display(items);

        std::cout << std::setw(4) <<  n  << std::setw(15) <<  std::setprecision(8) << std::fixed << elapsed.count() << "\n";
    }

    std::cout << "\n\nDone\n";
    return 0;
}

// 2 = 1.127e-6
// 3 = 8.64e-07
// 4 =4.444e-06