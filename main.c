#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int array[100];
    int input = 0;
    
    while(fgets(str, sizeof(str), stdin)){
        printf("%s\n",str);
        
        int n = atoi(str);
            
          if( n => 0)
          {
              array[input++] = n;
          }
        else
        {
            printf("%s\n",array[input-1];
        }
    }

    return 0;
}
