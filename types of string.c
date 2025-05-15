#include <stdio.h>
#include<string.h>
int main() {
    char name[10];
    printf("enter name");
    scanf("%s",&name);
    printf("%s\n",name);
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"bhagi");
    printf("%s\n",name);
    int cmp=strcmp("bhagi","varnitha");
    printf("%d\n",cmp);
    strcat(name,"is coder");
    printf("%s",name);
    return 0;
}
