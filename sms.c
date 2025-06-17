#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
    int id;
    char name[50];
    float marks;
};
struct Student students[100];
int count=0;
void addStudent(){
    printf("Enter id,name,marks:");
    scanf("%d %s %f", &students[count].id, students[count].name, &students[count].marks);
    count++;
    printf("Student Added.\n");
}
void displayStudents(){
    for(int i=0;i<count;i++){
        printf("%d %s %.2f\n", students[i].id, students[i].name,students[i].marks);
    }
}
void searchStudent(){
    int id;
    printf("Enter id to search:");
    scanf("%d",&id);
    for(int i=0;i<count;i++){
        if (students[i].id == id){
            printf("Found: %s %.2f\n", students[i].name,students[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}
int main() {
    int choice;
    while (1) {
        printf("\n1. Add Student\n2. Display Students\n3. Search Student\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}