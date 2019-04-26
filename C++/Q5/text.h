#ifndef TEXT_H
#define TEXT_H
#include <string>

class CText
{
private:
    std::string text;    
public:
    CText();
    ~CText();
    CText(std::string text_);

    std::string getText();
};

#endif //TEXT_H
