#include "LinkedList.h"

int main() {
    LinkedList<int> list;
    
    list.insert(10);
    list.insert(20);
    list.insert(30);

    std::cout << "List after insertion: ";
    list.display();

    list.deleteValue(20);
    std::cout << "List after deletion: ";
    list.display();

    bool found = list.search(30);
    std::cout << "Search for 30: " << (found ? "Found" : "Not Found") << std::endl;

    list.clear();
    std::cout << "List after clearing: ";
    list.display();

    return 0;
}
