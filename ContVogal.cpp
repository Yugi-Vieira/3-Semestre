#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100], ch;
    long fileSize;
    int vowels[5] = {0}, i, count;
    float percentages[5];

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    count = 0;
    while ((ch = fgetc(file)) != EOF) {
        count++;
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels[ch - 'a']++;
        }
    }

    fclose(file);

    if (count == 0) {
        printf("The file is empty.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        percentages[i] = (float)vowels[i] / count * 100;
        printf("Percentage of '%c': %.2f%%\n", i + 'a', percentages[i]);
    }

    return 0;
}