#include<stdio.h>
int main(){
    int Marks;
    printf("Ener your Marks=");
    scanf("%d",&Marks);
    if(Marks>90){
        printf("Grade A");
    }else if(Marks>70){
        printf("Grade B");
    }else if(Marks>50){
        printf("Grade c");
    }else if(Marks>45){
        printf("Grade D");
    }else{
        printf("Fail");
    }
    return 0;
}