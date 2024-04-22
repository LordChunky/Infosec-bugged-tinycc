#include <stdio.h>

//prints itself
//have to make it so that it excludes the malicious code (probably what temp.txt is for in the other files)
int main() {
    char *program = "#include <stdio.h>%c%cint main() {%c    char *program = %c%s%c;%c    printf(program, 10, 10, 10, 34, program, 34, 10, 10, 10);%c    return 0;%c}";
    printf(program, 10, 10, 10, 34, program, 34, 10, 10, 10);
    return 0;
}