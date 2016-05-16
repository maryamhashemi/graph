#ifndef EDGE_H
#define EDGE_H

class Edge
{
public:
    Edge();
    Vertex* getOrigin();
    Vertex* getDestination();
    int getDistance();

private:
    Vertex* origin;
    Vertex* destination;
    int distance;
};

#endif // EDGE_H

