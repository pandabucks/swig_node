#include <string>

struct complex
{
    complex(double r=0,double i=0);
    double re;
    double im;
    double abs()const;
    std::string to_str()const;
};
