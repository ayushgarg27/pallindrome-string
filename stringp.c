#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter the string: ");
    gets(a);
    int l = strlen(a);
    int i = 0;
    int j = l-1;
    int ans = 0;
    while(i<=j){
        if(a[i]!=a[j]){
            ans = 0;
            break;
        }else{
            ans++;
        }
        i++;
        j--;
    }
    if(ans==0){
        printf("Given string is not pallindrome");
    }else{
        printf("Given string is pallindrome");
    }
}