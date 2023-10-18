//
// Created by madhat.shahda on 2023-09-28.
//

#include <climits>
#include "Dijkstra.h"
#include "Printer.h"
#include "reader.h"

int miniDistance(std::vector<double> distance, std::vector<bool> visitStatus, int size) {   //check all neighboring unvisited nodes and return the index of the shortest path
    int min = INT_MAX;
    int ind{};
    for (int e = 0; e < size; e++){
        if (visitStatus[e] == false && distance[e] <= min ){
            min = distance[e];
            ind = e;
        }
    }
    return ind;
}

void dijkstra(std::vector<std::vector<double>> matrix, int src, int size) {
    std::vector<double> distance(size, INT_MAX);
    std::vector<bool> visited(size, false);
    std::vector<int> parent(size, -1);
    distance[src] = 0;
    for (int count = 0; count < size - 1; ++count) {
        int u = miniDistance(distance, visited, size);
        visited[u] = true;
        for (int v = 0; v < size; ++v) {
            if(!visited[v] && matrix [u][v] && distance[u] + matrix[u][v] < distance[v]){       //if not visited and there is edge between uv and the total of the edge and the distance is smaller than the current value
                parent[v] = u;
                distance[v] = distance[u] + matrix[u][v];
            }
        }
    }
    printAllWays(distance, parent, src);


}

