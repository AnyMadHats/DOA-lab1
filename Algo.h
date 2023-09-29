//
// Created by kailo on 2023-04-04.
//

#ifndef UNTITLED1_ALGO_H
#define UNTITLED1_ALGO_H
#include "reader.h"


class Algo {
public:

    int DFS(adjacency_list_t list, int start);
    int BFS(adjacency_list_t list, int start);

    static int CheckifVisited(std::vector<bool>& vector);



};


#endif //UNTITLED1_ALGO_H
