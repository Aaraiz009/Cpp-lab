// 10. Sort Students by Marks (Custom Comparator)
// Each student record contains:
// name marks age
// Store them as a vector of pairs or a custom struct.
// Sort them using the rule:
// 1. Higher marks first
// 2. If marks tie → younger age first
// 3. If age also ties → lexicographically smaller name
// Print the list after sorting.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
    int age;
};

bool compare(Student a, Student b) {
    if (a.marks != b.marks)
        return a.marks > b.marks;
    if (a.age != b.age)
        return a.age < b.age;
    return a.name < b.name;
}

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);
    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].marks >> students[i].age;
    }

    sort(students.begin(), students.end(), compare);

    for (auto s : students) {
        cout << s.name << " " << s.marks << " " << s.age << endl;
    }

    return 0;
}
