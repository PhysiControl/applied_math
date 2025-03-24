#pragma once

#include <string>
#include <vector>

struct Task {
    std::string description;
    bool done = false;
};

class TodoManager {
public:
    void addTask(const std::string& desc);
    void completeTask(std::size_t index);
    void listTasks() const;

private:
    std::vector<Task> tasks;
};
