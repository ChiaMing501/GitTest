#include <stdio.h>
#include "userValue.h"

void showUserMessage(const char *msg);

int main(int argc, char *argv[])
{
    int inputValue  = 15;
    int resultValue = 0;
    
    resultValue = getUserDoubleValue(inputValue);
    printf("Double value of %d is %d\n", inputValue, resultValue);

    return 0;

} //end of function main

void showUserMessage(const char *msg)
{
	printf("Message: %s\n", msg);
	
} //end of function showUserMessage
