#include<stdio.h>
int main(){
    int i;
    int j;
char Pattern[10]="happy";
printf("%d\n",sizeof(Pattern));
printf("%s",Pattern);
printf("\n");
char Text[75]="it is never too late to have a happy childhood";
for ( i = 0; i < sizeof(Text); i++)
{
    for ( j = 0; j <10; j++){
        if (Pattern[i]==Text[j])
           {
               printf("%c",Pattern[i]);
               printf("The sting is matching in index --%d",j);
               
           }
           
    }
    printf("%c",Text[i]);
}


}