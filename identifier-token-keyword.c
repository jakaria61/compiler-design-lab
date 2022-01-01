#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void main(){

int i,ide=0,m,con=0,op=0,j;
char b[30],operators[30],identifiers[30],constants[30];

printf("enter the string : ");
scanf("%[^\n]s",&b);
for(i=0;i<strlen(b);i++){

    if(isspace(b[i])){
        continue;
    }
    else if(isalpha(b[i])){
        identifiers[ide] =b[i];
         ide++;
    }
    else if(isdigit(b[i])){
        m=(b[i]-'0');
        i=i+1;
        while(isdigit(b[i])){
            m=m*10 + (b[i]-'0');
            i++;
        }
        i=i-1;
        constants[con]=m;
        con++;
    }
     else{
        if(b[i]=='*'){
            operators[op]='*';
            op++;
        }
        else if(b[i]=='-'){
            operators[op]='-';
            op++;
        }
        else if(b[i]=='+'){
            operators[op]='+';
            op++;
        }
         else if(b[i]=='='){
            operators[op]='=';
            op++;
        }



  }

}
// printing

    printf(" identifiers : ");
     for(j=0;j<ide;j++){
        printf("%c ",identifiers[j]);
     }
    printf("\n constants : ");
     for(j=0;j<con;j++){
        printf("%d ",constants[j]);
     }
    printf("\n operators : ");
      for(j=0;j<op;j++){
        printf("%c ",operators[j]);
      }


}
