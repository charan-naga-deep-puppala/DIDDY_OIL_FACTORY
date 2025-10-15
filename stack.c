#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int stack[MAX];
int top = -1;

void push(int data){
    if(top == MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = data;
    printf("%d pushed to stack\n", data);
}

void pop(){
    if(top==-1){
        printf("Stack is Empty!!!");
        return;
    }
    printf("stack popped: %d",stack[top--]);
}

void display(){
    if (top == -1){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are: ");
    for(int i = top; i >= 0; i--){
        printf("\n| %d |", stack[i]);
        printf("\n------");
    }
    printf("\n");
}

int main(){
    int choice, data;
    while(1){
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}