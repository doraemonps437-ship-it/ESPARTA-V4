#include <orbis/libkernel.h>
#include <orbis/VideoOut.h>
#include <orbis/Sysmodule.h>
#include <string.h>

int main() {
    // Inicializa video
    OrbisVideoOutConfig config;
    memset(&config, 0, sizeof(config));
    config.width = 1920;
    config.height = 1080;
    config.refreshRate = 60;
    
    int videoHandle = sceVideoOutOpen(0, 0, 0, &config);
    
    // Buffer azul oscuro (no negro)
    void *videoBuffer;
    sceKernelAllocateDirectMemory(0, sceKernelGetDirectMemorySize(), 0x100000, 0, &videoBuffer);
    
    // Pinta la pantalla azul ESPARTA
    memset(videoBuffer, 0x20, 1920*1080*4); // azul oscuro

    sceVideoOutSetFlipRate(videoHandle, 0);
    
    OrbisVideoOutBufferAttribute attr;
    memset(&attr, 0, sizeof(attr));
    attr.format = 0;
    attr.width = 1920;
    attr.height = 1080;
    attr.pitchInPixel = 1920;

    int bufferIndex = 0;
    sceVideoOutRegisterBuffers(videoHandle, 0, 1, &videoBuffer, &attr);

    while(1) {
        sceVideoOutSubmitFlip(videoHandle, bufferIndex, 0, 0);
        sceKernelUsleep(16000);
    }
    return 0;
}
