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
    os_PutStrFull("V-CONE = (1/3)(pi)(r^2)(h)");
    os_PutStrFull("V-SPHERE = (4/3)(pi)(r^3)");
    os_NewLine();
    os_PutStrFull("V-CYL = (pi)(r^2)(h)");
    os_NewLine();
    os_PutStrFull("MEAN VALUE THEOREM");
    os_NewLine();
    os_PutStrFull("F'(C) = (F(B)-F(A))/B-A");
    os_NewLine();
    os_PutStrFull("ROLLE'S THEOREM");
    os_NewLine();
    os_PutStrFull("F'(C) = 0, F(A) = F(B)");

    while (!os_GetCSC());

    return 0;
}