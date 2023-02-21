u32 artPrintDelay = 50000000;

void DisplayArt(int artID){
    if (artID == 1){
        printf("\x1b[0m");
        printf("\033[32m");
        printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH\n");svcSleepThread(artPrintDelay);
        printf("HXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXH\n");svcSleepThread(artPrintDelay);
        printf(" XXXXXXXXXXOOOOXXXXXXXXXXXXXXXXXXXXOOOOXXXXXXXXXX \n");svcSleepThread(artPrintDelay);
        printf("xXXXXXXXXXXOOoOXXXXXXXXXXXXXXXXXXXXOoOOXXXXXXXXXXx\n");svcSleepThread(artPrintDelay);
        printf("xXXXXXXXXXXOOOOXXXXXXXXXXXXXXXXXXXXOOOOXXXXXXXXXXx\n");svcSleepThread(artPrintDelay);
        printf("xXXXXXXXXXXXXXXXXXXXXXXUUUUXXXXXXXXXXXXXXXXXXXXXXx\n");svcSleepThread(artPrintDelay);
        printf(" XXXXXXXXXXXXXXXXXXXXXXUUUUXXXXXXXXXXXXXXXXXXXXXX \n");svcSleepThread(artPrintDelay);
        printf(" XXXXXXXXXXXXXXXXXXXXXXUVVUXXXXXXXXXXXXXXXXXXXXXX \n");svcSleepThread(artPrintDelay);
        printf(" XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n");svcSleepThread(artPrintDelay);
        printf(" XXXXXXXXXX II XXXXXXXXXXXXXXXXXXXX II XXXXXXXXXX \n");svcSleepThread(artPrintDelay);
        printf(" XXXXXXXXXXXX  II II II II II II II  XXXXXXXXXXXX \n");svcSleepThread(artPrintDelay);
        printf(" XXXXXXXXXXXXII II II II  II II II IIXXXXXXXXXXXX \n");svcSleepThread(artPrintDelay);
        printf("  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX  \n");svcSleepThread(artPrintDelay);
        printf("    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    \n");svcSleepThread(artPrintDelay);
        printf("      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX      ");
    }
    else if (artID == 2){
        printf("\033[32m");
        printf("                       ____                       \n");svcSleepThread(artPrintDelay);
        printf("                      |    |                      \n");svcSleepThread(artPrintDelay);
        printf("                      |    |                      \n");svcSleepThread(artPrintDelay);
        printf("                   ___|    |___                   \n");svcSleepThread(artPrintDelay);
        printf("                  |            |                  \n");svcSleepThread(artPrintDelay);
        printf("                  |            |                  \n");svcSleepThread(artPrintDelay);
        printf("                  |            |                  \n");svcSleepThread(artPrintDelay);
        printf("                  |____________|                  \n");svcSleepThread(artPrintDelay);
        printf("                        ||                        \n");svcSleepThread(artPrintDelay);
        printf("                        ||                        \n");svcSleepThread(artPrintDelay);
        printf("                        ||                        \n");svcSleepThread(artPrintDelay);
        printf("\\|/    |/      \\|       ||   |/        \\|     \\|/\n");svcSleepThread(artPrintDelay);
        printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");svcSleepThread(artPrintDelay);
        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");svcSleepThread(artPrintDelay);
        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");svcSleepThread(artPrintDelay);
    }
    else if (artID == 3){
        printf("\033[32m");
        printf("X     X           X     XX     X           X     X\n");svcSleepThread(artPrintDelay);
        printf(" XXX   XX       XX   XXX  XXX   XX       XX   XXX \n");svcSleepThread(artPrintDelay);
        printf("    XX   XXX XXX   XX        XX   XXX XXX   XX    \n");svcSleepThread(artPrintDelay);
        printf("      X     X     X            X     X     X      \n");svcSleepThread(artPrintDelay);
        printf("       X XX   XX X              X XX   XX X       \n");svcSleepThread(artPrintDelay);
        printf("       X    X    X              X    X    X       \n");svcSleepThread(artPrintDelay);
        printf("        X  X X  X                X  X X  X        \n");svcSleepThread(artPrintDelay);
        printf("        X X   X X                X X   X X        \n");svcSleepThread(artPrintDelay);
        printf("        X  X X  X                X  X X  X        \n");svcSleepThread(artPrintDelay);
        printf("       X    X    X              X    X    X       \n");svcSleepThread(artPrintDelay);
        printf("       X XX   XX X              X XX   XX X       \n");svcSleepThread(artPrintDelay);
        printf("      X     X     X            X     X     X      \n");svcSleepThread(artPrintDelay);
        printf("    XX   XXX XXX   XX        XX   XXX XXX   XX    \n");svcSleepThread(artPrintDelay);
        printf(" XXX   XX       XX   XXX  XXX   XX       XX   XXX \n");svcSleepThread(artPrintDelay);
        printf("X     X           X     XX     X           X     X");
    }
}