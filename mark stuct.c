#include<stdio.h>
 struct mark{
 	
 	int roll_no;
 	int name[66];
 	int chem_marks;
 	int phy_marks;
 	int maths_marks;
	};
 
 int main(){
 	
 	struct mark student[5];
    int i;
    
    for (i = 0; i < 5; i++) {
    	printf("Enter details for student %d:\n", i+1);
        printf("Roll No.: ");
        scanf("%d", &student[i].roll_no);
        printf("Name: ");
        scanf("%s", student[i].name);
        printf("Chemistry marks: ");
        scanf("%d", &student[i].chem_marks);
        printf("Mathematics marks: ");
        scanf("%d", &student[i].maths_marks);
        printf("Physics marks: ");
        scanf("%d", &student[i].phy_marks);
        printf("\n");
    }
	
 for (i = 0; i < 5; i++) {
        int total_marks = student[i].chem_marks + student[i].maths_marks + student[i].phy_marks;
        float percentage = (float)total_marks / 300 * 100;
        printf("Details for student %d:\n", i+1);
        printf("Roll No.: %d\n", student[i].roll_no);
        printf("Name: %s\n", student[i].name);
        printf("Percentage: %.2f%%\n\n", percentage);
    }

    return 0;
}
 
