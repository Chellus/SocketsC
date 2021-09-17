#include <unistd.h>
#include <stdio.h>

int main(void) {
    char hostname[30];
    int res;

    res = gethostname(hostname, 30);

    printf("%s", hostname);

    return 0;

}