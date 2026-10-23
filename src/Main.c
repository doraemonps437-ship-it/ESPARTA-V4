#include <string.h>
#include <orbis/libkernel.h>
#include <orbis/Sysmodule.h>
#include <orbis/SystemService.h>
#include <orbis/Browser.h>

int main() {
    sceSysmoduleLoadModuleInternal(SCE_SYSMODULE_INTERNAL_SYSTEM_SERVICE);
    sceSysmoduleLoadModuleInternal(SCE_SYSMODULE_INTERNAL_BROWSER);
    SceSystemServiceBrowserParam param;
    sceSystemServiceBrowserParamInitialize(&param);
    param.size = sizeof(param);
    strcpy(param.initialUrl, "https://shaddyshell.com/direct");
    sceSystemServiceBrowserOpen(&param);
    SceSystemServiceStatus stat;
    do {
        sceKernelUsleep(100000);
        sceSystemServiceBrowserStatusGet(&stat);
    } while(stat.status != SCE_SYSTEM_SERVICE_BROWSER_STATUS_NONE);
    return 0;
}
