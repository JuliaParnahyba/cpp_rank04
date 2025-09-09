/**
 * VARIAÇÃO COM PARÂMETROS
 *
 * Crie uma classe Logger com os métodos: debug(), info(), warning() e error()

 * Implemente um método log(std::string level) que chama o método correto usando ponteiros para funções-membro
 
 */

#include <iostream>
#include <string>

class Logger {
    private:
        void    debug(void) { std::cout << "DEBUG" << std::endl; };
        void    info(void) { std::cout << "INFO" << std::endl; };
        void    warning(void) { std::cout << "WARNING" << std::endl; };
        void    error(void) { std::cout << "ERROR" << std::endl; };

    public:
        void    log(std::string level);
};

void    Logger::log(std::string level) {
    const std::string types[4] = {"debug", "info", "warning", "error" };
    
    void (Logger::*type[4])(void) = {
        &Logger::debug,
        &Logger::info,
        &Logger::warning,
        &Logger::error
    };

    for (int i = 0; i < 4; i++) {
        if (level == types[i]) {
            (this->*type[i])();
            return ;
        }
    }
    std::cout << "This level not exist" << std::endl;
}

int main() {
    Logger L;

    L.log("info");
    L.log("inform");
    L.log("error");

    Logger *loging = new Logger;

    loging->log("debug");
    loging->log("debbug");
    loging->log("warning");

    delete loging;

    return 0;
}

