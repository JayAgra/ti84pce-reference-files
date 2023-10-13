#include <ti/screen.h>
#include <ti/getcsc.h>
#include <stdlib.h>

int main()
{
    // clear home screen
    os_ClrHome();

    // print my string
    os_PutStrFull("Hello, World.");
    os_NewLine();
    os_PutStrFull("what if this printed formulas or something");

    // while no key is pressed, do nothing
    // i.e. wait for key press
    while (!os_GetCSC());

    // return
    return 0;
}
