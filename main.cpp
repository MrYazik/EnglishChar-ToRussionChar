/*
    Коды возврата: 

    Выбор языка:
        1 - Русский
        2 - Английский 
*/

#include <iostream>

// Подключение namespaces

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

// Функции для проверок

char englishCharToRussianChar(char chars)
{
    // не заглавные буквы
    if (chars == 'q')
    {
        return 'й';
    }
    else if (chars == 'w')
    {
        return 'ц';
    }
    else if (chars == 'e')
    {
        return 'у';
    }
    else if (chars == 'r')
    {
        return 'к';
    }
    else if (chars == 't')
    {
        return 'е';
    }
    else if (chars == 'y')
    {
        return 'н';
    }
    else if (chars == 'u')
    {
        return 'г';
    }
    else if (chars == 'i')
    {
        return 'ш';
    }
    else if (chars == 'o')
    {
        return 'щ';
    }
    else if (chars == 'p')
    {
        return 'з';
    }
    else if (chars == 'a')
    {
        return 'ф';
    }
    else if (chars == 's')
    {
        return 'ы';
    }
    else if (chars == 'd')
    {
        return 'в';
    }
    else if (chars == 'f')
    {
        return 'а';
    }
    else if (chars == 'g')
    {
        return 'п';
    }
    else if (chars == 'h')
    {
        return 'р';
    }
    else if (chars == 'j')
    {
        return 'о';
    }
    else if (chars == 'k')
    {
        return 'л';
    }
    else if (chars == 'l')
    {
        return 'д';
    }
    else if (chars == 'z')
    {
        return 'я';
    }
    else if (chars == 'x')
    {
        return 'ч';
    }
    else if (chars == 'c')
    {
        return 'с';
    }
    else if (chars == 'v')
    {
        return 'м';
    }
    else if (chars == 'b')
    {
        return 'и';
    }
    else if (chars == 'n')
    {
        return 'т';
    }
    else if (chars == 'm')
    {
        return 'ь';
    }
    // Специальные символы (не заглавные)
    else if (chars == '[')
    {
        return 'х';
    }
    else if (chars == ']')
    {
        return 'ъ';
    }
    else if (chars == ';')
    {
        return 'ж';
    }
    else if (chars == '\'')
    {
        return 'э';
    }
    else if (chars == ',')
    {
        return 'б';
    }
    else if (chars == '.')
    {
        return 'ю';
    }
    // Заглавные буквы
    else if (chars == 'Q')
    {
        return 'Й';
    }
    else if (chars == 'W')
    {
        return 'Ц';
    }
    else if (chars == 'E')
    {
        return 'У';
    }
    else if (chars == 'R')
    {
        return 'К';
    }
    else if (chars == 'T')
    {
        return 'Е';
    }
    else if (chars == 'Y')
    {
        return 'Н';
    }
    else if (chars == 'U')
    {
        return 'Г';
    }
    else if (chars == 'I')
    {
        return 'Ш';
    }
    else if (chars == 'O')
    {
        return 'Щ';
    }
    else if (chars == 'P')
    {
        return 'З';
    }
    else if (chars == 'A')
    {
        return 'Ф';
    }
    else if (chars == 'S')
    {
        return 'Ы';
    }
    else if (chars == 'D')
    {
        return 'В';
    }
    else if (chars == 'F')
    {
        return 'А';
    }
    else if (chars == 'G')
    {
        return 'П';
    }
    else if (chars == 'H')
    {
        return 'Р';
    }
    else if (chars == 'J')
    {
        return 'О';
    }
    else if (chars == 'K')
    {
        return 'Л';
    }
    else if (chars == 'L')
    {
        return 'Д';
    }
    else if (chars == 'Z')
    {
        return 'Я';
    }
    else if (chars == 'X')
    {
        return 'Ч';
    }
    else if (chars == 'C')
    {
        return 'С';
    }
    else if (chars == 'V')
    {
        return 'М';
    }
    else if (chars == 'B')
    {
        return 'И';
    }
    else if (chars == 'N')
    {
        return 'Т';
    }
    else if (chars == 'M')
    {
        return 'Ь';
    }
    // Специальные символы (заглавные)
    else if (chars == '{')
    {
        return 'Х';
    }
    else if (chars == '}')
    {
        return 'Ъ';
    }
    else if (chars == ':')
    {
        return 'Ж';
    }
    else if (chars == '"')
    {
        return 'Э';
    }
    else if (chars == '<')
    {
        return 'Б';
    }
    else if (chars == '>')
    {
        return 'Ю';
    } else {
        return chars;
    }
}

string reverseString() 
{
    string inputString {};

    cout << "Введите строку, которую надо перевести с английских символов в русские: ";
    std::getline(cin, inputString);

    // Функция превращения в русские символов
    for (char& c : inputString) // Перебираем по символам вводимую строку
    {
        c = englishCharToRussianChar(c); // Превращаем каждый символ в русский
    }

    return inputString; // возвращаем строку уже с русскими символами
}


// Основная функция
int main()
{
    // Переменные

    string language {};

    cout << endl; // Отступ

    // Welcome Message

    cout << "-----" << endl;
    cout << "Добро пожаловать в программу EnglishChar-ToRussionChar. \nПредупреждение: нету запятых и точек они заменяются на рандомные буквы." << endl;
    cout << "-----" << endl;

    cout << endl; // Отступ

    // Выводим результат перевода строк на русские символы

    std::cout << reverseString() << endl;
}