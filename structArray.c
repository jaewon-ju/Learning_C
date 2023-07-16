#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int num;
    char* name;
    int kor, eng, math;
    double average;
    char grade;
} Student;

void sort(struct student* ps);

void sort(struct student* ps){
    Student temp;
    Student max;

    for(int j=0;j<5;j++){
        max = ps[j];
        for(int i=j;i<5;i++){
            if(max.average < ps[i].average){
                temp = max;
                max = ps[i];
                ps[i] = temp;
            }
        }
        ps[j] = max;
    }
}

int main(void){
    Student sarry[5];

    for(int i=0;i<5;i++){
        double average;

        printf("student number: ");
        scanf("%d",&sarry[i].num);

        sarry[i].name = (char *)malloc(20);

        printf("name of student: ");
        scanf("%s",sarry[i].name);

        printf("kor, eng, math test score: ");
        scanf("%d %d %d",&sarry[i].kor,&sarry[i].eng,&sarry[i].math);

        average = (sarry[i].kor + sarry[i].eng + sarry[i].math) / 3.0;
        sarry[i].average = average;

        if(average >= 90)
            sarry[i].grade = 'A';
        else if(average >= 80)
            sarry[i].grade = 'B';
        else if(average >= 70)
            sarry[i].grade = 'C';
        else 
            sarry[i].grade = 'F';
    } 

    printf("#Data before sorting...\n");
    for(int i=0;i<5;i++){
        printf("%5d %s %5d %5d %5d %.1f %3c\n",sarry[i].num,sarry[i].name,sarry[i].kor,sarry[i].eng,sarry[i].math,sarry[i].average,sarry[i].grade);
    }
    sort(sarry);
    printf("#Data after sorting...\n");
    for(int i=0;i<5;i++){
        printf("%5d %s %5d %5d %5d %.1f %3c\n",sarry[i].num,sarry[i].name,sarry[i].kor,sarry[i].eng,sarry[i].math,sarry[i].average,sarry[i].grade);
    }
    return 0;
}