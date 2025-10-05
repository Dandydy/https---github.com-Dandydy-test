#include "dynamic_read.h"

int main() {

    printf("Введите строку: ");
    char* ptr = vector();

    printf("Вы ввели: %s\n", ptr);

    free_vector(ptr);

    // size_t read = getline(&line, &len, stdin);
    // if (read != -1) {
    //     printf("Вы ввели: %s", line);
    // }

    return 0;
}
