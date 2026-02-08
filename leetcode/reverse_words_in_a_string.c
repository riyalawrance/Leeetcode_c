#include <string.h>
char* reverseWords(char* s) 
{
    int len=strlen(s),ch=0,k=0;
    char* result = (char*)malloc(sizeof(char)*len+1);
    char* word = (char*)malloc(sizeof(char)*len+1);
    word[0] = '\0';
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            word[k]=s[i];
            k++;
        }
        if(s[i]==' '||i==0)
        {
            word[k]='\0';
            int l=strlen(word);
            for(int j=0;word[j]!='\0';j++)
            {
                result[ch]=word[l-j-1];
                //result[ch++]=" ";
                ch++;
            }
            k=0;
            if(i!=0 && s[i-1]!=' '&&ch!=0)
            {
                result[ch]=s[i];
                ch++;
            }
        }
    }
    result[ch]='\0';
    return result;
}
