#ifndef VERTEX_H
#define VERTEX_H

class vertex
{
public:

    vertex();
    void addEdge(Vertex *v, int dist);
    void printEdges();
     string getName();
private:

    string name;
    string color;
    int weight;
    vector<Edge> edges;
};

#endif // VERTEX_H
