#include <string.h>
#include <stdio.h> 
#include <ti/screen.h> // used to clear homescreen
#include <ti/getcsc.h> // used to get key input

int main()
{
    os_ClrHome();
    os_PutStrFull("F conc ↑ to ↓, pi max");
    os_NewLine();
    os_PutStrFull("F conc ↓ to ↑, pi min");

    while (!os_GetCSC());

    return 0;
}