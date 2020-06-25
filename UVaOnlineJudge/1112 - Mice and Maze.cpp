#include <iostream>
#include <vector>
#include <queue>
#include <list>
#define MAX_NODES 101
#define INF 1000000000
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

typedef struct Edge {
	
	int u, v, cost;
	
	Edge(int _u, int _v, int _cost) {
		u = _u;
		v = _v;
		cost = _cost;
	}
	
} Edge;

typedef struct Graph {
	
	int nbNodes;
	int nbEdges;
	list<Edge> edges[MAX_NODES];
	
	void addEdge(int u, int v, int cost = 0) {
		edges[u].push_back(Edge(u, v, cost));
	}
	
	// Single Source Shortest Path (Dijkstra)
	vi SSSP(int source) {
		list<Edge>::iterator it;
		
		// Init the "dist" array
		vi dist(nbNodes+1, INF);
		dist[source] = 0;
		
		// Init the priority queue
		priority_queue< ii, vii, greater<ii> > pq;
		pq.push(ii(0, source));
		
		while (!pq.empty()) {
			ii front = pq.top();
			pq.pop();
			
			int d = front.first; // dist
			int u = front.second; // node
			
			if (d > dist[u]) {
				continue;
			}
			
			for (it = edges[u].begin(); it != edges[u].end(); it++) {
				if (dist[u] + it->cost < dist[it->v]) {
					dist[it->v] = dist[u] + it->cost;
					pq.push(pair<int, int>(dist[it->v], it->v));
				}
			}
		}
				
		return dist;
	}
	
} Graph;

int nbTests;
int source;
int timer;
Graph graph;

int main () {
	
	int u, v, cost;
	
	cin >> nbTests;
	
	for (int t = 1; t <= nbTests; t++) {
		// reset graph
		graph = Graph();
		
		// input
		cin >> graph.nbNodes >> source >> timer >> graph.nbEdges;
				
		for (int i = 1; i <= graph.nbEdges; i++) {
			cin >> u >> v >> cost;
			
			graph.addEdge(v, u, cost);
		}
		
		// run dijkstra algorithm
		vi sssp = graph.SSSP(source);
		
		int nbMice = 0;		
		for (int i = 1; i <= graph.nbNodes; i++) {
			if (sssp[i] <= timer) {
				nbMice++;
			}
		}
		
		// output
		cout << nbMice << endl ;
		if (t < nbTests) {
			cout << endl;
		}
	}
	
	return 0;
	
}
