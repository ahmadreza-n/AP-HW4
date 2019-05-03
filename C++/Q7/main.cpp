#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
#include <cmath>

template <typename T>
void printContainer(const T&, std::string);

int main() {
    std::vector<int> a(50);
    std::vector<int> b(50);
    srand(time(NULL));
    std::for_each(b.begin(), b.end(), [](int& i){i = rand() % 50 + 1;});

    printContainer(a, "a is:");
    printContainer(b, "b is:");

    b.erase(std::unique(b.begin(), b.end()), b.end());
  printContainer(b, "b is:");
    std::vector<int> c(50);
    int num{1};
    std::for_each(c.begin(), c.end(), [&num](int &i){i = num; num++;});

    printContainer(c, "c is:");

    b.resize(50);
    printContainer(b, "b is:");
    std::vector<int>::iterator iterb{b.begin()}, iterc{c.begin()};
    std::for_each(a.begin(), a.end(), [&iterb, &iterc](int &i){i = std::pow(*(iterc++), 2) - std::pow(*(iterb++), 2); });
    printContainer(a, "a is:");
  return 0;
}

template <typename T>
void printContainer(const T& list, std::string message)
{
    std::cout << message << std::endl;
    std::for_each(list.begin(), list.end(), [](const int &i ){std::cout << i << ", ";});
    std::cout << std::endl;
}
