#include<iostream>
2: #include<iomanip>
3:
4: #define MAX 20
5: #define INF 99999
6: #define NIL -1
7:
8: using namespace std;
9:
10: void FloydWharshal(int Cost[][MAX],int
Dist[][MAX],int Parent[][MAX],int n)
11: {
12: int i,j,k;
13: int D[MAX][MAX][MAX];
14: int P[MAX][MAX][MAX];
15:
16: for(i=1;i<=n;i++)
17: {
18: for(j=1;j<=n;j++)
19: {
20: D[0][i][j] = Cost[i][j];
21: if(D[0][i][j]==0 || D[0][i][j]==INF)
22: P[0][i][j] = NIL;
23: else
24: P[0][i][j] = i;
25: }
26: }
27:
28: for(k=1;k<=n;k++)
29: {

30: for(i=1;i<=n;i++)
31: {
32: for(j=1;j<=n;j++)
33: {
34: if(D[k-1][i][k]+D[k-1][k][j] <
D[k-1][i][j] )
35: {

36: D[k][i][j] = D[k-1][i][k]+D[k-
1][k][j];

37: P[k][i][j] = P[k-1][k][j];
38: }
39: else
40: {
41: D[k][i][j] = D[k-1][i][j];
42: P[k][i][j
43: }
44: }
45: }
46: }
47:
48: for(i=1;i<=n;i++)
49: {
50: for(j=1;j<=n;j++)
51: {
52: Dist[i][j] = D[n][i][j];
53: Parent[i][j] = P[n][i][j];
54: }
55: }
56:
57: }

58:
59: int main()
60: {
61:
62: int n;
63: int i,j;
64:
65: //Test Input-1
66: n=5;
67: //Cost Matrix for the input graph
68: int Cost[][MAX]={ {0, 0, 0, 0, 0, 0},
69: {0, 0, 3, 8, INF,-4},
70: {0, INF,0, INF,1, 7},
71: {0, INF,4, 0, INF,INF},
72: {0, 2, INF,-5, 0, INF},
73: {0, INF,INF,INF,6, 0}
};
74:
75:
76: int Dist[MAX][MAX];
77: int Parent[MAX][MAX];
78:
79: FloydWharshal(Cost,Dist,Parent,n);
80:
81: cout<<"\n\n\tDistance Matrix: ";
82: for(i=1;i<=n;i++)
83: {
84: cout<<"\n\t";
85: for(j=1;j<=n;j++)
86: {

87: if(Dist[i][j]==INF)
88: cout<<"INF\t\t";
89: else
90: cout<<Dist[i][j]<<"\t\t";
91: }
92: }
93:
94: cout<<"\n\n\tParent Matrix: ";
95: for(i=1;i<=n;i++)
96: {
97: cout<<"\n\t";
98: for(j=1;j<=n;j++)
99: {
100: if(Parent[i][j]==NIL)
101: cout<<"NIL\t\t";
102: else
103: cout<<Parent[i][j]<<"\t\t";
104: }
105: }
106:
107: }