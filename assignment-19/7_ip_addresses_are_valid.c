#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int validate_number(char *str) {
   while (*str) {
      if(!isdigit(*str)){        
         return 0;
      }
      str++; 
   }
   return 1;
}
int validate_ip(char *ip) { 
   int i, num, dots = 0;
   char *ptr;
   if (ip == NULL)
      return 0;
      ptr = strtok(ip, "."); 
      if (ptr == NULL)
         return 0;
   while (ptr) {
      if (!validate_number(ptr)) 
         return 0;
         num = atoi(ptr); 
         if (num >= 0 && num <= 255) {
            ptr = strtok(NULL, "."); 
            if (ptr != NULL)
               dots++; 
         } else
            return 0;
    }
    if (dots != 3) 
       return 0;
      return 1;
}
int main() {
   char ip1[] = "192.168.4.1";
   char ip2[] = "172.16.253.1";
   char ip3[] = "192.800.100.1";
   char ip4[] = "125.512.100.abc";
   validate_ip(ip1)? printf("Valid\n"): printf("Not valid\n");
   validate_ip(ip2)? printf("Valid\n"): printf("Not valid\n");
   validate_ip(ip3)? printf("Valid\n"): printf("Not valid\n");
   validate_ip(ip4)? printf("Valid\n"): printf("Not valid\n");
}