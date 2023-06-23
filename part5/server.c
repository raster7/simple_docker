#include <fcgi_stdio.h>

int main() {
    while(FCGI_Accept() >= 0) {
        printf("Content-type: text/html\r\n\r\n""Hello world!\n");
    }
    return 0;
}