//����ͷ�ļ���������������
#include <iostream>
using namespace std;

#define Maxnum 1000
//�ṹ�����
struct Person
{
    string m_Name;
    int m_Sex;      //1 ��   2 Ů
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct Contacts
{
    Person personArray[Maxnum];
    int m_Size;
};


//��������
void showMenu();
void showChange();
void addPerson(Contacts* ctc);
void showPerson(Contacts* ctc);
void delPerson(Contacts* ctc);
void findPerson(Contacts* ctc);
void updatePerson(Contacts* ctc);
void delContacts(Contacts* ctc);
int isExit(Contacts* ctc, string name);
