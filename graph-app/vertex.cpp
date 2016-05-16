#include "vertex.h"


vertex::Vertex(string id,string color1,int w)
{
    name = id;
    color = color1;
    weight = w;
}
  void vertex::addEdge(Vertex *v, int dist)
    {
        Edge newEdge(this, v, dist);
        edges.push_back(newEdge);
    }

   void vertex:: printEdges()
    {
        cout << name << ":" << endl;
        for (int i = 0; i < edges.size(); i++)
        {
        Edge e = edges[i];
        cout << e.getDestination()->getName() <<
            " - " << e.getDistance() << endl;
        }
        cout << endl;
    }

   string vertex:: getName() {return name;}
   string vertex:: getColor() {return color;}
   int vertex:: getWeight() {return weight;}


   vector<Edge> vertex:: getEdges() {return edges;}
