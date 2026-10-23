#include <string.h>
#include <orbis/SystemService.h>

int main(void) {
    SceSystemServiceBrowserParam param;
    sceSystemServiceBrowserParamInitialize(&param);
    strcpy(param.initialUrl, "https://dlpsgame.com/category/ps4");
    param.width = 1920;
    param.height = 1080;
    sceSystemServiceBrowserOpen(&param);
    return 0;
}
