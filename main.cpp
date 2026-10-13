//=====[Libraries]=============================================================
#include "mbed.h"
#include "display.h"

static void userInterfaceDisplayInit();

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    printf("%s\n", "Hello World");
    userInterfaceDisplayInit();
    while (true) {
    }
}


static void userInterfaceDisplayInit()
{
    displayInit( DISPLAY_CONNECTION_GPIO_4BITS );
     
    displayCharPositionWrite ( 0,0 );
    displayStringWrite( "Display.txt" );

}
