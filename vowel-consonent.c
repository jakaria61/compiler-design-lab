#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool isVowel(char ch){
ch=tolower(ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    return true;
}
else{
    return false;
}

}
void main(){

char str[200]="Munmun is the student of Computer Science & Engineering";

int vowelcount=0,consonentcount=0;
for(int i=0;i<strlen(str);i++){
 if(isVowel(str[i])){
    vowelcount++;
 }
 else if(!isVowel(str[i])){
    consonentcount++;
 }
}
printf("Vowel is : %d\n",vowelcount);
printf("Consonent is :%d",consonentcount);
return 0;
}
