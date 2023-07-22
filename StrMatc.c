#include<stdio.h>
#include<string.h>
int match(char[],char[]);
int main(){
    char Text[]="abbbabbbaa";
    char Pattern[]="aa";
    int index;
    index=match(Text,Pattern);
    if(index!=-1){
        printf("String matched at index %d",index +1);
    }
    else{
        printf("Pattern not matched ");
    }
    return 0;
}
int match(char pA[],char tX[]){
    int p,t,t_length,p_Length ,index=-1;;
     t_length=strlen(pA);
     p_Length=strlen(tX);
    for (t = 0; t <t_length-p_Length; t++){
       index=t;
        for (p = 0; p < p_Length; p++){        
            if(pA[p]==tX[t]){
                p++;
            }
            else
            break;
        }
    }
    if (p == p_Length) {
      return index;
    }
    return -1;
  }
  