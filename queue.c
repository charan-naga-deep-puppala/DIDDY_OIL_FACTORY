#include<stdio.h>
#include<stdlib.h>

#define MAX 20

int queue[MAX];
int top = -1;
int start = 0;


void enqueue(int a){
    if(top == MAX){
        printf("Queue is full\n");
    }
    
    else{
        queue[++top] = a;
        printf("Done\n");
    }
}
void dequeue(){
    if(top == start){
        printf("Queue is empty\n");
    }
    else{
        start++;
        printf("Done\n");
    }
}
void printQueue(){
    for(int i=start;i<=top;i++){
        printf("%d \t",queue[i]);
    }
}

int main(){
    int choice, data;
    while(1){
        printf("\n1. enqueue\n2. dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printQueue();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}