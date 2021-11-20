// link
// https://atcoder.jp/contests/abc086/tasks/arc089_a
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(void){
    int n;
    int i;
    int t = 0; int x = 0; int y = 0;
    bool can = true;
    scanf("%d", &n);
    int txy[n][3];
    for(i = 0; i < n; i++) {
        scanf("%d%d%d", &txy[i][0], &txy[i][1], &txy[i][2]);
    }
    
    for(i = 0; i < n; i++) {
        int dif_t = txy[i][0] - t;
        int dist = abs(txy[i][1] - x) + abs(txy[i][2] - y);
        // 移動可能量以上に現在地と目的地に距離が離れていた場合
        if(dist > t) {
            printf("No");
            return -1;
        }
        // 圏内であれば、dif_tとdistの偶奇が異なっていれば
        if((dif_t % 2) != (dist % 2)) {
            printf("No");
            return -1;
        }
        t = txy[i][0];
        x = txy[i][1];
        y= txy[i][2];
    }
    
    printf("Yes");
    
    // for(i = 0; i < n; i++) {
    //     printf("%d %d %d\n", txy[i][0], txy[i][1], txy[i][2]);
    // }

    return 0;
}
