//
// Created by madhat.shahda on 2023-09-29.
//

#include "Matrix.h"
#include "Printer.h"

std::vector<std::vector<double>> createMatrix(adjacency_list_t input) {
    std::vector<std::vector<double>> matrix(input.first.size(),std::vector<double>(input.first.size(),0));
    for (int i = 0; i < input.first.size(); ++i) {
        for (auto it: input.second){
            if (it.n1 == i){
                matrix[i][it.n2] = it.weight;
            }
        }
    }

    return matrix;
}
