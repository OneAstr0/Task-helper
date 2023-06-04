#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> tasks;

    std::cout << "Добро пожаловать в программу управления задачами!" << std::endl;

    while (true) {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Добавить задачу" << std::endl;
        std::cout << "2. Удалить задачу" << std::endl;
        std::cout << "3. Отобразить задачи" << std::endl;
        std::cout << "4. Выйти из программы" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string task;
                std::cout << "Введите задачу: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                tasks.push_back(task);
                std::cout << "Задача успешно добавлена!" << std::endl;
                break;
            }
            case 2: {
                if (tasks.empty()) {
                    std::cout << "Список задач пуст!" << std::endl;
                } else {
                    std::cout << "Список задач:" << std::endl;
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        std::cout << i + 1 << ". " << tasks[i] << std::endl;
                    }

                    int index;
                    std::cout << "Введите номер задачи для удаления: ";
                    std::cin >> index;

                    if (index >= 1 && index <= tasks.size()) {
                        tasks.erase(tasks.begin() + index - 1);
                        std::cout << "Задача успешно удалена!" << std::endl;
                    } else {
                        std::cout << "Неверный номер задачи!" << std::endl;
                    }
                }
                break;
            }
            case 3: {
                if (tasks.empty()) {
                    std::cout << "Список задач пуст!" << std::endl;
                } else {
                    std::cout << "Список задач:" << std::endl;
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        std::cout << i + 1 << ". " << tasks[i] << std::endl;
                    }
                }
                break;
            }
            case 4: {
                std::cout << "Программа завершена." << std::endl;
                return 0;
            }
            default: {
                std::cout << "Неверный выбор!" << std::endl;
                break;
            }
        }
    }
}
