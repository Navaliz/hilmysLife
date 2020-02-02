#define TITLE " _    _    ____     __        __      __   __     __   _    ______ \n| |  | |  |    |   |  |      |   \\  /   |  \\ \\   / /   \\|  |  ____|\n| |__| |   |  |    |  |      |    \\/    |   \\ \\_/ /        | |____ \n|  __  |   |  |    |  |      |  |\\  /|  |    \\   /         |____  |\n| |  | |   |  |    |  |___   |  | \\/ |  |     | |           ____| |\n|_|  |_|  |____|   |______|  |__|    |__|     |_|          |______|\n\n __        ____     ______    ______                               \n|  |      |    |   |   ___|  |   ___|                        =     \n|  |       |  |    |  |__    |  |__                        ($    \\ \n|  |       |  |    |   __|   |   __|                  #--      0  ]\n|  |___    |  |    |  |      |  |___    _    _    _        ($    / \n|______|  |____|   |__|      |______|  |_|  |_|  |_|         =     \n\n\n"
#define ACT_LIST "\nWhat should i do now?\n 1. Work\n 2. Play\n 3. Chat\n 4. wash\n  - buy items       (b)\n  - check inventory (i)\n"

char action;

typedef struct{
        char name[50];
        int hea;
        int hap;
        int hyg;
        int soc;
        int mon;
    }hero;

void printStats (hero h){
    printf("Hilmy's stats:\n");
    printf("  Health    : %d\n",h.hea);
    printf("  Happiness : %d\n",h.hap);
    printf("  Hygiene   : %d\n",h.hyg);
    printf("  Social    : %d\n",h.soc);
    printf("  MONEY     : $%d\n",h.mon);
}

void actCheck(char action, hero h){
    while(1>0){
            if (action=='1') {break;}
            else if (action=='2') {break;}
            else if (action=='3') {break;}
            else if (action=='4') {break;}
            else if (action=='b') {break;}
            else if (action=='i') {break;}

            system("cls");
            printf("%s",TITLE);

            printf("Hilmy's stats:\n");
            printf("  Health    : %d\n",h.hea);
            printf("  Happiness : %d\n",h.hap);
            printf("  Hygiene   : %d\n",h.hyg);
            printf("  Social    : %d\n",h.soc);
            printf("  MONEY     : $%d\n",h.mon);

            printf("%s",ACT_LIST);
            scanf("%c",&action);
        };
}



























//backup
    //TITLE
  /*printf(" _    _    ____     __        __      __   __     __   _    ______ \n");
    printf("| |  | |  |    |   |  |      |   \\  /   |  \\ \\   / /   \\|  |  ____|\n");
    printf("| |__| |   |  |    |  |      |    \\/    |   \\ \\_/ /        | |____ \n");
    printf("|  __  |   |  |    |  |      |  |\\  /|  |    \\   /         |____  |\n");
    printf("| |  | |   |  |    |  |___   |  | \\/ |  |     | |           ____| |\n");
    printf("|_|  |_|  |____|   |______|  |__|    |__|     |_|          |______|\n\n");
    printf(" __        ____     ______    ______                               \n");
    printf("|  |      |    |   |   ___|  |   ___|                        =     \n");
    printf("|  |       |  |    |  |__    |  |__                        ($    \\ \n");
    printf("|  |       |  |    |   __|   |   __|                  #--      0  ]\n");
    printf("|  |___    |  |    |  |      |  |___    _    _    _        ($    / \n");
    printf("|______|  |____|   |__|      |______|  |_|  |_|  |_|         =     \n");*/

    //GAME OVER
  /*printf("Health    : 0\n");
    printf("       =     \n");
    printf("     (x    \\ \n");
    printf("#--      <  ]\n");
    printf("     (x    / \n");
    printf("       =     \n");*/
