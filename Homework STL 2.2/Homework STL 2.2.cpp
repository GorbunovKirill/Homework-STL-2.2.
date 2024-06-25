#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <iterator>

template <typename Container>

void print_container(const Container& cont) {
    for (auto it = cont.begin(); it != cont.end(); ++it) {
        std::cout << *it;
        if (std::next(it) != cont.end()) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list);

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector);

    return 0;
}
