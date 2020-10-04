#include<stdio.h>
int main()
{
      char s[150];
      int i, word=1;

      printf("Enter a string: ");
      scanf("%[^\n]",s);

      for(i = 0; s[i] != '\0'; ++i)
      {
          if(s[i]==' '&& s[i+1]!=' ') word++;
      }
//to avoid the white spaces
      if(s[i-1]==' ')word--;
      if(s[0]==' ')word--;
      if(s[0]=='\0')word--;

      printf("Word: %d",word);
      return 0;
}
