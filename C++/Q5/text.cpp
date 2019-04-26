#include "text.h"

CText::CText()
{
}

CText::~CText()
{
}

CText::CText(std::string text_) : text{text_}
{
}

std::string CText::getText()
{
    return text;
}