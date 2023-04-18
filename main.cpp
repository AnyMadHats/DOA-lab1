#include <iostream>
#include "reader.h"
#include "Algo.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    adjacency_list_t list = parse_file("edges.txt");
    //adjacency_list_t list = parse_file(R"(C:\Users\kailontop\CLionProjects\untitled\edges.txt)");
    //adjacency_list_t list = parse_file(R"(C:\Users\Mad-Desktop\Desktop\Doa\lab1\edge.txt)");
    Algo algo;

    std::cout<< algo.DFS(list, 0);



    return 0;
}
