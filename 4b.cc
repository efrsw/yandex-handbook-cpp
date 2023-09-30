#include <iostream>
#include <vector>

int main() 
{
    std::string str;
    std::string temp, fin = "";

    std::cin >> str;
    fin.push_back(str.at(0));

    for (size_t i = 1; i != str.size(); ++i) 
    {
        switch (str.at(i))
        {
        case 'a':
        case 'e':
        case 'h':
        case 'i':
        case 'o':
        case 'u':
        case 'w':
        case 'y':
            break;
        case 'b':
        case 'f':
        case 'p':
        case 'v':
            temp.push_back('1');
            break;
        case 'c':
        case 'g':
        case 'j':
        case 'k':
        case 'q':
        case 's':
        case 'x':
        case 'z':
            temp.push_back('2');
            break;
        case 'd':
        case 't':
            temp.push_back('3');
            break;
        case 'l':
            temp.push_back('4');
            break;
        case 'm':
        case 'n':
            temp.push_back('5');
            break;
        case 'r':
            temp.push_back('6');
            break;
        }
    }

    for (char c : temp)
    {
        if (fin.back() == c)
            continue;
        else
            fin.push_back(c);
    }

    if (fin.size() > 4)
    {
        std::cout << fin.substr(0, 4) << std::endl;
        return 0;
    }
    else
    {
        while (fin.size() != 4)
            fin.push_back('0');
    }
}