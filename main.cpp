/*
    ���� ������: 

    �롮� �몠:
        1 - ���᪨�
        2 - ������᪨� 
*/

#include <iostream>

// ������祭�� namespaces

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

// �㭪樨 ��� �஢�ப

char englishCharToRussianChar(char chars)
{
    // �� �������� �㪢�
    if (chars == 'q')
    {
        return '�';
    }
    else if (chars == 'w')
    {
        return '�';
    }
    else if (chars == 'e')
    {
        return '�';
    }
    else if (chars == 'r')
    {
        return '�';
    }
    else if (chars == 't')
    {
        return '�';
    }
    else if (chars == 'y')
    {
        return '�';
    }
    else if (chars == 'u')
    {
        return '�';
    }
    else if (chars == 'i')
    {
        return '�';
    }
    else if (chars == 'o')
    {
        return '�';
    }
    else if (chars == 'p')
    {
        return '�';
    }
    else if (chars == 'a')
    {
        return '�';
    }
    else if (chars == 's')
    {
        return '�';
    }
    else if (chars == 'd')
    {
        return '�';
    }
    else if (chars == 'f')
    {
        return '�';
    }
    else if (chars == 'g')
    {
        return '�';
    }
    else if (chars == 'h')
    {
        return '�';
    }
    else if (chars == 'j')
    {
        return '�';
    }
    else if (chars == 'k')
    {
        return '�';
    }
    else if (chars == 'l')
    {
        return '�';
    }
    else if (chars == 'z')
    {
        return '�';
    }
    else if (chars == 'x')
    {
        return '�';
    }
    else if (chars == 'c')
    {
        return '�';
    }
    else if (chars == 'v')
    {
        return '�';
    }
    else if (chars == 'b')
    {
        return '�';
    }
    else if (chars == 'n')
    {
        return '�';
    }
    else if (chars == 'm')
    {
        return '�';
    }
    // ���樠��� ᨬ���� (�� ��������)
    else if (chars == '[')
    {
        return '�';
    }
    else if (chars == ']')
    {
        return '�';
    }
    else if (chars == ';')
    {
        return '�';
    }
    else if (chars == '\'')
    {
        return '�';
    }
    else if (chars == ',')
    {
        return '�';
    }
    else if (chars == '.')
    {
        return '�';
    }
    // �������� �㪢�
    else if (chars == 'Q')
    {
        return '�';
    }
    else if (chars == 'W')
    {
        return '�';
    }
    else if (chars == 'E')
    {
        return '�';
    }
    else if (chars == 'R')
    {
        return '�';
    }
    else if (chars == 'T')
    {
        return '�';
    }
    else if (chars == 'Y')
    {
        return '�';
    }
    else if (chars == 'U')
    {
        return '�';
    }
    else if (chars == 'I')
    {
        return '�';
    }
    else if (chars == 'O')
    {
        return '�';
    }
    else if (chars == 'P')
    {
        return '�';
    }
    else if (chars == 'A')
    {
        return '�';
    }
    else if (chars == 'S')
    {
        return '�';
    }
    else if (chars == 'D')
    {
        return '�';
    }
    else if (chars == 'F')
    {
        return '�';
    }
    else if (chars == 'G')
    {
        return '�';
    }
    else if (chars == 'H')
    {
        return '�';
    }
    else if (chars == 'J')
    {
        return '�';
    }
    else if (chars == 'K')
    {
        return '�';
    }
    else if (chars == 'L')
    {
        return '�';
    }
    else if (chars == 'Z')
    {
        return '�';
    }
    else if (chars == 'X')
    {
        return '�';
    }
    else if (chars == 'C')
    {
        return '�';
    }
    else if (chars == 'V')
    {
        return '�';
    }
    else if (chars == 'B')
    {
        return '�';
    }
    else if (chars == 'N')
    {
        return '�';
    }
    else if (chars == 'M')
    {
        return '�';
    }
    // ���樠��� ᨬ���� (��������)
    else if (chars == '{')
    {
        return '�';
    }
    else if (chars == '}')
    {
        return '�';
    }
    else if (chars == ':')
    {
        return '�';
    }
    else if (chars == '"')
    {
        return '�';
    }
    else if (chars == '<')
    {
        return '�';
    }
    else if (chars == '>')
    {
        return '�';
    } else {
        return chars;
    }
}

string reverseString() 
{
    string inputString {};

    cout << "������ ��ப�, ������ ���� ��ॢ��� � ������᪨� ᨬ����� � ���᪨�: ";
    std::getline(cin, inputString);

    // �㭪�� �ॢ�饭�� � ���᪨� ᨬ�����
    for (char& c : inputString) // ��ॡ�ࠥ� �� ᨬ����� �������� ��ப�
    {
        c = englishCharToRussianChar(c); // �ॢ�頥� ����� ᨬ��� � ���᪨�
    }

    return inputString; // �����頥� ��ப� 㦥 � ���᪨�� ᨬ������
}


// �᭮���� �㭪��
int main()
{
    // ��६����

    string language {};

    cout << endl; // �����

    // Welcome Message

    cout << "-----" << endl;
    cout << "���� ���������� � �ணࠬ�� EnglishChar-ToRussionChar. \n�।�०�����: ���� ������� � �祪 ��� ���������� �� ࠭����� �㪢�." << endl;
    cout << "-----" << endl;

    cout << endl; // �����

    // �뢮��� १���� ��ॢ��� ��ப �� ���᪨� ᨬ����

    std::cout << reverseString() << endl;
}