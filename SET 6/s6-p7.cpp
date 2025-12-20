#include <iostream>
using namespace std;

class Teacher {
protected:
    string subject;
public:
    void setSubject(string sub) {
        subject = sub;
    }
};

class Researcher {
protected:
    string area_of_research;
public:

    void setArea(string area) {
        area_of_research = area;
    }
};

class TeachingAssistant : public Teacher, public Researcher {
private:
    string name;

public:
    TeachingAssistant(string n, string sub, string area) {
        name = n;
        setSubject(sub);
        setArea(area);  
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Subject Teaching: " << subject << endl;
        cout << "Research Area: " << area_of_research << endl;
    }
};

int main() {
    TeachingAssistant ta("Anshuman", "CS", "AI");
    ta.display();
}
