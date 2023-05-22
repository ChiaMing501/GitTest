#include <stdio.h>

void showUserMessage(const char *msg);

int main(int argc, char *argv[])
{
    printf("Hello World\n");
    
    showUserMessage("I am king of the world");

    return 0;

} //end of function main

void showUserMessage(const char *msg)
{
	printf("Message: %s\n", msg);
	
} //end of function showUserMessage
