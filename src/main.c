#include <orbis/libkernel.h>
#include <orbis/SystemService.h>

int main(void){
    sceSystemServiceLaunchWebBrowser("https://doraemonps437-ship-it.github.io/Esparta-store/", 0);
    while(1){
        sceKernelUsleep(10000000);
    }
    return 0;
}
