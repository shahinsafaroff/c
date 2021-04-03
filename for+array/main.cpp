#include <iostream>
#include <math.h>
const int MAX_CLASS_SIZE = 60;
int main() {
    int numberOfStudents;
    int gradesList[MAX_CLASS_SIZE];
    float currentGrade, average, sum;
    int index;
    std::cout << "Please enter the number of students in class" << std::endl;
    std::cin>>numberOfStudents;

    //reading the grades
    for (index = 0; index <numberOfStudents; ++index) {
        std::cout << "Please enter the grades of "<<index+1<<"th student separated by space"<<std::endl;
        std::cin>>currentGrade;
        gradesList[index] = currentGrade;
    }

    //calculating the average
    sum = 0;
    for (index = 0; index <numberOfStudents; ++index){
        sum += gradesList[index];
    }
    average = sum /numberOfStudents;
    std::cout<<"The class average is "<<average<<std::endl;

    //print grades above the average
    std::cout<<"The grades above the average are ";
    for(index = 0; index < numberOfStudents; ++index) {
        if (gradesList[index] >average) {
            std::cout<<gradesList[index]<<" ";
        }
    }
    std::cout<<std::endl;
    return 0;
}
