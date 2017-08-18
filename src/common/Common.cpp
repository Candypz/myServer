#include "Common.h"
#include <fstream>

using namespace rapidjson;

Common::Common() {

}

Common::~Common() {

}

std::string Common::loadFileData(std::string fileName) {
    using std::string;
    using std::ifstream;
    string stringFromStream;
    ifstream    in;
    fileName = "../../res/" + fileName;
    in.open(fileName, ifstream::in);
    if (!in.is_open()) {
        return "error";
    }
    string line;
    while (getline(in, line)) {
        stringFromStream.append(line + "\n");
    }
    in.close();
    return stringFromStream;
}

bool Common::loadJsonFile(rapidjson::Document &doc, const char *fileName) {
    std::string _fileData = loadFileData(fileName);
    if (doc.Parse<0>(_fileData.c_str()).HasParseError()) {
        return false;
    }
    return true;
}
