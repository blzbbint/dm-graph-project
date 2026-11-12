#ifndef GRAPH_H
#define GRAPH_H

#define MAXV 100          /* 그래프 당 최대 정점 수 */
#define INF  1000000000

/* 인접 행렬: adj[i][j] = 가중치 (0이면 간선 없음). 탐방에선 0/비0으로 사용. */
extern int adj[MAXV + 1][MAXV + 1];
extern int n;             /* 현재 그래프의 정점 수 */

/* 과제 지정 함수명 — 각 파일에서 구현 */
void DM_DFS(int start);   /* dfs.c */
void DM_BFS(int start);   /* bfs.c */
void DM_SP(int start);    /* dijkstra.c */

#endif
