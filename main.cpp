#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Missing file path" << std::endl;
        return 1;
    }
    try {
        std::string filePath = argv[1];
        char buffer[256];
        std::string wslCommand = "C:\\Windows\\System32\\wsl.exe bash -c $(wslpath '" + filePath + "')";
        FILE* wslProcess = _popen(wslCommand.c_str(), "r");
        if (!wslProcess) {
            std::cerr << "Error running WSL." << std::endl;
            return 1;
        }
        while (fgets(buffer, sizeof(buffer), wslProcess)) {
            std::cout << buffer << std::endl;
        }
        _pclose(wslProcess);
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    }
}