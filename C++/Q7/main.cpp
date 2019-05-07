#include <iostream>
#include <iomanip>
#include <vector>
#include <time.h>
#include <algorithm>
#include <cmath>

template <typename T>
void printContainer(const T &, std::string);

int main()
{
    std::vector<int> a(50);
    printContainer(a, "a is:");

    std::vector<int> b(50);
    srand(time(NULL));
    std::generate(b.begin(), b.end(), [](){return rand() % 50 + 1;});
    printContainer(b, "b is:");

    std::sort(b.begin(), b.end(), std::less<>());
    b.erase(std::unique(b.begin(), b.end()), b.end());
    printContainer(b, "b after removing duplicated members:");
    std::vector<int> c(50);
    int num{1};
    std::for_each(c.begin(), c.end(), [&num](int &i) {i = num; num++; });

    printContainer(c, "c is:");

    b.resize(50);
    std::vector<int>::iterator iterb{b.begin()}, iterc{c.begin()};
    std::for_each(a.begin(), a.end(), [&iterb, &iterc](int &i) { i = std::pow(*(iterc++), 2) - std::pow(*(iterb++), 2); });
    printContainer(a, "a is:");
    return 0;
}

template <typename T>
void printContainer(const T &list, std::string message)
{
    std::cout << std::setfill('=') << std::setw(25) << '=';
    std::cout << std::endl;
    std::cout << message << std::endl;
    auto iter{list.cbegin()};
    std::for_each(list.cbegin(), list.cend(), [&iter](const auto &i) { std::cout << *iter << ", "; iter++; });

    std::cout << std::endl;
    std::cout << std::setfill('=') << std::setw(25) << '=';
    std::cout << std::endl;
}
