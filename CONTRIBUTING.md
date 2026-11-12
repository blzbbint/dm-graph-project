# 협업 규칙

## 작업 순서
```
git checkout main && git pull        # 최신 받기
git checkout -b feat/dfs             # 자기 브랜치
# 작업 ...
git add . && git commit -m "DFS 구현"
git push -u origin feat/dfs
# GitHub에서 Pull Request 생성 → 팀원 리뷰 → main 병합
```

## 규칙
- main에 직접 push 하지 않는다.
- 자기 담당 파일만 수정한다 (충돌 최소화).
- 커밋 메시지는 한 줄로 무엇을 했는지: `DFS 구현`, `input1 파서 추가`.
- 충돌은 PR에서 해결 후 병합.
