#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
public:
    Graph();
    void insert();
    void printGraph();


private:
    vector<Vertex*> vertices;
};

#endif // GRAPH_H

