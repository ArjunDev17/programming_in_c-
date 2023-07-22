#include <stdio.h>
#include <string.h>
int match(char [], char []);
//gloabali declaration
int end=0;

int main() {
  char a[46]="10010101101001100101111010";
  char b[8]="001011";
  int index;
//calling match method 
  index = match(a, b);
  if (index != -1) {
    printf("Statart Pattern at index: %d\n", index + 1);
    printf("End Pattern at index %d",end);
  }
  else {
    printf("Not found.\n");
  }
  return 0;
}
//Defination of match() method
int match(char text[], char pattern[]) {
  int t,p,text_length, pattern_length, position = -1;
//finding length 
  text_length    = strlen(text);
  pattern_length = strlen(pattern);
//if pattern length is greter then Text then impossible match operation
  if (pattern_length > text_length) {
    return -1;
  }
  for (t = 0; t <= text_length - pattern_length; t++) {
    position = t;

    for (p = 0; p < pattern_length; p++) {
      if (pattern[p] == text[t]) {
        t++;
        end=t;
        
      }
      else {
        break;
      }
    }
    if (p == pattern_length) {
      return position;
    }
  }

  return -1;
}