#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>

template <typename T>
void printContainer(const T &, std::string); //prints the container

int main()
{
  std::vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};

  printContainer(vec, "original vector:");

  auto firstToDelete{std::remove(vec.begin(), vec.end(), 2)}; //iterator of the element = 2

  printContainer(vec, "after remove:");

  vec.erase(firstToDelete, firstToDelete + 1); //erase element = 2

  printContainer(vec, "after erase:");

  std::for_each(vec.begin(), vec.end(), [](int &i) { i *= 2; }); //doubling elements

  printContainer(vec, "members doubled:");

  double avg{};
  std::for_each(vec.begin(), vec.end(), [&avg](const int &i) { avg += i; }); //calculating average
  avg /= vec.size();
  std::sort(vec.begin(), vec.end(),
            [&avg](const auto &a, const auto &b) { return std::abs(a - avg) < std::abs(b - avg); }); //sorting based on average

  printContainer(vec, "members sorted by nearity to the average:");

  vec.erase(std::unique(vec.begin(), vec.end()), vec.end()); //erasing duplicated members

  printContainer(vec, "duplicated members erased");

  std::set<int> s{vec.begin(), vec.end()}; //initializing set with iterator

  printContainer(s, "set created");

  s.erase(std::find_if(s.begin(), s.end(), [](const int &i) { return i > 3; }), s.end()); //removing elements greater that 3

  printContainer(s, "elemnts greater than 3 erased");
  return 0;
}

template <typename T>
void printContainer(const T &list, std::string message)
{
  std::cout << std::setfill('=') << std::setw(25) << '=';
  std::cout << std::endl;
  std::cout << message << std::endl;
  std::for_each(list.begin(), list.end(), [](const int &i) { std::cout << i << ", "; });
  std::cout << std::endl;
  std::cout << std::setfill('=') << std::setw(25) << '=';
  std::cout << std::endl;
}
