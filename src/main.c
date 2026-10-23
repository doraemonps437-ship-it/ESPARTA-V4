#include <orbis/libkernel.h>

int main(void) {
    // Mensaje para saber que es ESPARTA V4
    sceKernelDebugOutText("ESPARTA V4 - dlpsgame.com\n");

    // Aquí después lanzamos el navegador a dlpsgame.com
    // Por ahora solo lo mantenemos vivo para que compile

    for(;;) {
        sceKernelUsleep(1000000);
    }
    return 0;
}
