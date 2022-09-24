#include <iostream>

void DeleteSymbolFromString(char *string, int symbolNumber)
{
    string[symbolNumber-1] = NULL;
}

void PrintCString(char *cstring)
{
    for (int i = 0; i < sizeof(cstring); i++)
        std::cout << cstring[i];
}

void DeleteAllSymbolsOfCString(char *string, char symbol)
{
    for (int i = 0; i < sizeof(string); i++)
    {
        if (string[i] == symbol)
        {
            string[i] = NULL;
        }
    }
}

void ChangeSymbolByIndex(char *string, int indexSymbolForChange, char symbol)
{
    for (int i = 0; i < sizeof(string); i++)
    {
        if (i == indexSymbolForChange)
        {
            string[i] = symbol;
        }
    }
}

void EditToDot(char *string)
{
    for (int i = 0; i < sizeof(string); i++)
    {
        if (string[i] == '.')
        {
            string[i] = '!';
        }
    }
}

int GetNumRepeatSymbol(char *string, char desiredSymbol)
{
    int repeatCount = 0;
    int* ptrRepeatCount = &repeatCount;

    for (int i = 0; i < sizeof(string); i++)
    {
        if (string[i] == desiredSymbol)
        {
            *ptrRepeatCount += 1;
        }
    }

    return repeatCount;
}



int main()
{
    char str[10];
    std::cin >> str;

    int countNum = 0, countAlph = 0, countOther = 0;
    for (int i = 0; i < 10; i++)
    {
        if (isdigit(str[i]))
        {
            countNum++;
            std::cout << "Count num: " << countNum;
        }
        else if (isalpha(str[i]))
        {
            countAlph++;
            std::cout << "Count alpha: " << countAlph;
        }
        else
        {
            countOther++;
            std::cout << "Count other: " << countOther;
        }
    }
}