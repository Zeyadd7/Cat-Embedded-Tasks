#include<stdio.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 4


const char *subjects[NUM_SUBJECTS] = {
    "Programming", "Data Structures", "Discrete Math", "Algorithms"
};

typedef struct {
    int id;
    int grades[NUM_SUBJECTS];
} Student;

void assignHardcodedGrades(Student students[]) {
    // Manually assigned grades for demo purposes
    int predefinedGrades[NUM_STUDENTS][NUM_SUBJECTS] = {
        {85, 78, 92, 88},
        {76, 81, 69, 74},
        {90, 93, 89, 95},
        {65, 70, 60, 68},
        {88, 87, 84, 90},
        {72, 75, 70, 73},
        {95, 96, 94, 97},
        {60, 63, 59, 65},
        {82, 80, 85, 83},
        {77, 79, 78, 80}
    };

    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].id = i + 1;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            students[i].grades[j] = predefinedGrades[i][j];
        }
    }
}

void showStudentGrades(Student students[], int id) {
    if (id < 1 || id > NUM_STUDENTS) {
        printf("Invalid Student ID!\n");
        return;
    }

    Student s = students[id - 1];
    printf("Grades for Student ID %d:\n", s.id);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("%s: %d\n", subjects[i], s.grades[i]);
    }
}

void editGrades(Student students[], int id) {
    if (id < 1 || id > NUM_STUDENTS) {
        printf("Invalid Student ID!\n");
        return;
    }

    printf("Editing grades for Student ID %d:\n", id);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Enter new grade for %s: ", subjects[i]);
        scanf("%d", &students[id - 1].grades[i]);
    }
    printf("Grades updated successfully.\n");
}

int main() {
    Student students[NUM_STUDENTS];
    int choice, id;

    assignHardcodedGrades(students);

    while (1) {
        printf("\n    Student Management System    \n");
        printf("1. View Student Grades\n");
        printf("2. Edit Student Grades (Admin)\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Student ID (1-10): ");
                scanf("%d", &id);
                showStudentGrades(students, id);
                break;
            case 2:
                printf("Enter Student ID (1-10): ");
                scanf("%d", &id);
                editGrades(students, id);
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

    
    
    
    
    
    
    