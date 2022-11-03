// A c Program to implement circular queue.

// In circular Queue we use Circular increment of the front and rear using % 

#include<stdio.h>
#define Max_Size 5

int Queue[Max_Size];
int front=-1,rear=-1;

//Function to Insert an Element into the Queue
void enqueue(){

    if ((front==0 && rear==Max_Size-1)||(rear==front-1)){
        printf("Queue is Full\n");
    }
    
    else{
        int num;
        printf("\nEnter the Element: ");
        scanf("%d",&num);

        if (front==-1 && rear==-1){
        front=0;
        rear=0;
        Queue[rear]=element;
        }

        else{
            rear=(rear+1)%Max_Size;
            Queue[rear]=element;
        }
        printf("%d added to Queue\n",element);
    }
}

// Function to Remove an Element from the Queue
void dequeue(){
    if (front==rear){
        front=-1;
        rear=-1;
        printf("Queue is Empty\n");
    }
    else{
        front=(front+1)%Max_Size;
    }  
}

// Function to display the First element in the Queue
void Front(){
    if (front==rear){
      printf("Queue is Empty\n");  
    }
    else{
        printf("Front : %d\n",Queue[front]);
    }
}

// Function to display the Last element in the Queue
void Rear(){
    if (front==rear){
        printf("Queue is Empty\n");
    }
    else{
        printf("Rear : %d\n",Queue[rear]);
    }
}

//Function to Display the Queue
void display(){
    if (front==rear){
        printf("Queue is Empty\n");
    }
    else{
        int i;
        printf("Queue :");
        for (i = front; i!=rear; i=(i+1)%Max_Size){
            printf("%d ",Queue[i]);
        }   
        printf("%d",Queue[i]);
    }
    
}

// Created by Anish Pillai
