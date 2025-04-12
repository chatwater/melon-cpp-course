#include <cstdio>
using namespace std;
// 三个数排序 解法1
// 分支嵌套
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a <= b && b <= c) { printf("%d %d %d", a, b, c); }
    else if(a <= c && c <= b) { printf("%d %d %d", a, c, b); }
    else if(b <= a && a <= c) { printf("%d %d %d", b, a, c); }
    else if(b <= c && c <= a) { printf("%d %d %d", b, c, a); }
    else if(c <= a && a <= b) { printf("%d %d %d", c, a, b); }
    else { printf("%d %d %d", c, b, a); }
    return 0;
}

/*
    // 以上是分支嵌套的写法
    if(条件1){
        执行语句1;
    }else if(条件2){
        执行语句2;
    }else if(条件3){
        执行语句3;
    }else if(条件4){
        执行语句4;
    }else{
        执行语句5;
    }
*/