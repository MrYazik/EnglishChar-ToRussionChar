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
using std::size;

// ���ᨢ� ᨬ�����

string english = "f,dult`;pbqrkvyjghcnea[wxio]sm'.zF,DULT`;PBQRKVYJGHCNEA[WXIO]SM'.Z  ?";
string russian = "������񦧨�����������������������������������������������������  ?";

// �㭪樨 ��� �஢�ப

char englishCharToRussianChar(char chars)
{
    for (int i {0}; i <= size(english); i++) // ����稪 ��ॡ�� ᨬ����� ��� ������樨
    {
        char englishChar { english[i] }; // ������ �� ���ᨢ� ��� ����஬ ����稪�

        if (chars == englishChar) // �᫨ ��।���� ᨬ��� ࠢ�� ������ �� ᨬ����� �� ���ᨢ�
        {
            char russianChar { russian[i] }; // ����砥� ⥪�騩 ᮢ���訩 ᨬ���
            return russianChar; // �����頥� 㦥 ��।������ ᨬ���
        }
    }
}

string reverseString() 
{
    string inputString {}; // ��ப� ��� �࠭���� ��ப� ������ ���� ��ॢ��� � ��ப� ��� �࠭���� 㦥 ��ॢ����� ᨬ�����

    cout << "������ ��ப�, ������ ���� ��ॢ��� � ������᪨� ᨬ����� � ���᪨�: ";
    std::getline(cin, inputString); // ����砥� � �����뢠�� ��� ��ப� � �஡����� 

    // �㭪��, ����� ࠧ��ࠥ� ��ப� �� ᨬ���쭮, ��뢠�� �㭪�� � ������� ����� ᨬ��� �� ���᪨�
    for (char& c : inputString) // ��ॡ�ࠥ� �� ᨬ����� �������� ��ப�
    {
        c = englishCharToRussianChar(c); // �����塞 ������᪨� ᨬ��� �� ���᪨�
    }

    return inputString; // �����頥� ��ப� 㦥 � ���᪨�� ᨬ������
}


// �᭮���� �㭪��
int main()
{
    cout << endl; // �����

    // Welcome Message

    cout << "-----" << endl;
    cout << "���� ���������� � �ணࠬ�� EnglishChar-ToRussionChar. \n�।�०�����: ���� ������� � �祪 ��� ���������� �� ࠭����� �㪢�." << endl;
    cout << "-----" << endl;

    cout << endl; // �����

    std::cout << reverseString() << endl; // ��뢠�� �㭪�� � �뢮��� १����
}