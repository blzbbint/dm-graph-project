dm_graph: io.c dfs.c bfs.c dijkstra.c graph.h
	gcc -Wall -o dm_graph io.c dfs.c bfs.c dijkstra.c

clean:
	rm -f dm_graph *.o
