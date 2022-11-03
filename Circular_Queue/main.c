// Main Function to inplement Circular Queue

#include<stdio.h>
#include<stdlib.h>
#include"CircularQueue.h"

void main(){

    while (1){

        int option;
        printf("\n+---------------------------------------------------------+\n");
        printf("|  1 : Insert                                             |\n");
        printf("|  2 : Delete                                             |\n");
        printf("|  3 : Front                                              |\n");
        printf("|  4 : Rear                                               |\n");
        printf("|  5 : Display                                            |\n");
        printf("|  6 : exit                                               |\n");
        printf("+---------------------------------------------------------+\n");
        printf("Choose a Option: ");
        scanf("%d",&option);
        
        switch (option){
        
        case 1:
            
            enqueue();
            break;

        case 2:
            dequeue();
            break;
        case 3:
            Front();
            break;

        case 4:
            Rear();
            break;

        case 5:
            display();
            break;

        case 6:
            exit(0);
            break;

        default:
            printf("\nChoose a Valid Option\n");
            break;
        }
    }
}

// Created by Anish Pillai
