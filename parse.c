#include "project.h"

void parse (char **args, char *buff)
{
  while(*buff != '\0'){
    while(isspace((unsigned char) *buff)) 
      *buff++ = '\0';

    *args++ = buff;
    while((*buff != '\0') && (!isspace((unsigned char)*buff))) buff++;
  }
  *args = NULL;
}