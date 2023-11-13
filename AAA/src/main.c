#include <string.h>
#include <stdio.h>
#include <ti/screen.h>
#include <ti/getcsc.h>
#include <sys/lcd.h>
#include <sys/timers.h>
#include <ti/tokens.h>
#include <tice.h>

int main(void)
{
    os_ClrHome();
    os_PutStrFull("d");

    while (!os_GetCSC());

    return 0;
}