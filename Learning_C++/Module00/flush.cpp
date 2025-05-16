#include <iostream>
#include <chrono>
#include <thread>

int main() {
    using namespace std::chrono_literals;

    // 🔴 Sem flush explícito
    // std::cout << "Sem flush (pode demorar a aparecer): ";
    // for (int i = 0; i < 5; ++i) {
    //     std::cout << i << " ";
    //     std::this_thread::sleep_for(500ms);  // Simula tempo de execução
    // }
    // std::cout << std::endl; // flush final

    // 🔵 Com flush a cada iteração
    std::cout << "\nCom flush imediato: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << i << " " << std::flush; // força flush
        std::this_thread::sleep_for(500ms);
    }

    // 🔵 Com endl a cada iteração
    std::cout << "\nCom endl imediato: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << i << " " << std::endl; // força flush
        std::this_thread::sleep_for(500ms);
    }

    std::cout << "\nFim da demonstração!\n";
    return 0;
}
