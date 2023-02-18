#include <iostream>
using namespace std;

// Function to compute the grade of a student based on their mean score
char get_grade(double mean) {
    char grade;
    if (mean >= 90)
        grade = 'A';
    else if (mean >= 80)
        grade = 'B';
    else if (mean >= 70)
        grade = 'C';
    else if (mean >= 60)
        grade = 'D';
    else
        grade = 'F';
    return grade;
}

// Function to calculate the mean of three scores
double get_mean(double score1, double score2, double score3) {
    return (score1 + score2 + score3) / 3.0;
}

// Function to input a score from the user
double input() {
    double score;
    cout << "Enter a score: ";
    cin >> score;
    return score;
}

// Function to display the mean score and grade of a student
void show(double mean, char grade) {
    cout << "Mean score: " << mean << endl;
    cout << "Grade: " << grade << endl;
}

// Function to compute the grade of a student based on their three scores
void compute() {
    double score1 = input();
    double score2 = input();
    double score3 = input();
    double mean = get_mean(score1, score2, score3);
    char grade = get_grade(mean);
    show(mean, grade);
}

// Main function to run the program
int main() {
    compute();
    return 0;
}