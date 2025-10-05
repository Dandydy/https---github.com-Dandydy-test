#include "dynamic_read.h"

char* vector(){
    char *line = NULL;

    size_t len = 0;
    size_t size = 0;
    int ch;

    while((ch = getchar()) != '\n' && ch != EOF){
        if (len >= size){
            size = (size == 0) ? 1 : size + 1;
            line = realloc(line, size);
            if(line == NULL){
                perror("Не удалось выделить");
                return NULL;
            }
        }
        line[len++] = (char)ch;
    }

    if(line){
         size++;
         line = realloc(line, size);
         if(line == NULL){
                 perror("Не удалось выделить");
                 return NULL;
             }
         line[len] = '\0';
        return line;
    }
    else return NULL;
}

void free_vector(char* p){
    free(p);
}
