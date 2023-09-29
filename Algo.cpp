//
// Created by kailo on 2023-04-04.
//

#include <stack>
#include <iostream>
#include <list>
#include "Algo.h"



int Algo::CheckifVisited(std::vector<bool>& vector) {
    for(bool e : vector){
        if(! e){
            return e;
        }
    }
    return 1;
}

int Algo::DFS(adjacency_list_t list, int start) {
    std::stack<int> stack;
    std::vector<bool> visited(list.first.size(), false);
    visited[start] = true;
    stack.push(start);


    while(!stack.empty()){
        start = stack.top();
        stack.pop();


        for (auto i = list.second.begin(); i != list.second.end() ; i++ ) {
            if(i->n1 == start ){
                if(!visited[i->n2]){
                    visited[i->n2] = true;

                    stack.push(i->n2);
                }

            }

        }
    }
    return Algo::CheckifVisited(visited) ;

}

int Algo::BFS(adjacency_list_t list, int start) {
    std::vector<bool> visited(list.first.size(), false);
    std::list<int> queue;
    visited[start] = true;
    queue.push_back(start);

    std::list<int>::iterator it;

    while (!queue.empty()){
        start = queue.front();
        queue.pop_front();

        for (auto e = list.second.begin(); e != list.second.end(); e++){
            if (e[0].n1 == start){
                if (!visited[e[0].n2]){
                    visited[e[0].n2] = true;
                    queue.push_back(e[0].n2);
                }
            }
        }
    }

    return Algo::CheckifVisited(visited);
}


