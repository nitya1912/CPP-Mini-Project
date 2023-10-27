# CPP-Mini-Project

This C++ code creates a simple command-line-based "To-Do List" application. Here's a summary of what the code does:

1. It defines a `Task` structure, representing tasks with a description and a completion status (true or false).

2. The `TodoList` class provides methods for managing the to-do list, including:
   - `addTask`: Adds a new task with a description.
   - `markComplete`: Marks a task as complete by changing its status to true.
   - `deleteTask`: Deletes a task from the list.
   - `listTasks`: Lists all tasks in the to-do list, indicating their completion status.

3. In the `main` function, the program presents a menu to the user with options to:
   - Add a task.
   - Mark a task as complete.
   - Delete a task.
   - List all tasks.
   - Quit the application.

4. The program utilizes a `while` loop to keep running until the user chooses to quit (option 5). It handles user input, interacts with the `TodoList` class, and provides feedback for each operation.

Overall, this code demonstrates a basic to-do list management system where users can add, mark as complete, delete, and list tasks. The program continues running until the user chooses to exit.
