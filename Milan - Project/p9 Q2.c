#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};

int main()
{
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter details of Student %d:\n", i + 1);

        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);

        printf("Name => ");
        scanf(" %[^\n]", students[i].name); 

        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);

        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);

        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);

        students[i].percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;

        printf("\n");
    }

    printf("\n--- Student Mark Sheet ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: %s\n", i + 1, students[i].name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Chemistry: %d, Mathematics: %d, Physics: %d\n",
               students[i].chem_marks, students[i].maths_marks, students[i].phy_marks);
        printf("Percentage: %.2f%%\n\n", students[i].percentage);
    }

    return 0;
}
