#include <string.h>
#include <stdio.h> 
#include <ti/screen.h> // used to clear homescreen
#include <ti/getcsc.h> // used to get key input

int main()
{
    os_ClrHome();
    os_PutStrFull("F' > 0 -> F increasing");
    os_NewLine();
    os_PutStrFull("F' < 0 -> F decreasing");
    os_NewLine();
    os_PutStrFull("F' (+ to -) -> F rel min");
    os_NewLine();
    os_PutStrFull("F' (- to +) -> F rel max");
    os_NewLine();
    os_PutStrFull("F' inc -> F conc up");
    os_NewLine();
    os_PutStrFull("F' dec -> F conc down");
    os_NewLine();
    os_PutStrFull("F' ext val -> F poi");

    while (!os_GetCSC());

    return 0;
}