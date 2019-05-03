#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};

    std::cout << "original vector:\n";
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << std::endl;

    auto firstToDelete{std::remove(vec.begin(), vec.end(), 2)};

    std::cout << "after remove:\n";
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << ", ";
    std::cout << std::endl;

    vec.erase(firstToDelete, vec.end());

    std::cout << "after erase:\n";
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << ", ";
    std::cout << std::endl;

    std::for_each(vec.begin(), vec.end(), [](int &i) { i *= 2; });

    std::cout << "doubling members:\n";
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << ", ";
    std::cout << std::endl;

    double avg{};
    std::sort(vec.begin(), vec.end(), [&avg](const auto& a, const auto& b){ return std::abs(a - avg) < std::abs(b - avg)});
    return 0;
}