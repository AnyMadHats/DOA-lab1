//
// Created by kailo on 2023-04-04.
//

#include <stack>
#include "Algo.h"



int Algo::CheckifVisited(std::vector<bool>& vector) {
    for(bool e : vector){
        if(!e){
            return 1;
        }
    }
    return -1;
}

/*
int Algo::CheckifVisited(std::vector<bool> vector) {
    for(auto e : vector){
        if(!e){
            return e;
        }
    }
    return -1;
}
*/




int BFS(adjacency_list_t list, int start) {
    std::stack<int> stack;
    std::vector<bool> visited(list.first.size(), false);
    visited[start] = true;
    stack.push(start);

    while(!stack.empty()){
        start = stack.top();
        stack.pop();

        for (auto i = list.second.begin(); i != list.second.end() ; i++ ) {
            if(i->n1 == start){
                if(!visited[i[0].n2]){
                    visited[i[0].n2] = true;
                    stack.push(i[0].n2);
                }

            }

        }
    }
    return Algo::CheckifVisited(visited) ;
}
