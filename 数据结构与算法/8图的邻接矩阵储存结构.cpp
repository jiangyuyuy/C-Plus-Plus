#include<iostream>
using namespace std;

#define MVNum 100
#define MaxVal 32767  // 表示最大值

struct AMGraph{
    char vexs[MVNum];  // 顶点表
    int arcs[MVNum][MVNum];  // 邻接矩阵
    int vexNum;  // 当前顶点数
    int arcNum;  // 当前边数
};

/*
1.输入总顶点数和总边数
2.依次输入点的信息存入顶点表中
3.初始化领接矩阵，使每个权值初始化为最大值
4.构造邻接矩阵
*/

// 采用邻接矩阵构造无向网

int LocateVex(AMGraph G, char u){
    for (int i = 0; i < G.vexNum;i++){
        if(u==G.vexs[i]){
            return -1;
        }
    }
    return -1;
}

void CreateUDN(AMGraph &G){
    cin >> G.vexNum >> G.arcNum;
    for (int i = 0; i < G.vexNum; i++){
        cin >> G.vexs[i];
    }
    for (int i = 0; i < G.vexNum; i++){
        for (int j = 0; j < G.vexNum; j++){
            G.arcs[i][j] = MaxVal;
        }
    }
    char v1, v2;
    int  w;
    for (int k = 0; k < G.arcNum; k++)
    {
        cin >> v1 >> v2 >> w;  // 输入一条边所依附的顶点及边的权重
        int i = LocateVex(G, v1);
        int j = LocateVex(G, v2);
        G.arcs[i][j] = w;
        G.arcs[j][i] = G.arcs[i][j];
    }
}