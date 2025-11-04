
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string user_input;
    std::string filename = "output.txt";

    std::cout << "Enter the text you want to write to the file: ";
    std::getline(std::cin, user_input);


    std::ofstream file(filename);


    if (file.is_open()) {

        file << user_input;
        std::cout << "Text has been written to the file: " << filename << std::endl;
    } else {
        std::cerr << "Error: Could not open the file!" << std::endl;
    }


    file.close();

    return 0;
}





























