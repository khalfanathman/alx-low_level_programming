#include <string.h>

// int _strcmp(char *s1, char *s2)
// {
//   int str1 = (int)(strlen(s1));
//   int str2 = (int)(strlen(s1));
  
//   if( str1 > str2){
//     return 
//   }
  
// }
int _strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    if (s1[i] == s2[i]) {
        return 0;
    }
    else if (s1[i] < s2[i]) {
        return -15;
    }
    else {
        return 15;
    }
}
