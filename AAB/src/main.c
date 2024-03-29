#include <string.h>
#include <stdio.h> 
#include <ti/screen.h> // used to clear homescreen
#include <ti/getcsc.h> // used to get key input

int main()
{
    os_ClrHome();
    os_PutStrFull("S-CONE = (pi*r)^2 + pi*r*l");
    os_PutStrFull("S-SPHERE = 4 * pi * (r^2)");
    os_NewLine();
    os_PutStrFull("S-CYL = (2*pi*r)(h + r)");
    os_NewLine();

    while (!os_GetCSC());

    return 0;
}