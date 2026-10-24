#include <orbis/libkernel.h>
#include <orbis/Sysmodule.h>
#include <orbis/SystemService.h>

int main(void){
    sceSysmoduleLoadModule(0x80000026);
    OrbisSystemServiceLaunchWebBrowserArgs browser;
    browser.uri = "https://doraemonps437-ship-it.github.io/Esparta-store/";
    browser.winWidth = 1920;
    browser.winHeight = 1080;
    sceSystemServiceLaunchWebBrowser(&browser);
    while(1) sceKernelUsleep(10000000);
    return 0;
}
