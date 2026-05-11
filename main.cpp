#include <iostream>
#include <string>

// 🏗️ تعريف الصنف (Class)
class Robot {
public:
    std::string name;

    // 🛠️ تعريف الدالة (Function)
    void sayHello() {
        std::cout << "Hello! My name is " << name << " and I am ready to help!" << std::endl;
    }
};

int main() {
    // إنشاء كائن من الصنف
    Robot myRobot;
    myRobot.name = "Gemini-Assistant";

    // استدعاء الدالة
    myRobot.sayHello();

    return 0;
}
