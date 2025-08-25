#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
public:
    virtual void Display(const char* path) {
        ifstream file(path);
        if (!file.is_open()) {
            cout << "Не вдалося відкрити файл!\n";
            return;
        }

        cout << "Вміст файлу (текстовий режим):\n";
        char ch;
        while (file.get(ch)) {
            cout << ch;
        }
        cout << "\n";
        file.close();
    }

    virtual ~FileHandler() {}
};

class AsciiFileHandler : public FileHandler {
public:
    void Display(const char* path) override {
        ifstream file(path, ios::binary);
        if (!file.is_open()) {
            cout << "Не вдалося відкрити файл!\n";
            return;
        }

        cout << "Вміст файлу (ASCII-коди):\n";
        unsigned char ch;
        while (file.read((char*)&ch, 1)) {
            cout << (int)ch << " ";
        }
        cout << "\n";
        file.close();
    }
};

class BinaryFileHandler : public FileHandler {
public:
    void Display(const char* path) override {
        ifstream file(path, ios::binary);
        if (!file.is_open()) {
            cout << "Не вдалося відкрити файл!\n";
            return;
        }

        cout << "Вміст файлу (двійковий вигляд):\n";
        unsigned char ch;
        while (file.read((char*)&ch, 1)) {
            for (int i = 7; i >= 0; i--) {
                cout << ((ch >> i) & 1);
            }
            cout << " ";
        }
        cout << "\n";
        file.close();
    }
};

int main() {
    const char* filename = "test.txt";

    FileHandler* handler;

    handler = new FileHandler();
    handler->Display(filename);
    delete handler;

    handler = new AsciiFileHandler();
    handler->Display(filename);
    delete handler;

    handler = new BinaryFileHandler();
    handler->Display(filename);
    delete handler;

    return 0;
}
