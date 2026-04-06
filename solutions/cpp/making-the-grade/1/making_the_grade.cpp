#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> scores;
    scores.assign(student_scores.begin(), student_scores.end());
    return scores;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int failed = 0;
    for (int i = 0; i < student_scores.size();i++){
        if (student_scores[i] <= 40){
            failed++;
    }
}
    return failed;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // TODO: Implement above_threshold
     std::vector<int> above;
    for (int i = 0; i < student_scores.size();i++){
        if (student_scores[i] >=  threshold){
            above.insert(above.cend(),student_scores[i]);
            }
        }
    return above;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int,4> lower_threshholds;
    int  lowest_score = 41;
    int increment = (highest_score - 40) / 4;
    for (int i = 0; i < 4; i++){
        lower_threshholds[i] = lowest_score;
        lowest_score += increment;
    }
    
    return lower_threshholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking;
    int g = 1;
    for (int i = 0; i <  student_names.size(); i++){
        ranking.insert(ranking.end(),std::to_string(g) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i)));
        g++;
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string name =  "";
    for (int i = 0; i < student_names.size(); i++)
    if (student_scores.at(i) == 100){
       return name = student_names.at(i);
    }
    return name;
}
