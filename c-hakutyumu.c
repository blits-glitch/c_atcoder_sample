// link
// https://atcoder.jp/contests/abc049/tasks/arc065_a

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char target[][16] = {"dream", "dreamer", "erase", "eraser"};

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
    // Your code here!
    int i = 0;
    int j = 0;
    int k = 0;
    int t_len;
    char t[100000] = {};

    // 文字列の入力
    scanf("%s", t);
    t_len = strlen(t);
    
    // 検索文字列のリバース
    for(i = 0; i < 4; i++) {
        revStr(target[i]);
    }
    // 入力文字列のリバース
    revStr(t);

    //端から該当するかどうか検索していく 
    for(i = 0; i < t_len;) {
        bool can = false;
        for(j = 0; j < 4; j++) {
            int target_len = strlen(target[j]);
            char cut_t[target_len];
            for(k = 0; k < target_len; k++) {
                cut_t[k] = t[i + k];
            }
            if(strcmp(cut_t, target[j]) == 0) {
                i += target_len;
                can = true;
            }
            // リリース
            for(k = 0; k < target_len; k++) {
                cut_t[k] = NULL;
            }
        }
        if(can == false) {
            break;
        }
    }

    
    if(i == t_len) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
