#include "MathOperators.h"

float snek_score(int num_files, int num_contributors, int num_commits,float avg_bug_criticality) {
  // ?
  
  float size_factor = (float)num_files * num_commits;
  float complexity_factor = size_factor + num_contributors;
  float final_score = complexity_factor * avg_bug_criticality;
  return final_score;
}