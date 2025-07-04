#include <stdio.h>
#include <stdbool.h>

int countWords(const char *str) {
    int count = 0;
    bool inWord = false;

    while (*str) {
        if (*str != ' ' && *str != '\n' && *str != '\t') {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
        str++;
    }

    return count;
}

int main() {
    char str[] = "Hello, this is a  to count words.";

    int wordCount = countWords(str);

    printf("The number of words in the string is: %d\n", wordCount);

    return 0;
}



  /*
    
   for(int i=0;a[i]!='\0';i++)
   {
       char x=a[i];
        if(x!='\0')
        {
            count++;
        }
   }
   printf("total char=%d",count);

   */