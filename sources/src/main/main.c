#include <stdio.h>
#include "connection.h"
#include "main.h"

void print_main()
{
    printf("Hello from main\n" );
}


int main()
{

    printf( "Hello world\n" );
    print_main();
    print_device();

    return 0;
}


