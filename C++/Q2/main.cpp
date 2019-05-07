#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <iomanip>

void fillVector(std::vector<std::unique_ptr<std::string>> &); //fills vector with desired values

template <typename T>
void printDetails(const std::vector<T> &, size_t); //prints vector log and vec[i]

int main()
{
    std::vector<std::unique_ptr<std::string>> v1;
    std::cout << std::setfill('*') << std::setw(20) << '*';
    std::cout << std::endl;
    std::cout << "first attemp: \n";
    fillVector(v1);

    std::cout << std::setfill('*') << std::setw(20) << '*';
    std::cout << std::endl;

    std::vector<std::unique_ptr<std::string>> v2;
    std::cout << "second attemp: \n";
    std::cout << std::setfill('*') << std::setw(20) << '*';
    std::cout << std::endl;
    v2.reserve(1000);
    fillVector(v2);

    return 0;
}

void fillVector(std::vector<std::unique_ptr<std::string>> &v)
{
    for (size_t i = 0; i < 1000; i++)
    {
        std::string temp{"str"};
        temp += static_cast<char>(i % 10 + '0');
        temp += static_cast<char>((i / 10) % 10 + '0');
        temp += static_cast<char>((i / 100) % 10 + '0');
        v.push_back(std::make_unique<std::string>(temp));
        printDetails(v, i);
    }
}

template <typename T>
void printDetails(const std::vector<T> &arr, size_t i)
{
    std::cout << "iteration " << i << ":" << std::endl;
    std::cout << *arr[i] << std::endl;
    std::cout << "size: " << arr.size() << std::endl;
    std::cout << "capacity: " << arr.capacity() << std::endl;
    std::cout << std::setfill('=') << std::setw(15) << '=';
    std::cout << std::endl;
}
