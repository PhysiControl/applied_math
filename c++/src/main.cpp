#include "todo.hpp"
#include <iostream>
#include <string>

int main() {
    TodoManager manager;

    manager.addTask("Learn C++23");
    manager.addTask("Build a modern app");
    manager.completeTask(0);

    std::cout << "Your To-Do List:\n";
    manager.listTasks();
}
