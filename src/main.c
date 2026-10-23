#include <orbis/Browser2.h>

int main(void) {
    OrbisBrowser2Config config;
    sceBrowser2ConfigInitialize(&config);
    config.initialUrl = "https://esparta-play-v4.vercel.app";
    sceBrowser2Open(&config);
    return 0;
}
