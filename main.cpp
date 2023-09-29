#include <iostream>
#include "reader.h"
#include "Algo.h"
#include "Matrix.h"
#include "Dijkstra.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    adjacency_list_t list = parse_file(R"(C:\Users\madhat.shahda\CLionProjects\DOA-lab1\edges.txt)");
    //adjacency_list_t list = parse_file(R"(C:\Users\kailontop\CLionProjects\untitled\edges.txt)");
    //adjacency_list_t list = parse_file(R"(C:\Users\Mad-Desktop\Desktop\Doa\lab1\edge.txt)");
    Algo algo;

    std::cout<< algo.DFS(list, 0);
    std::cout<< algo.BFS(list, 0);
    std::cout<< "\n";
    std::vector<std::vector<double>> matrix = createMatrix(list);
    dijkstra(matrix, 0,list.first.size());
    dijkstra(matrix, 0,list.first.size());



    return 0;
}
