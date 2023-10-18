//
// Created by kailo on 2023-04-08.
//

#ifndef UNTITLED1_PRINTER_H
#define UNTITLED1_PRINTER_H

#include "vector"
#include "reader.h"


void printAllWays(std::vector<double> distance, std::vector<int> parent, int src);
void printPath(std::vector<int> vector1, int i);
void printMatrix(adjacency_list_t list );

#endif //UNTITLED1_PRINTER_H
