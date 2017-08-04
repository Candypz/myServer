#include <iostream>
#include <spdlog/spdlog.h>

class CETLog {
public:
    CETLog();
    ~CETLog();
    void createLogFile(const std::string name);
private:
};
