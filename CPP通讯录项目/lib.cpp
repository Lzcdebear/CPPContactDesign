//����Դ�ļ������뺯�����壬includeͷ�ļ�
#include "include.h"

void showMenu()
{
    cout << "**************" << endl;
    cout << "*1. �����ϵ��*" << endl;
    cout << "*2. ��ʾ��ϵ��*" << endl;
    cout << "*3. ɾ����ϵ��*" << endl;
    cout << "*4. ������ϵ��*" << endl;
    cout << "*5. �޸���ϵ��*" << endl;
    cout << "*6. �����ϵ��*" << endl;
    cout << "*0. �˳�ͨѶ¼*" << endl;
    cout << "**************" << endl;
}


void addPerson(Contacts* ctc)
{
    //�ж��Ƿ�����
    if (ctc->m_Size == Maxnum)
    {
        cout << "ͨѶ¼�������޷��������" << endl;
        return;
    }
    else
    {
        cout << "��ʼ���";
        //���
    //����--------------------------------------------------
        string name;
        cout << "������������" << endl;
        cin >> name;
        ctc->personArray[ctc->m_Size].m_Name = name;
        //�Ա�--------------------------------------------------
        int sex = 0;
        cout << "�������Ա�" << endl;
        cout << "1-----��" << endl;
        cout << "2-----Ů" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                ctc->personArray[ctc->m_Size].m_Sex = sex;
                break;
            }
            cout << "������������������" << endl;
        }
        //����--------------------------------------------------
        int age = 0;
        cout << "���������䣺" << endl;
        cin >> age;
        ctc->personArray[ctc->m_Size].m_Age = age;
        //�绰--------------------------------------------------
        string phone;
        cout << "������绰��" << endl;
        cin >> phone;
        ctc->personArray[ctc->m_Size].m_Phone = phone;
        //��ַ--------------------------------------------------
        string addr;
        cout << "�������ַ��" << endl;
        cin >> addr;
        ctc->personArray[ctc->m_Size].m_Addr = addr;

        ctc->m_Size++;
        cout << "��ӳɹ�";
        system("pause");
        system("cls");      //��������
    }
}


void showPerson(Contacts* ctc)
{
    //�ж������Ƿ�Ϊ0
    if (ctc->m_Size == 0)
    {
        cout << "��ǰͨѶ¼Ϊ�ա�" << endl;
    }
    else
    {
        for (int i = 0; i < ctc->m_Size; i++)
        {
            cout << "������" << ctc->personArray[i].m_Name << "\t";
            cout << "�Ա�" << (ctc->personArray[i].m_Sex == 1 ?"��":"Ů") << "\t";
            cout << "���䣺" << ctc->personArray[i].m_Age << "\t";
            cout << "�绰��" << ctc->personArray[i].m_Phone << "\t";
            cout << "סַ��" << ctc->personArray[i].m_Addr << endl;
        }
    }
    system("pause");
    system("cls");
}


int isExit(Contacts* ctc, string name)  //�ж���ϵ���Ƿ����
{
    for (int i = 0; i < ctc->m_Size; i++)
    {
        if (ctc->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}


void delPerson(Contacts* ctc)
{
    cout << "��������ɾ���˵�������";
    string delname;
    cin >> delname;

    int jugnum = isExit(ctc, delname);
    if (jugnum == -1)  //�ж���ϵ���Ƿ����
    {
        cout << "û�и���ϵ�ˡ�" << endl;
    }
    else
    {
        for (int i = 0; i < ctc->m_Size; i++)
        {
            if (ctc->personArray[i].m_Name == delname)
            {
                //�����ĺ������������ǰ��һλ
                for (int i = jugnum; i < ctc->m_Size; i++)
                {
                    ctc->personArray[i] = ctc->personArray[i + 1];
                }
                ctc->m_Size--;
                cout << "ɾ���ɹ���";
            }
        }
    }
    system("pause");
    system("cls");
}


void findPerson(Contacts* ctc)
{
    int jumpcir = 0;
    string findname;
    while (jumpcir != 1)
    {
        cout << "��������Ҫ���ҵ��˵�������";
        cin >> findname;
        int jugnum = isExit(ctc, findname);
        if (jugnum == -1)  //�ж���ϵ���Ƿ����
        {
            cout << "û�и���ϵ�ˡ�" << endl;
        }
        else
        {
            cout << "������" << ctc->personArray[jugnum].m_Name << "\t";
            cout << "�Ա�" << (ctc->personArray[jugnum].m_Sex == 1 ? "��" : "Ů") << "\t";
            cout << "���䣺" << ctc->personArray[jugnum].m_Age << "\t";
            cout << "�绰��" << ctc->personArray[jugnum].m_Phone << "\t";
            cout << "סַ��" << ctc->personArray[jugnum].m_Addr << endl;
        }
        cout << "�������������룺0" << endl;
        cout << "�˳����������룺1" << endl;
        cin >> jumpcir;
    }
    cout << "�������ز˵���" << endl;
    system("pause");
    system("cls");
}


void showChange()
{
    cout << "**************" << endl;
    cout << "*1. �޸�����*" << endl;
    cout << "*2. �޸�����*" << endl;
    cout << "*3. �޸��Ա�*" << endl;
    cout << "*4. �޸ĵ绰*" << endl;
    cout << "*5. �޸�סַ*" << endl;
    cout << "*0. �˳��޸�*" << endl;
    cout << "**************" << endl;
}


void updatePerson(Contacts* ctc)
{
    cout << "��������Ҫ���ҵ��˵�������";
    string originname;
    cin >> originname;

    int jugnum = isExit(ctc, originname);
    if (jugnum == -1)  //�ж���ϵ���Ƿ����
    {
        cout << "û�и���ϵ�ˡ�" << endl;
    }
    else
    {
        int jumpcir = 0;
        while (jumpcir != 1)
        {
            {
                cout << "\n \n \n";
                cout << "��ϵ����Ϣ����" << endl;
                cout << "������" << ctc->personArray[jugnum].m_Name << "\t";
                cout << "�Ա�" << (ctc->personArray[jugnum].m_Sex == 1 ? "��" : "Ů") << "\t";
                cout << "���䣺" << ctc->personArray[jugnum].m_Age << "\t";
                cout << "�绰��" << ctc->personArray[jugnum].m_Phone << "\t";
                cout << "סַ��" << ctc->personArray[jugnum].m_Addr << endl;
                cout << "\n \n \n";
                showChange();
                cout << "��������Ҫ�޸ĵ����ݣ�" << endl;
            }
            int select = 0;
            cin >> select;
            switch (select)
            {
            case 1:     //����
            {   
                string updatename;
                cout << "�����޸ĺ��������" << endl;
                cin >> updatename;
                ctc->personArray[jugnum].m_Name = updatename;
                break;
            }
            case 2:     //����
            {
                int updateage = 0;
                cout << "�����޸ĺ�����䣺" << endl;
                cin >> updateage;
                ctc->personArray[jugnum].m_Age = updateage;
                break;
            }
            case 3:     //�Ա�
            {
                int updatesex = 0;
                cout << "�����޸ĺ���Ա�" << endl;
                cout << "1-----��" << endl << "2-----Ů" << endl;
                cin >> updatesex;
                ctc->personArray[jugnum].m_Age = updatesex;
                break;
            }
            case 4:     //�绰
            {
                string updatephone;
                cout << "�����޸ĺ�ĵ绰���룺" << endl;
                cin >> updatephone;
                ctc->personArray[jugnum].m_Phone = updatephone;
                break;
            }
            case 5:     //��ַ
            {
                string updateaddr;
                cout << "�����޸ĺ��סַ��" << endl;
                cin >> updateaddr;
                ctc->personArray[jugnum].m_Addr = updateaddr;
                break;
            }
            case 0:     //�˳��޸�
            {
                cout << "�����˳��޸���ϵ��" << endl;
                system("pause");
                system("cls");
                jumpcir = 1;
                break;
            }
            default:
                break;
            }
        }
        cout << "\n \n \n";
        cout << "�޸�����ɣ��������޸ĺ���ϵ�������" << endl;
        cout << "������" << ctc->personArray[jugnum].m_Name << "\t";
        cout << "�Ա�" << (ctc->personArray[jugnum].m_Sex == 1 ? "��" : "Ů") << "\t";
        cout << "���䣺" << ctc->personArray[jugnum].m_Age << "\t";
        cout << "�绰��" << ctc->personArray[jugnum].m_Phone << "\t";
        cout << "סַ��" << ctc->personArray[jugnum].m_Addr << endl;
        cout << "�������ز˵���";
    }
    system("pause");
    system("cls");
}


void delContacts(Contacts* ctc)
{
    int finaljug = 0;
    {
        cout << "******************** WARNING ********************" << endl;
        cout << "�Ƿ�ȷ�����ͨѶ¼��" << endl;
        cout << "�˲��������棬��ɾ��ͨѶ¼��������ϵ�ˣ�" << endl;
        cout << "���ϣ��ɾ����ϵ�ˣ������� 0 �����ز˵������� 3" << endl;
        cout << "���ϣ���޸���ϵ�ˣ������� 0 �����ز˵������� 5" << endl;
        cout << "���Ϊ�����������-----0" << endl << "���ȷ�����ͨѶ¼������-----1" << endl;
    }
    cin >> finaljug;
    if (finaljug == 0)
    {
        cout << "��ղ�����ȡ����" << endl;
    }
    else if (finaljug == 1)
    {
        Contacts blankctc;
        *ctc = blankctc;
    }
}