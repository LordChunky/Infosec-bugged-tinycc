#include <stdio.h>

int main() {
    char *program = "#include <stdio.h>%c%cint main() {%c    char *program = %c%s%c;%c    printf(program, 10, 10, 10, 34, program, 34, 10, 10, 10);%c    return 0;%c}";
    printf(program, 10, 10, 10, 34, program, 34, 10, 10, 10);
    return 0;
}

// outputting the quine output as a string that is itself
// char *quine_t = "char quine_output[] = \"%s\";";
// char buffer[1024];
// sprintf(buffer, quine_t, quine_t);
// printf("%s", buffer);
