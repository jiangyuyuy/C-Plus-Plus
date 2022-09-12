#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
#include<cstring>

/*
    哈希：数据和地址的一种映射关系
    映射关系：对应关系，不一定是数学关系，也可以自定义对应关系
        y(x) = x; 直接定址法
    哈希地址：不是指真正意义上的地址（地址），而是抽象的参照地址
        举例：数组中数组下标就可以充当哈希地址
    int arrayHash[10];
        y(x) = x;
    arrayHash[1] = 1;
    arrayHash[2] = 2;

    用的比较多的是取余法
        y(x) = x % p;
    数据：1 4 19 11 13
        y = x % 10;
    int arrayHash[10];
        arrayHash[1%10] = 1;
        arrayHash[4%10] = 4;
        arrayHash[19%10] = 19;
    哈希冲突；在哈希地址中已经存在了元素
        arrayHash[11%10] = 11;
    冲突处理方法：
        1.开放地址法
        2.数组链表
*/

// 数组哈希
struct pair_{
    int first;  // 构造一个关键字为构建 hash 地址做准备
    char second[20];  // 数据
};

struct hashTable{
    struct pair_ **table;  // 初始化为二级指针，便判断为 NULL 的时候
    int divisor;  // y = x % division
    int sizeHash;
};

struct hashTable *createHash(int divisor){
    struct hashTable *hash = (struct hashTable *)malloc(sizeof(struct hashTable));
    hash->sizeHash = 0;
    hash->divisor = divisor;
    hash->table = (struct pair_ **)malloc(sizeof(struct pair_) * hash->divisor);
    // hash->table[divisor] : 一级指针
    for (int i = 0; i < divisor; i++){
        hash->table[i] = NULL;  // 没有分配内存
    }
    return hash;
};

// 找到插入的地址
int searchPos(struct hashTable *hash, int first){
    int pos = first % (hash->divisor);
    int curPos = pos;
    do{
        // 后面的是 如果第一项相同则第二项数据覆盖
        if(hash->table[curPos] == NULL || hash->table[curPos]->first == first){
            return curPos;
        }
        curPos = (curPos + 1) % (hash->divisor);
    } while (curPos != pos);
};

void insertHash(struct hashTable*hash,struct pair_ data){
    int pos = searchPos(hash, data.first);
    if(hash->table[pos]==NULL){
        hash->table[pos] = (struct pair_ *)malloc(sizeof(struct pair_));
        memcpy(hash->table[pos], &data, sizeof(struct pair_));  // 内存拷贝
        hash->sizeHash++;
    }
    else{
        if(hash->table[pos]->first == data.first){
            strcpy(hash->table[pos]->second, data.second);
        }
        else{
            printf("表满了！无法插入！\n");
            return;
        }
    }
}

void printHash(struct hashTable*hash){
    for (int i = 0; i < hash->divisor; i++){
        if(hash->table[i]==NULL){
            printf("NULL");
        }
        else{
            printf("%d, %s", hash->table[i]->first, hash->table[i]->second);
        }
        cout << endl;
    }
}

int main(){
    struct hashTable *hash = createHash(10);
    struct pair_ array[5] = {1, "Jiang", 11, "Yu", 13, "Li", 15, "Endea", 3, "Void"};
    for (int i = 0; i < 5;i++){
        insertHash(hash, array[i]);
    }
    printHash(hash);
    cout << endl;

    struct pair_ data = {21, "大灰狼"};
    insertHash(hash, data);
    printHash(hash);

    struct pair_ data1 = {1, "小灰狼"};
    insertHash(hash, data1);
    printHash(hash);
    system("pause");
    return 0;
}