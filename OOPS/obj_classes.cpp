#include <iostream> 
#include <string>
using namespace std;

class Student {
private:
    string hons;

public:
    int roll;
    float marks;
    string name;
    string course;

    // Methods/member functions
    void changeCourse(string newCourse) {
        course = newCourse;
    }

    // Setters
    void setMarks(float newMarks) {
        marks = newMarks;
    }

    void setHons(string newHons) {
        hons = newHons;
    }

    // Getters
    float getMarks() {
        return marks;
    }

    string getHons() {
        return hons;
    }
};

int main() {
    cout << "Hi" << endl;
    
    // Declare object 
    Student s1;
    s1.roll = 1;
    s1.setMarks(22);//set
    s1.name = "Rahul";
    s1.course = "Btech";
    s1.setHons("Computer Science");//set

    cout << "Roll: " << s1.roll << endl;
    cout << "Marks: " << s1.getMarks() << endl;//get
    cout << "Name: " << s1.name << endl;
    cout << "Course: " << s1.course << endl;
    cout << "Hons: " << s1.getHons() << endl;//get

    return 0;
}
