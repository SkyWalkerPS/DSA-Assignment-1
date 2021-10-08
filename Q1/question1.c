#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    scanf("%s", s);

    int cnt=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i]=='.')cnt++;
        if(cnt>1)break;
    }
    
    if(cnt != 1 || s[strlen(s)-1]=='.'){
        printf("invalid\n");
    }
    else printf("valid");

    return 0;
}   