#include <iostream>
#include<string>
#include "LinkedList.h"
using namespace std;

void test01() {
    cout << "����1�����뺯��" << endl;
    LinkedList* list = new LinkedList();
    cout << "ͷ������ֵ��22��β������ֵ��11" << endl;
    list->prepend(22);
    list->append(11);
    list->display();

    cout << "����Ϊ0��λ�ò���ֵ��33" << endl;
    list->insertByIndex(0, 33);
    list->display();

    cout << "����Ϊ3��λ�ò���ֵ��44" << endl;
    list->insertByIndex(3, 44);
    list->display();

    cout << "����Ϊ2��λ�ò���ֵ��55" << endl;
    list->insertByIndex(2, 55);
    list->display();
    delete list;
    cout << endl;
}

void test02() {
    cout << "����2��ɾ������" << endl;
    LinkedList* list = new LinkedList();
    for (int i = 0; i < 6; i++)
    {
        if (i < 3) {
            list->prepend(i);
        }
        else {
            list->append(i);
        }
    }
    cout << "������ԭ�������£�" << endl;
    list->display();
    cout << "ɾ��������0 ����Ӧ�Ľ��" << endl;
    list->deleteByIndex(0);
    list->display();

    cout << "ɾ��ֵΪ5 ����Ӧ�Ľ��" << endl;
    list->deleteByValue(5);
    list->display();

    cout << "��������б����н��" << endl;
    list->clearList();
    list->display();
    delete list;
    cout << endl;
}

void test03() {
    cout << "����3���޸ĺ�ȡֵ����" << endl;
    LinkedList* list = new LinkedList();
    for (int i = 10; i < 16; i++) {
        list->append(i);
    }
    cout << "������ԭ�������£�" << endl;
    list->display();

    cout << "������Ϊ3��ֵ�޸�Ϊ100" << endl;
    list->changeValue(3, 100);
    list->display();
    cout << "ֵ��100 ����Ӧ������Ϊ" << list->getIndex(100) << endl;
    cout << "������1 ����Ӧ��ֵΪ" << list->getValue(1) << endl;
    delete list;
    cout << endl;
}

void test04() {
    cout << "����4������ͷ�ת������" << endl;
    LinkedList* list = new LinkedList();

    for (int i = 0; i < 6; i++)
    {
        if (i < 3) {
            list->prepend(i);
        }
        else {
            list->append(i);
        }
    }
    cout << "������ԭ�������£�" << endl;
    list->display();

    cout << "��ת����������£�" << endl;
    list->reverse();
    list->display();

    cout << "�������򣬽�����£�" << endl;
    list->sort();
    list->display();

    cout << "�������򣬽�����£�" << endl;
    list->sort(false);
    list->display();

    delete list;
    cout << endl;
}

int main()
{
    test01();
    test02();
    test03();
    test04();
    system("pause");
    return 0;
}