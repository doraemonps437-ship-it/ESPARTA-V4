#include <orbis/libkernel.h>
#include <orbis/SystemService.h>

int main() {
    sceSystemServiceLaunchWebBrowser("https://dlpsgame.com", 0);
    for(;;) {
        sceKernelUsleep(1000000);
    }
    return 0;
}
