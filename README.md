# 이산수학 프로젝트 — 그래프 탐방 및 최단거리

그래프 탐방(DFS/BFS)과 최단 거리(Dijkstra)를 하나의 프로그램으로 구현한다.
그래프는 **인접 행렬**로 구현한다 (인접 리스트 금지).

마감: **2026-12-11 23:59**

## 빌드 / 실행
```
make
./dm_graph
```

## 파일 구조
| 파일 | 내용 | 담당 브랜치 |
|---|---|---|
| `graph.h` | 공용 선언 (인접 행렬, 함수 원형) | - |
| `dfs.c` | `DM_DFS` | feat/dfs |
| `bfs.c` | `DM_BFS` | feat/bfs |
| `dijkstra.c` | `DM_SP` | feat/dijkstra |
| `io.c` | 입력 파싱 + `main` | feat/io |
| `input1.txt` | DFS/BFS 입력 (시작점 1) | feat/testdata |
| `input2.txt` | Dijkstra 입력 (시작점 1, 양의 정수 가중치) | feat/testdata |

## 필수 함수명 (과제 지정)
`DM_DFS` · `DM_BFS` · `DM_SP`

## 팀
| 이름 | 학번 | GitHub | 담당 |
|---|---|---|---|
| 바상체렝 | 202413539 | @ | |
| 정태욱 | | @ | |
| 임태영 | | @ | |
| 반주오 | | @ | |
| 이민혁 | | @ | |


## 브랜치 규칙
- `main` — 제출용 최종본. 직접 push 금지, PR로만 병합.
- 각자 `feat/*` 브랜치에서 작업 → PR → 리뷰 → `main` 병합.
- 자세한 내용은 CONTRIBUTING.md.
