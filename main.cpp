#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10);
    std::cout << "Size: " << v.size() << "\n";        // 10
    std::cout << "Capacity: " << v.capacity() << "\n"; // Có thể lớn hơn 10

    v.push_back(100);
    std::cout << "Size: " << v.size() << "\n";        // 11
    std::cout << "Capacity: " << v.capacity() << "\n"; // Có thể tăng gấp đôi

    v.shrink_to_fit();
    std::cout << "Capacity: " << v.capacity() << "\n"; // Bằng size


    return 0;
}
