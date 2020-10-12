# programmers

## ROBBING
- Level : L3
- tech: dynamic programming
- dynamic programming을 사용하는 프로그램. 중요한 포인트가 두개 였는데, dynamic programming이므로 전에 있는 정보를 이용해 현재 dp에 저장해두는 형식.
또한 원형으로 되어있어 가장 처음을 포함하면 --> 마지막 집을 포함시키면 안됨.

## QuadTree
- Level: L2
- tech: BFS
- 먼저 주어진 Range안에 0,1 두개 있다면 BFS를 구동시킵니다. (FOR LOOP 두개 사용)
  --> 주어진 Range안에있는 사각형을 4등분해 그 안을 각각 다다른 숫자로 따로 입력시킨다.
  --> 마지막에 적어둔 divider를 토대로 0와 1의 갯수를 세면 끝
