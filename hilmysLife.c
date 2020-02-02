#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "def.h"



int main(){
    printf("%s",TITLE);
    printf("maximize the window for a better experience.\n----------- press enter to start -----------\n\n");
     char next;
     scanf("%c",&next);
    system("cls");

    //init hero
    hero hilmy;
    strcpy(hilmy.name,"Hilmy");
    hilmy.hea=100;
    hilmy.hap=100;
    hilmy.hyg=100;
    hilmy.soc=100;
    hilmy.mon=0;

    //init item
    int robotFood=0;
    int spinner=0;
    int rubikCube=0;
    int rcCar=0;

    //init other
    int toy;
    int work;
    char working[50];
    int time;
    int finTime=0;
    char buy;
    char play;

    //game start
    /*printf("%s",TITLE);
    scanf("%c",&next);
    printStats(hilmy);
     scanf("%c",&next);
    system("cls");*/


    while(hilmy.hea>0){
        printf("%s",TITLE);
        printStats(hilmy);
        printf("%s",ACT_LIST);


        scanf("%c",&action);
        actCheck(action,hilmy);

        //action logic
        if(action=='1'){
            printf("\nHmm, which work should I take? \n");
            printf(" 1. mow the lawn                   -- salary: $1      time: 1\n");
            printf(" 2. work at grocery store          -- salary: $4      time: 3\n");
            printf(" 3. serve at restaurant            -- salary: $6      time: 4\n");
            printf(" 4. serve bus ticket sales         -- salary: $12     time: 6\n");
            printf(" 5. become a vending machine       -- salary: $20     time: 8\n");
            scanf("%d",&work);
                if (work==1){hilmy.mon+=1;
                    time=1;
                    strcpy(working,"mowing the lawn .");}
                else if (work==2){hilmy.mon+=4;
                    time=3;
                    strcpy(working,"working at grocery store .");}
                else if (work==3){hilmy.mon+=6;
                    time=4;
                    strcpy(working,"serving customer at restaurant .");}
                else if (work==4){hilmy.mon+=12;
                    time=6;
                    strcpy(working,"serving bus ticket sales");}
                else if (work==5){hilmy.mon+=20;
                    time=8;
                    strcpy(working,"I'm a vending machine .");}
            finTime+=time;
            hilmy.hap-=time;
            system("cls");
            printf("%s",TITLE);
            printf("%s",working);
            while (time--){
                Sleep(1000);
                printf(".");
            }
                printf("\n");
                printStats(hilmy);
                printf("\nMy work is done ^-^ <press enter>");

        }
        else if(action=='2'){
            printf("My toys:\n");
            if (spinner==0&&rubikCube==0&&rcCar==0){
                printf(" I have nothing :(, buy me one\n");}
            else{
                toy=spinner+rubikCube+rcCar;
                if (spinner>0){printf("  (s) Spinner     \n");}
                if (rubikCube>0){printf("  (r) Rubik Cube  \n");}
                if (rcCar>0){printf("  (c) RC Car      \n");}
                if (toy==1){
                    printf("Let's play it!\n");}
                else{printf("I wonder what should I play...\n");}
            }
            spinner+=1;
            scanf("%c",&play);
            if (play=='s'){
                    if(spinner>0){

                    }

            }


        }

        else if(action=='3'){
            printf(" \"Hei yo, whatsup?\".");
            time=3;
            finTime+=time-2;
            while(time--){
                printf(".");
                Sleep(1000);}
            printf("\n\nThat was a good talk <press enter>");
            hilmy.soc+=5;
        }

        else if(action=='4'){
            printf(" \"du dudu dudu\".");
            time=3;
            finTime+=time-2;
            while(time--){
                printf(".");
                Sleep(1000);}
            printf("\n\nIt's good to be clean :) <press enter>");
            hilmy.hyg+=10;
        }

        else if(action=='b'){
                printf("=== WELCOME TO THE STORE ===\n What are you looking for?\n\n");
                printf("  (f) Robot Food  \n");
                if (spinner==0){printf("  (s) Spinner     $25\n");}
                if (rubikCube==0){printf("  (r) Rubik Cube  $75\n");}
                if (rcCar==0){printf("  (c) RC Car      $140\n");}
                scanf("%c",&buy);
                if (buy=='s'){spinner+=1;
                    if(spinner>1){spinner-=1;
                        printf("You already have a Spinner\n");}
                    else{hilmy.mon-=25;
                        if (hilmy.mon<0){hilmy.mon+=25;
                            spinner-=1;
                            printf("You don't have enough money\n");}
                        else{time=3;
                            printf("buying Spinner");
                            while(time--){
                                printf(".");
                                Sleep(1000);
                            }}}}
                else if (buy=='r'){rubikCube+=1;
                    if(rubikCube>1){rubikCube-=1;
                        printf("You already have a Rubik Cube\n");}
                    else{hilmy.mon-=75;
                        if (hilmy.mon<0){hilmy.mon+=75;
                            rubikCube-=1;
                            printf("You don't have enough money\n");}
                        else{time=3;
                            printf("buying Rubik Cube");
                            while(time--){
                                printf(".");
                                Sleep(1000);
                            }}}}
                else if (buy=='c'){rcCar+=1;
                    if(rcCar>1){rcCar-=1;
                        printf("You already have an RC Car\n");}
                    else{hilmy.mon-=140;
                        if (hilmy.mon<0){hilmy.mon+=140;
                            rcCar-=1;
                            printf("You don't have enough money\n");}
                        else{time=3;
                            printf("buying RC Car");
                            while(time--){
                                printf(".");
                                Sleep(1000);
                            }}}}
        }

        else if(action=='i'){
            printf("Inventory: \n");
            if (robotFood==0&&spinner==0&&rubikCube==0&&rcCar==0){
                printf("{empty}\n");
            }
            if (robotFood!=0){
                printf(" - Robot Food: %d/n",robotFood);}
            if (spinner!=0){
                printf(" - Spinner\n");}
            if (rubikCube!=0){
                printf(" - Rubik Cube\n");}
            if (rcCar!=0){
                printf(" - RC Car\n");}

        }



        scanf("%c",&next);
        scanf("%c",&next);
        //sample cases
        //hilmy.mon+=25;
        //hilmy.hyg-=8;
        //hilmy.soc-=3;
        hilmy.hea-=10;



        //health decrease relation
        if(hilmy.hap<=60 && hilmy.hap>40){
            hilmy.hea-=3;
        };
        if(hilmy.hap<=40 && hilmy.hap>25){
            hilmy.hea-=5;
        };
        if(hilmy.hap<=25 && hilmy.hap>15){
            hilmy.hea-=7;
        };
        if(hilmy.hap<=15){
            hilmy.hea-=10;
        };

        //==============================//

        if(hilmy.hyg<=60 && hilmy.hyg>40){
            hilmy.hea-=3;
        };
        if(hilmy.hyg<=40 && hilmy.hyg>25){
            hilmy.hea-=5;
        };
        if(hilmy.hyg<=25 && hilmy.hyg>15){
            hilmy.hea-=8;
        };
        if(hilmy.hyg<=15){
            hilmy.hea-=11;
        };

        //==============================//

        if(hilmy.soc<=60 && hilmy.soc>40){
            hilmy.hea-=1;
        };
        if(hilmy.soc<=40 && hilmy.soc>25){
            hilmy.hea-=3;
        };
        if(hilmy.soc<=25 && hilmy.soc>15){
            hilmy.hea-=6;
        };
        if(hilmy.soc<=15 && hilmy.soc>5){
            hilmy.hea-=10;
        };
        if(hilmy.soc<=5){
            hilmy.hea-=15;
        }




        //stats logic
        if(hilmy.hea<0){
            hilmy.hea=0;};
        if(hilmy.hea>100){
            hilmy.hea=100;};

        if(hilmy.hap<0){
            hilmy.hap=0;};
        if(hilmy.hap>100){
            hilmy.hap=100;};

        if(hilmy.hyg<0){
            hilmy.hyg=0;};
        if(hilmy.hyg>100){
            hilmy.hyg=100;};

        if(hilmy.soc<0){
            hilmy.soc=0;};
        if(hilmy.soc>100){
            hilmy.soc=100;};




        //clear screen (only work on windows). For linux, use system("clear") instead
        //
        system("cls");
    }

    //GAME OVER...
    printf("%s",TITLE);
    printStats(hilmy);
    printf("\n\n====================     G A M E   O V E R     ====================\n\n\n");

    printf("Game over. Hilmy's health has reach 0.\n\n");
    printf("Final Score: %d\n\n",finTime);

}
