#include <stdlib.h>

int main() {
    system("powershell -Command \"irm https://massgrave.dev/get | iex; exit\"");
    return 0;
}
