#include <stdio.h>
#include <stdlib.h>

struct Student
{

    char name[20];
    int rollNo;
    int subject1;
    int subject2;
    int subject3;
    float percentage;
}s;
void insertRow()
{

    fflush(stdin);
    printf("Enter name: ");
    gets(s.name);
    printf("\nEnter roll number: ");
    scanf("%d", &s.rollNo);
    printf("Enter marks of Subject 1: ");
    scanf("%d", &s.subject1);
    printf("Enter marks of Subject 2: ");
    scanf("%d", &s.subject2);
    printf("Enter marks of Subject 3: ");
    scanf("%d", &s.subject3);
    s.percentage = (s.subject1 + s.subject2 + s.subject3) / 3.0;

    FILE *fp = fopen("text.txt", "a");
    if (fp == NULL)
    {
        printf("Error in opening file");
    }
    else
    {
        fwrite(&s, sizeof(struct Student), 1, fp);
        printf("\nInserted successfully!!!");
        fclose(fp);
    }
}
void deleteRow()
{
    int rollNo;
    printf("Enter roll number which you want to delete: ");
    scanf("%d", &rollNo);
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file");
    }
    else
    {
        FILE *fp1 = fopen("text1.txt", "w");
        if (fp1 == NULL)
        {
            printf("Error in opening file");
        }
        else
        {
            while (fread(&s, sizeof(struct Student), 1, fp))
            {
                if (rollNo == s.rollNo)
                {
                    {
                        printf("\nDeleted successfully!!!");
                        continue;
                    }
                }
                else
                {
                    fwrite(&s, sizeof(struct Student), 1, fp1);
                }
            }
            fclose(fp);
            fclose(fp1);
            remove("text.txt");
            rename("text1.txt", "text.txt");
        }
    }
}
void updateRow()
{
    int rollNo;
    printf("Enter roll number which you want to update: ");
    scanf("%d", &rollNo);
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file");
    }
    else
    {
        FILE *fp1 = fopen("text1.txt", "w");
        if (fp1 == NULL)
        {
            printf("Error in opening file");
        }
        else
        {
            while (fread(&s, sizeof(struct Student), 1, fp))
            {
                if (rollNo == s.rollNo)
                {
                    fflush(stdin);
                    printf("Enter name: ");
                    gets(s.name);
                    printf("\nEnter roll number: ");
                    scanf("%d", &s.rollNo);
                    printf("Enter marks of Subject 1: ");
                    scanf("%d", &s.subject1);
                    printf("Enter marks of Subject 2: ");
                    scanf("%d", &s.subject2);
                    printf("Enter marks of Subject 3: ");
                    scanf("%d", &s.subject3);
                    s.percentage = (s.subject1 + s.subject2 + s.subject3) / 3.0;
                    fwrite(&s, sizeof(struct Student), 1, fp1);
                    printf("\nUpdated successfully!!!");
                }
                else
                {
                    fwrite(&s, sizeof(struct Student), 1, fp1);
                }
            }
            fclose(fp);
            fclose(fp1);
            remove("text.txt");
            rename("text1.txt", "text.txt");
        }
    }
}
void displayAll()
{

    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    FILE *fp = fopen("text.txt", "r");

    if (fp == NULL)
    {
        printf("Error in opening file");
    }
    else
    {
        fflush(stdout);
        printf("\nDisplay: \n");
        printf("| Name | Roll No. | Subject1 | Subject2 | Subject3 | Percentage |\n\n");
        while (fread(student, sizeof(struct Student), 1, fp))
        {
            printf("%s\t %d\t %d\t %d\t %d\t %.2f\n", student->name, student->rollNo, student->subject1,
                   student->subject2, student->subject3, student->percentage);
        }
        fclose(fp);
    }
}

int main()
{

    printf("20BCS059 Ijlal Ahmad\n");

    int choice = 0;

    while (choice != 5)
    {

        printf("\n");
        printf("===========MENU===========\n");
        printf("1- Insert a row\n");
        printf("2- Delete a row\n");
        printf("3- Update a row\n");
        printf("4- Display all rows\n");
        printf("5- Exit\n");
        printf("============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertRow();
            displayAll();
            break;
        case 2:
            deleteRow();
            displayAll();
            break;
        case 3:
            updateRow();
            displayAll();
            break;
        case 4:
            displayAll();
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    }
}