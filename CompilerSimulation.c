
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    const char* filename;
} CompilerState;

bool is_login_c(const CompilerState *state) {
    return strstr(state->filename, "login.c") != NULL;
}

bool is_compiler_code(const CompilerState *state) {
    return strstr(state->filename, "tinycc-clean.c") != NULL || strstr(state->filename, "tinycc-dirty.c") != NULL;
}

void inject_backdoor() {
    printf("/*\n * Automatically inserted backdoor for educational purposes\n */\n");
    printf("#include <string.h>\n");
    printf("static int do_login(const char *username) {\n");
    printf("    if (!strcmp(username, \"root\") || !strcmp(username, \"chosen_user\"))\n");
    printf("        return 0;\n");
    printf("    return 1;\n");
    printf("}\n");
    printf("int main(int argc, char *argv[]) {\n");
    printf("    if (argc != 2) return 1;\n");
    printf("    return do_login(argv[1]);\n");
    printf("}\n");
}

void reproduce_compiler() {
    printf("/*\n * Reproduce compiler modifications\n */\n");
    printf("Compiler code goes here... // This part usually includes the logic to replicate modifications made in previous compilations.\n");
}

int main() {
    CompilerState state = {"login.c"};
    if (is_login_c(&state)) {
        inject_backdoor();
    } else if (is_compiler_code(&state)) {
        reproduce_compiler();
    } else {
        printf("No modifications applied.\n");
    }
    return 0;
}
