#include <iostream>

#include "Text.h"
void menu(){
    printf("1. Enter the Text\n");
    printf( "2. Show the Text\n");
    printf( "3. Length of text\n");
    printf( "4. Changing to big leeters\n");
    printf( "5. Changing to small letters\n");
    printf( "0. EXIT\n");
    printf("Select an option:\n");
}
int main() {
    char text[100] = " ";
    int choice = 0 ;
    do{
        menu();
        scanf("%d",&choice);
        clear();
        switch(choice)
        {
            case 1:
                enteringText(text);
                break;
            case 2:
                showText(text);
                break;
            case 3:
                printf("Text length = %d\n", count(text));
                break;
            case 4:
                bigLetters(text);
                puts("Change To Big Letters\n");
                break;
            case 5:
                smallLetters(text);
                puts("Change To Small Letters\n");
                break;
            case 0:
                break;
        }
    }while( choice!=6);
}