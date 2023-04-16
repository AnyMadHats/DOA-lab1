#include <iostream>
#include "reader.h"
#include "Algo.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    adjacency_list_t list = parse_file(R"(C:\Users\kailontop\CLionProjects\untitled\edge.txt)");
    Algo algo;

    algo.BFS(list, 0);



    return 0;
}
