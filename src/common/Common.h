#ifndef _COMMON_H_
#define _COMMON_H_

#include "rapidjson/document.h"
#include <string>

class Common {
public:
    virtual ~Common();
    static bool loadJsonFile(rapidjson::Document &doc, const char *fileName);
    static std::string loadFileData(std::string fileName);
private:
    Common();
};

#endif
