//����������ô��������ҲҪ��������ѧϰŶ
#include <iostream>
#include <cmath>
#include <string>
#include "include.h"

using namespace std;

/*
    cout<<"**************"<<endl;
    cout<<"*1. �����ϵ��*"<<endl;
    cout<<"*2. ��ʾ��ϵ��*"<<endl;
    cout<<"*3. ɾ����ϵ��*"<<endl;
    cout<<"*4. ������ϵ��*"<<endl;
    cout<<"*5. �޸���ϵ��*"<<endl;
    cout<<"*6. �����ϵ��*"<<endl;
    cout<<"*0. �˳�ͨѶ¼*"<<endl;
    cout<<"**************"<<endl;
*/
int main()
{
    //ͨѶ¼����
    Contacts ctc;
    //��ʼ��
    ctc.m_Size = 0;

    //�����û�ѡ��
    int select = 0;


    //�����ص㣺ѡ���Ž�����Ӧ����
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:     //�����ϵ��
            addPerson(&ctc);
            break;
        case 2:     //��ʾ��ϵ��
            showPerson(&ctc);
            break;
        case 3:     //ɾ����ϵ��
            delPerson(&ctc);
            break;
        case 4:     //������ϵ��
            findPerson(&ctc);
            break;
        case 5:     //�޸���ϵ��
            updatePerson(&ctc);
            break;
        case 6:     //�����ϵ��
            delContacts(&ctc);
            break;
        case 0:     //�˳�ͨѶ¼
        {
            cout << "��лʹ��" << endl;
            system("pause");
            return 0;
        }
            break;
        default:
            break;
        }
    }
    //ѡ��˵�ת����Ӧ����

    system("pause");
    return 0;
}
