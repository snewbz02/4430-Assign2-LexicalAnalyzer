#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <unordered_set>

using namespace std;

// Define keywords and operators
unordered_set<string> keywords = 
{
    
    "if", "while", "break", "int", "float", "char", "long", "typedef", "unsigned",
    "static", "sizeof", "volatile", "enum", "union", "bool", "else", "do", "continue",
    "double", "return", "case", "short", "switch", "void", "struct", "long", "typedef",
    "const", "extern", "auto", "default", "for"
    
};
unordered_set<string> operators = {"+", "-", "*", "/", "%", "="};
unordered_set<char> punctuation = 
{

    ',', ';', '(', ')', '{', '}', '#', '<', '.', '>', '"', '%'

};

// Function to check if a token is a keyword
bool isKeyword(const string& token) {
    return keywords.find(token) != keywords.end()
}
