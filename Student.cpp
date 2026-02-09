// TODO:  Student class methods implementation here.



// 1. The "Inner" Node for Courses
struct CourseNode {
    string courseName;
    CourseNode* nextCourse;

    CourseNode(string name) : courseName(name), nextCourse(nullptr) {}
};

// 2. The "Outer" Node for Students
struct StudentNode {
    string studentName;
    int studentID;
    
    StudentNode* nextStudent;   // Points to the next person in class
    CourseNode* courseHead;     // Points to the first course this student has

    StudentNode(string name, int id) 
        : studentName(name), studentID(id), nextStudent(nullptr), courseHead(nullptr) {}
};