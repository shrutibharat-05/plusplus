#include <stdio.h>

void print_it(int i) {
   if (i > 1) {
       print_it(i / 2);  // First recursive call with i/2
       print_it(i / 2);  // Second recursive call with i/2
   }
   printf("#");  // Print "#"
}

int main() {
   int i = 250;  // Starting value
   print_it(i);  // Call the function with i=250
   return 0;
}
