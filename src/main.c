#include <orbis/libkernel.h>
#include <orbis/SystemService.h>

int main(void) {
    sceSystemServiceInitialize();
    const char *url = "https://dlpsgame.com/category/ps4/";
    sceSystemServiceLaunchWebBrowser((char*)url);
    for(;;) sceKernelUsleep(1000000);
    return 0;
}
