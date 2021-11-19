#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 昇順でソート
int compare_asc_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

// 降順でソート
int compare_desc_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

// 文字列のリバース
void revStr(char* str){
    int size = strlen(str);
    int i,j;
    char tmp = {0};
    
    for(i = 0, j = size - 1; i < size / 2; i++, j--){
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    return;    
}

int main(void){
    // 2回連続入力
    int a, b;
    scanf("%d%d", &a, %b);

    // n回連続入力
    int n = 0;
    scanf("%d", &n);
    int c[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    // ソート方法
    qsort(a, n, sizeof(int), compare_asc_int);

    return 0;
}