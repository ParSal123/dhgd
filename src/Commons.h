//
// Created by Kiarash on 12/04/2019.
//

#ifndef COMPILER_PROJECT_COMMONS_H
#define COMPILER_PROJECT_COMMONS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
enum TokenType
{
    Num, Id, Keyword, Symbol, None, Error, Eof, Whitespace, Comment
};

#endif //COMPILER_PROJECT_COMMONS_H