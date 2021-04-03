#include <iostream>

int main() {
    int numberOfStudents, count, sum;
    float average, currentScore;

    std::cout << "Please enter the number of students to calculate average score of class members" << std::endl;
    std::cin>>numberOfStudents;
    std::cout << "Enter the students' grades separated by a space" << std::endl;


    sum= 0;
    for(count=1; count<=numberOfStudents; ++count) {
        std::cin>>currentScore;
        sum+=currentScore;
    }

    average = (float)sum/(float)numberOfStudents;

    std::cout<<"The average of students"<<average<<std::endl;
    return 0;
}