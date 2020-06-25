#include <iostream>
#include <vector>
#include <queue>
#include <list>
#define MAX_NODES 20001
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
	
	int getEdgeValue(int u, int v) {
		list<Edge>::iterator it;
		
		for (it = edges[u].begin(); it != edges[u].end(); it++) {
			if (it->v == v) {
				return it->cost;
			}
		}
		
		return 0;
	}
	
	void setEdgeValue(int u, int v, int cost) {
		list<Edge>::iterator it;
		
		for (it = edges[u].begin(); it != edges[u].end(); it++) {
			if (it->v == v) {
				it->cost = cost;
				break;
			}
		}
	}
	
	void deleteEdge(int u, int v) {
		list<Edge>::iterator it;
		
		for (it = edges[u].begin(); it != edges[u].end(); it++) {
			if (it->v == v) {
				edges[u].erase(it);
				break;
			}
		}
	}
	
	bool hasEdge(int u, int v) {
		list<Edge>::iterator it;
		
		for (it = edges[u].begin(); it != edges[u].end(); it++) {
			if (it->v == v) {
				return true;
			}
		}
		
		return false;
	}
	
	void printGraph() {
		list<Edge>::iterator it;
		
		cout << "Graph:" << endl;
		
		for (int u = 0; u < nbNodes; u++) {
			cout << u << ": ";
			
			for (it = edges[u].begin(); it != edges[u].end(); it++) {
				cout << "(" << it->v << ", " << it->cost << "); ";
			}
			
			cout << endl;
		}
		
		
		cout << endl;
	}
	
	// Single Source Shortest Path (Dijkstra)
	int SSSP(int source, int target) {
		list<Edge>::iterator it;
		
		// Init the "dist" array
		vi dist(nbNodes, INF);
		dist[source] = 0;
		
		// Init the priority queue
		priority_queue< ii, vii, greater<ii> > pq;
		pq.push(ii(0, source));
		
		while (!pq.empty()) {
			pair<int, int> front = pq.top();
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
				
		return dist[target];
	}
	
} Graph;

int nbTests;
int source;
int target;
Graph graph;

int main () {
	
	int u, v, cost;
	
	cin >> nbTests;
	
	for (int t = 1; t <= nbTests; t++) {
		// reset graph
		graph = Graph();
		
		// input
		cin >> graph.nbNodes >> graph.nbEdges;
		cin >> source >> target;
				
		for (int i = 1; i <= graph.nbEdges; i++) {
			cin >> u >> v >> cost;
			
			graph.addEdge(u, v, cost);
			graph.addEdge(v, u, cost);
		}
		
		// run dijkstra algorithm
		int dijkstraResult = graph.SSSP(source, target);
		
		// output
		cout << "Case #" << t << ": ";
		if (dijkstraResult == INF) {
			cout << "unreachable";
		} else {
			cout << dijkstraResult;
		}
		cout << endl;
	}
	
	return 0;
	
}
