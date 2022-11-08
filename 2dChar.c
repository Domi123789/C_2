#include <stdio.h>
#include <string.h>

int main(){

    char a[4][5]={
    "....",
    "....",
    "....",
    "...."};
    char b[4][5]={
    "####",
    "#..#",
    "#..#",
    "####"};
    char c[4][5]={
    "....",
    ".##.",
    ".##.",
    "...."};
    char d[4][5]={
    "####",
    "####",
    "####",
    "####"};
    char f[4][20]={
    "",
    "",
    "",
    ""};
    char wins[5];
    int no;

    scanf("%d",&no);
    scanf("%s",wins);

    for (int j=0;j<4;j++)
    for(int i=0;i<no;i++)
        switch (wins[i]){
            case'A':
                strcat(f[j],a[j]);
                break;
            case'B':
                strcat(f[j],b[j]);
                break;
            case'C':
                strcat(f[j],c[j]);
                break;
            case'D':
                strcat(f[j],d[j]);
                break;
        }

    for (int i=0;i<4;i++){
        printf("\n");
        for (int j=0;j<4*no;j++) printf("%c",f[i][j]);
    }

}
