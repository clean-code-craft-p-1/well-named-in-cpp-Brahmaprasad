#include<string>
#include "ColorEnums.h"

class ColorPair {
private:
    MajorColor majorColor;
    MinorColor minorColor;
public:
    ColorPair(MajorColor major, MinorColor minor);
    MajorColor getMajor();
    MinorColor getMinor();
    std::string ToString();
};