/*
    Write a program that predicts the score needed on a final exam to achieve a
    desired grade in a course. The program should interact with the user as follows:
    Enter desired grade> B
    Enter minimum average required> 79.5
    Enter current average in course> 74.6
    Enter how much the final counts
    as a percentage of the course grade> 25
    You need a score of 94.20 on the final to get a B.
    In the example shown, the final counts 25 percent of the course grade.
*/

#include <stdio.h>

#define HUNDRED_PERCENT 100.0

int main()
{
    /*  Problem input  */
    char desired_grade;
    double req_min_avg = 0;
    double curr_avg_percent = 0;
    double final_wt_percent = 0;
    double curr_wt_percent = 0;
    double curr_wt = 0;
    double target_wt = 0;
    double target_wt_percent = 0;

    /*  Read input values  */
    printf("\nEnter desired grade> ");
    scanf(" %c", &desired_grade);
    printf("Enter minimum average required> ");
    scanf("%lf", &req_min_avg);
    printf("Enter current average in course> ");
    scanf("%lf", &curr_avg_percent);
    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%lf", &final_wt_percent);

    /*  Find the completed course grade weight in percentage  */
    curr_wt_percent = HUNDRED_PERCENT - final_wt_percent;
    /*  Find the achieved weightage from past exams  */
    curr_wt = (curr_avg_percent / 100) * curr_wt_percent;
    /*  Find the target weightage to be achieved   */
    target_wt = req_min_avg - curr_wt;
    /*  Find percent target weight makes on final weightage*/
    target_wt_percent = (target_wt / final_wt_percent) * 100;

    /*  Display the output  */
    printf("\nYou need a score of %.2f on the final to get a %c.", target_wt_percent, desired_grade);

    return 0;
}