#include <iostream>
#include <string>

class GradeBook {
private:
    std::string courseName;
    std::string instructorName;

public:
    GradeBook() {}

    void setData(const std::string& course, const std::string& instructor) {
        courseName = course;
        instructorName = instructor;
    }

    void displayMessage() {
        std::cout << "Welcome to the grade book for " << courseName << "!" << std::endl;
        std::cout << "This course is presented by: " << instructorName << std::endl;
    }
};

int main() {
    GradeBook gradeBook;

    std::string course, instructor;

    std::getline(std::cin, course);      // Read the course name with spaces
    std::getline(std::cin, instructor);  // Read the instructor name with spaces

    gradeBook.setData(course, instructor);

    gradeBook.displayMessage();

    return 0;
}

