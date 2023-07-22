#include <stdio.h>
#include<string.h>
char t[100],p[50];
void main()
{
    int post;
    printf("Enter the source string");
    scanf("%s",t);
    printf("Enter the pattern");
    scanf("%s",p);
    post=brute_force();
    if (post==1)
    printf("%s pattern not found",p);
    else
    printf("%s pattern found at",p,post);
}
int brute_force()
{
    int n,j,m,i;
    n=strlen(t);
    m=strlen(p);
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<m && t[i+j])
        {
            j++;
            if(j==m)
            return i+1;
        }
    }
}