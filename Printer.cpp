//
// Created by kailo on 2023-04-08.
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include "Printer.h"
#include "Matrix.h"


void printAllWays(std::vector<double> distance, std::vector<int> parent, int src) {
    std::cout << "Vertex\t\t\tDistance\tPath";
    for (int i = 1; i < parent.size(); ++i) {
        if (i < 10){
            std::cout << "\n" << src << " -> " << i << " \t\t" << distance[i] << "\t\t" << src;
        } else{
            std::cout << "\n" << src << " -> " << i << "\t\t" << distance[i] << "\t\t" << src;
        }
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

/*
void printMatrix(adjacency_list_t list) {
    std::vector<std::vector<double>> matrix = createMatrix (list);
    std::cout << "     ";
    for (int i = 0; i < matrix.size(); ++i) {
        if (i < 10) {
            std::cout << i << "     ";
        } else {
            std::cout << i << "    ";
        }
    }
        std::cout << std::endl << "     -----------------------------------------------------------------------------------------------------------------------------------------------"<< std::endl;
        for (int j = 0; j < matrix.size(); ++j) {
            if (j < 10)
                std::cout << j << "  | ";
            else
                std::cout << j << " | ";

            for (int k = 0; k < matrix.size(); ++k) {
                std::ostringstream ostringstream;
                ostringstream << std::fixed;
                ostringstream << std::setprecision(2);
                ostringstream << matrix[j][k];
                std::string stringobj = ostringstream.str();
                std::cout << stringobj << " ";
                if (matrix[j][k] < 10)
                    std::cout << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
*/




