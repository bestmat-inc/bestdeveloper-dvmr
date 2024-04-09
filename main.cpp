// ©2024 - BestDeveloper - BestMat, Inc. - All rights reserved.
#include <iostream>
#include <string>
#include <cstdlib>

class DVMR {
    private: 
        std::string vmImagePath;
        int allocatedRAM;

    public:
        DVMR(const std::string& imagePath, int ram) : vmImagePath(imagePath), allocatedRAM(ram) {}

        void run() {
            std::string command = "qemu-system-x86_64 -hda " + vmImagePath + " -m " + std::to_string(allocatedRAM);
            system(command.c_str());
        }
};

int main() {
    std::cout << "Nagapillaiyar" << std::endl;

    std::string vmImagePath;
    int allocatedRAM;

    std::cout << "DVMR: Enter the path of the VM Image: ";
    std::cin >> vmImagePath;

    std::cout << "Enter the amount of RAM to allocate (in MB): ";
    std::cin >> allocatedRAM;

    DVMR vm(vmImagePath, allocatedRAM);
    vm.run();

    return 0;
}