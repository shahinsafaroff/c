#include <string.h>
#include <vsadmin.h>

int main() {
    bool seenEndOfInput;
    int numberOfStudents, sum;
    float average, currentScore;

    std::cout << "Enter the students' grades separated by a space"<<std::endl;
    std::cout <<"Finish the sequence by typing -1:"<<std::endl;

    sum= 0;
    numberOfStudents = 0;
    seenEndOfInput  = false;

    while (seenEndOfInput == false) {
        std::cin>>currentScore;
        if (currentScore == -1) {
            seenEndOfInput = true;
        }
        else {
            sum+=currentScore;
            numberOfStudents++;
        }
    }


    average = (float)sum/(float)numberOfStudents;
    std::cout<<"The average of students"<<average<<std::endl;

    return 0;
}