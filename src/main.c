#include <string.h>
#include <orbis/SystemService.h>

int main(void) {
    SceSystemServiceBrowserParam param;
    sceSystemServiceBrowserParamInitialize(&param);
    strcpy(param.initialUrl, "https://doraemonps437.github.io/esparta-store/");
    param.width = 1920;
    param.height = 1080;
    sceSystemServiceBrowserOpen(&param);
    return 0;
}
