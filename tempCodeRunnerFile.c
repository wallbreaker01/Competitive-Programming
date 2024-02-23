#include <stdio.h>
#include<ctype.h>
int main()
{
    char s[100],v[100];
    int length=0;
    scanf("%s",s);
    while(s[length]!='\0') 
    {
        v[length]=s[length];
        length++;
    }
    printf("%s\n", v);
    return 0;
}



// for(int i=0;i<length;i++)
//     {
//         for(int j=0;j<length-1-i;j++)
//         {
//             if(s[j]>s[j+1]) 
//             {
//                 char temp = s[j];
//                 s[j]=s[j+1];
//                 s[j+1]=temp; 
//             }
//         }
//     }