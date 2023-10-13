#include <string.h>
#include <stdio.h>
#include <ti/screen.h>
#include <ti/getcsc.h>
#include <sys/lcd.h>
#include <sys/timers.h>

void FillScreen(uint8_t color)
{
    memset(lcd_Ram, color, LCD_SIZE);
}

int main(void)
{
    char passcode[5];
    os_ClrHome();
    sprintf(passcode, "%s", "5678");

    char inputBuffer[5];
    char response[5];

    os_GetStringInput("enter passcode: ", inputBuffer, 5);
    sprintf(response, "%s", inputBuffer);

    FillScreen(0x00);
    msleep(1000);

    if (!strcmp(passcode, response)) {
        os_ClrHome();
        return 0;
    } else {
        FillScreen(0xFF);
        os_NewLine();
        os_PutStrFull("no.");
        msleep(1000);
        main();
    }
}