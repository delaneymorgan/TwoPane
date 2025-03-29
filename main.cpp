#include <iostream>

#include "TwoPane.h"

int main() {
    TwoPane tp(0, 20);
    std::istream input(tp.GetInput());
    std::ostream output(tp.GetOutput());
    while (true) {
        std::string command;
        input >> command;
        // execute command
        if (command == "quit") {
            output << "Goodbye!" << std::endl;
            break;
        }
        output << command << std::endl;
    }
    return 0;
}
