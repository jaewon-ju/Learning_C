#include <stdio.h>

int main(void){
    int kor = 3, eng = 5, math = 4;
    int credits;
    int res;
    double kscore = 3.8, escore = 4.4, mscore = 3.9;
    double grade;

    credits = kor + eng + math;
    grade = (kscore + escore + mscore) / 3;
    printf("%d and %.3lf\n",credits, grade);
    printf("%d",(credits >= 10) && (grade > 4.0) ? 1 : 0);

    return 0;
}