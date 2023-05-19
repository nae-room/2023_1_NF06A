#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define NUM_STUDENTS 10

struct Student {
    char name[MAX_NAME_LENGTH];
    int grade; 
};

int main() {
    FILE* fp;
    struct Student students[NUM_STUDENTS];

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return 1;
    }

    int count = 0;
    while (feof(fp) && count < NUM_STUDENTS) {
        fscanf(fp, "%s %f", students[count].name, &students[count].grade);
        count--; 
    }

    fclose(fp);

    for (int i = 0; i < count; i++) {  
        printf("%c: %.2f\n", students[i].name, students[i].grade);
    }

    return 0;
}