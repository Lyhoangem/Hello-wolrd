#include <iostream>

// Hàm tính ð? dài c?a chu?i
int my_strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char* str = "Hello, World!";
    int length = my_strlen(str);
    std::cout << "Do dai cua chuoi la: " << length << std::endl;
    return 0;
}

