#include "todo.hpp"
#include <iostream>

void TodoManager::addTask(const std::string& desc) {
    tasks.emplace_back(Task{desc});
}

void TodoManager::completeTask(std::size_t index) {
    if (index < tasks.size()) {
        tasks[index].done = true;
    }
}

void TodoManager::listTasks() const {
    for (std::size_t i = 0; i < tasks.size(); ++i) {
        const auto& task = tasks[i];
        std::cout << i << ": " << task.description 
                  << (task.done ? " [✔]" : " [ ]") << '\n';
    }
}
