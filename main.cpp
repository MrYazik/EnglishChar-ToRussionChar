#include <iostream>

// Подключение namespaces

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::size;

// Массивы символов

string english = "f,dult`;pbqrkvyjghcnea[wxio]sm'.zF,DULT`;PBQRKVYJGHCNEA[WXIO]SM'.Z  ?";
string russian = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ  ?";

// Функции для проверок

char englishCharToRussianChar(char chars)
{
    for (int i {0}; i <= size(english); i++) // Счётчик перебора символов для инвертации
    {
        char englishChar { english[i] }; // Символ из массива под номером счётчика

        if (chars == englishChar) // Если переданный символ равен одному из символов из массива
        {
            char russianChar { russian[i] }; // Получаем текущий совпавший символ
            return russianChar; // Возвращаем уже переделанный символ
        }
    }
}

string reverseString() 
{
    string inputString {}; // Строка для хранения строки которую надо перевести и строка для хранения уже переведённых символов

    cout << "Введите строку, которую надо перевести с английских символов в русские: ";
    std::getline(cin, inputString); // Получаем и записываем всю строку с пробелами 

    // Функция, которая разбирает строку по символьно, вызывает функцию и заменяет каждый символ на русский
    for (char& c : inputString) // Перебираем по символам вводимую строку
    {
        c = englishCharToRussianChar(c); // Заменяем английский символ на русский
    }

    return inputString; // возвращаем строку уже с русскими символами
}


// Основная функция
int main()
{
    cout << endl; // Отступ

    // Welcome Message

    cout << "-----" << endl;
    cout << "Добро пожаловать в программу EnglishChar-ToRussionChar. \nПредупреждение: нету запятых и точек они заменяются на рандомные буквы." << endl;
    cout << "-----" << endl;

    cout << endl; // Отступ

    std::cout << reverseString() << endl; // Вызываем функцию и выводим результат
}