// #include <stdio.h>
// #include <string.h>

// #define NUM_STUDENTS 2
// #define NUM_SUBJECTS 5

// int main() {
// 	int i,j;
//     int marks[NUM_STUDENTS][NUM_SUBJECTS];
//     int totalMarks[NUM_STUDENTS] = {0};
//     int highestMarks[NUM_SUBJECTS] = {0};
//     int highestScorer[NUM_SUBJECTS];
//     int overallHighestMarks = 0;
//     int overallHighestScorer;
//     char studentNames[NUM_STUDENTS][50];

//     // Input data
//     printf("Enter student names and marks:\n");
//     for(i = 0; i < NUM_STUDENTS; i++){
//         printf("Enter name for student %d: ", i + 1);
//         fgets(studentNames[i], sizeof(studentNames[i]), stdin);
//         studentNames[i][strcspn(studentNames[i], "\n")] = 0;

//         printf("Enter marks for student %d (5 subjects):\n", i + 1);
//         for( j = 0; j < NUM_SUBJECTS; j++){
//             printf("Subject %d: ", j + 1);
//             scanf("%d", &marks[i][j]);
//             totalMarks[i] += marks[i][j];
//             getchar();
//         }
//         printf("\n");
//     }

//     // Process data
//     for(j = 0; j < NUM_SUBJECTS; j++){
//         highestMarks[j] = marks[0][j];
//         highestScorer[j] = 0;

//         for( i = 1; i < NUM_STUDENTS; i++){
//             if(marks[i][j] > highestMarks[j]){
//                 highestMarks[j] = marks[i][j];
//                 highestScorer[j] = i;
//             }
//         }
//     }

//     overallHighestMarks = totalMarks[0];
//     overallHighestScorer = 0;
//     for(i = 1; i < NUM_STUDENTS; i++){
//         if(totalMarks[i] > overallHighestMarks){
//             overallHighestMarks = totalMarks[i];
//             overallHighestScorer = i;
//         }
//     }

//     // Output results
//     printf("\nResults:\n");

//     // (a) Total marks obtained by each student
//     printf("\nTotal Marks Obtained by Each Student:\n");
//     for(i = 0; i < NUM_STUDENTS; i++){
//         printf("%s: %d\n", studentNames[i], totalMarks[i]);
//     }

//     // (b) Highest marks in each subject and the student who secured it
//     printf("\nHighest Marks in Each Subject:\n");
//     for(j = 0; j < NUM_SUBJECTS; j++){
//         printf("Subject %d: %d (Secured by %s)\n", j + 1, highestMarks[j], studentNames[highestScorer[j]]);
//     }

//     // (c) The student who obtained the highest total marks
//     printf("\nStudent with Highest Total Marks:\n");
//     printf("%s (Total Marks: %d)\n", studentNames[overallHighestScorer], overallHighestMarks);

//     return 0;
// }
#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 2
#define NUM_SUBJECTS 5

int main() {
    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    int totalMarks[NUM_STUDENTS] = {0};
    int highestMarks[NUM_SUBJECTS] = {0};
    int highestScorer[NUM_SUBJECTS];
    int overallHighestMarks = 0;
    int overallHighestScorer;
    char studentNames[NUM_STUDENTS][50];

    // Input data
    printf("Enter student names and marks:\n");
    for(int i = 0; i < NUM_STUDENTS; i++){
        printf("Enter name for student %d: ", i + 1);
        fgets(studentNames[i], sizeof(studentNames[i]), stdin);
        studentNames[i][strcspn(studentNames[i], "\n")] = 0;

        printf("Enter marks for student %d (5 subjects):\n", i + 1);
        for(int j = 0; j < NUM_SUBJECTS; j++){
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            totalMarks[i] += marks[i][j];
            getchar();
        }
        printf("\n");
    }

    // Process data
    for(int j = 0; j < NUM_SUBJECTS; j++){
        highestMarks[j] = marks[0][j];
        highestScorer[j] = 0;

        for(int i = 1; i < NUM_STUDENTS; i++){
            if(marks[i][j] > highestMarks[j]){
                highestMarks[j] = marks[i][j];
                highestScorer[j] = i;
            }
        }
    }

    overallHighestMarks = totalMarks[0];
    overallHighestScorer = 0;
    for(int i = 1; i < NUM_STUDENTS; i++){
        if(totalMarks[i] > overallHighestMarks){
            overallHighestMarks = totalMarks[i];
            overallHighestScorer = i;
        }
    }

    // Output results
    printf("\nResults:\n");

    // (a) Total marks obtained by each student
    printf("\nTotal Marks Obtained by Each Student:\n");
    for(int i = 0; i < NUM_STUDENTS; i++){
        printf("%s: %d\n", studentNames[i], totalMarks[i]);
    }

    // (b) Highest marks in each subject and the student who secured it
    printf("\nHighest Marks in Each Subject:\n");
    for(int j = 0; j < NUM_SUBJECTS; j++){
        printf("Subject %d: %d (Secured by %s)\n", j + 1, highestMarks[j], studentNames[highestScorer[j]]);
    }

    // (c) The student who obtained the highest total marks
    printf("\nStudent with Highest Total Marks:\n");
    printf("%s (Total Marks: %d)\n", studentNames[overallHighestScorer], overallHighestMarks);

    return 0;
}