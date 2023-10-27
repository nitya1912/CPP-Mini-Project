#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Task {
    std::string description;
    bool completed;
};

class TodoList {
public:
    void addTask(const std::string & description) {
        Task task{description, false};
        tasks.push_back(task);
        cout << "Task added: " << description <<endl;
    }

    void markComplete(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            std::cout << "Task marked as complete: " << tasks[index].description << std::endl;
        } else {
            cout << "Invalid task index!" <<endl;
        }
    }

    void deleteTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            cout << "Task deleted: " << tasks[index].description <<endl;
            tasks.erase(tasks.begin() + index);
        } else {
            cout << "Invalid task index!" << endl;
        }
    }

    void listTasks() {
        cout << "To-Do List:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            const Task& task = tasks[i];
            cout << "[" << (task.completed ? "X" : " ") << "] " << i + 1 << ". " << task.description << endl;
        }
    }

private:
    std::vector<Task> tasks;
};

int main() {
    TodoList todoList;
    int choice;

    while (true) {
    	cout << "---------------------------TODO LIST-------------------------" << std::endl;
        cout << "\nMenu:\n";
        cout << "1. Add a task\n";
        cout << "2. Mark a task as complete\n";
        cout << "3. Delete a task\n";
        cout << "4. List tasks\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string description;
                cout << "Enter task description: ";
                cin.ignore();
                getline(std::cin, description);
                todoList.addTask(description);
                break;
            }
            case 2: {
                int index;
                cout << "Enter the task number to mark as complete: ";
                cin >> index;
                todoList.markComplete(index - 1);
                break;
            }
            case 3: {
                int index;
                cout << "Enter the task number to delete: ";
                cin >> index;
                todoList.deleteTask(index - 1);
                break;
            }
            case 4:
                todoList.listTasks();
                break;
            case 5:   
				cout << "---------------------THANKS FOR USING TODO LIST--------------------" << endl;  
				cout << "---------------------------HAVE A NICE DAY-------------------------" << endl;      	
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}
