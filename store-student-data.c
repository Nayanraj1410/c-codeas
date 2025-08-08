#include <stdio.h>

// Define the structure to store student information
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Function to display student information
void display_student(struct Student student) {
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    // Declare and initialize a student
    struct Student student1;

    // Input student information
    printf("Enter roll number: ");
    scanf("%d", &student1.roll_no);
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Display the student information
    printf("\nStudent Information:\n");
    display_student(student1);

    return 0;
}
