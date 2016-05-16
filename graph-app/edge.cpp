#include "edge.h"

Edge::Edge(Vertex *org, Vertex *dest, int dist)
{
    origin = org;
    destination = dest;
    distance = dist;
}

   Vertex* Edge:: getOrigin() {return origin;}
   Vertex* Edge::getDestination() {return destination;}
   int Edge::getDistance() {return distance;}

