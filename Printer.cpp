//
// Created by kailo on 2023-04-08.
//

#include <iostream>
#include "Printer.h"



void printTheWay(std::vector<double> distance, std::vector<int> parent, int src) {
    std::cout << "Vertex\t\tDistance\tPath";
    for (int i = 1; i < parent.size(); ++i) {
        std::cout << "\n" << src << " -> " << i << "\t\t" << distance[i] << "\t\t" << src;
        printPath(parent,i);

    }
    std::cout << std::endl;
}

void printPath(std::vector<int> parent, int index) {
    int notVisited = -1;

    if (parent[index] == -1){
        return;
    }
    printPath(parent, parent[index]);
    std::cout << " " << index;

}
