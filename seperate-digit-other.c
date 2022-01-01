#include<stdio.h>
#include<string.h>
#include<ctype.h>
void printArray(char arr[], int n)
{
    for(int i=0; i<n; i++){
        printf("%c ", arr[i]);
    }
}
void main(){
char str[100]="Md. Tareq Zaman, Part-3, 2011";
char seperate[100],digit[100],other[100];
int p=0,q=0,r=0;
char *token=strtok(str," ");

while(token!=NULL){
    for(int i=0;i<strlen(token);i++){
        if(isalpha(token[i])){
            seperate[p]=token[i];
            p++;
        }
        else if(isdigit(token[i])){
            digit[q]=token[i];
            q++;
        }
        else{
            other[r]=token[i];
            r++;
        }
    }
    token=strtok(NULL," ");

}

printf("Seperate leter:\n",seperate,p);
printArray(seperate,p);
printf("digit\n",digit,q);
printArray(digit,q);
printf("other symbol",other,r);
printArray(other,r);
}
