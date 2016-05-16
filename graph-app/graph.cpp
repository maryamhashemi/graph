#include "graph.h"

Graph::Graph(){}
void Graph::insert()
    {
        vertices.push_back(v);
    }

void Graph::printGraph()
    {
        for (int i = 0; i < vertices.size(); i++)
            vertices[i]->printEdges();
    }
