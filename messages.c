#include <stdio.h>

// Oscar's message function.
// Message format: NPM | Full Name | Message
void oscar() {
    puts("0006347853 | Oscar Oscar | Just you wait");
}

// Your message function (Cal's version).
void calista() {
    puts("NPMKAMU | Calista Aqila Ramadhani | This is my message");
    // isi message bebas, asal 1 baris string
}

int main() {
    oscar();

    // Call your function after this.
    calista();

    return 0;
}
