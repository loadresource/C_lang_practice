#include <stdio.h>
#include "MathOperators.h"



int main() {
    int num_files = 10;
    int num_contributors = 5;
    int num_commits = 20;
    float avg_bug_criticality = 0.8;
    
    float score = snek_score(num_files, num_contributors, num_commits, avg_bug_criticality);
    printf("Snek Score: %f\n", score);
    
    return 0;
}