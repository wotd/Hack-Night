#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void extractUserZip(char *userFile) {
    char command[1024];

    snprintf(command, 1023, "unzip %s", userFile);

    system(command);
}

int main() {
    char userstring[1018];
    
    read(0, userstring, sizeof(userstring));

    extractUserZip(userstring);
    
    return 0;
}

