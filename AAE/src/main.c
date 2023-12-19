#include <string.h>
#include <stdio.h> 
#include <ti/screen.h> // used to clear homescreen
#include <ti/getcsc.h> // used to get key input

int main()
{
    os_ClrHome();
    os_PutStrFull("trig fn derivs");
    os_NewLine();
    os_PutStrFull("sinx -> cosx");
    os_NewLine();
    os_PutStrFull("cosx -> -sinx");
    os_NewLine();
    os_PutStrFull("cscx -> -cscx*cotx");
    os_NewLine();
    os_PutStrFull("secx -> secx*tanx");
    os_NewLine();
    os_PutStrFull("tanx -> sexc^2");
    os_NewLine();
    os_PutStrFull("cotx -> -(cscx)^2");

    while (!os_GetCSC());

    return 0;
}