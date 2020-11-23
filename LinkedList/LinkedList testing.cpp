#include <iostream>
#include<string>
#include "LinkedList.h"
using namespace std;

void test01() {
    cout << "测试1：插入函数" << endl;
    LinkedList* list = new LinkedList();
    cout << "头部插入值：22，尾部插入值：11" << endl;
    list->prepend(22);
    list->append(11);
    list->display();

    cout << "索引为0的位置插入值：33" << endl;
    list->insertByIndex(0, 33);
    list->display();

    cout << "索引为3的位置插入值：44" << endl;
    list->insertByIndex(3, 44);
    list->display();

    cout << "索引为2的位置插入值：55" << endl;
    list->insertByIndex(2, 55);
    list->display();
    delete list;
    cout << endl;
}

void test02() {
    cout << "测试2：删除函数" << endl;
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
    cout << "创建的原链表如下：" << endl;
    list->display();
    cout << "删除索引：0 所对应的结点" << endl;
    list->deleteByIndex(0);
    list->display();

    cout << "删除值为5 所对应的结点" << endl;
    list->deleteByValue(5);
    list->display();

    cout << "现在清空列表所有结点" << endl;
    list->clearList();
    list->display();
    delete list;
    cout << endl;
}

void test03() {
    cout << "测试3：修改和取值函数" << endl;
    LinkedList* list = new LinkedList();
    for (int i = 10; i < 16; i++) {
        list->append(i);
    }
    cout << "创建的原链表如下：" << endl;
    list->display();

    cout << "将索引为3的值修改为100" << endl;
    list->changeValue(3, 100);
    list->display();
    cout << "值：100 所对应的索引为" << list->getIndex(100) << endl;
    cout << "索引：1 所对应的值为" << list->getValue(1) << endl;
    delete list;
    cout << endl;
}

void test04() {
    cout << "测试4：排序和反转函数：" << endl;
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
    cout << "创建的原链表如下：" << endl;
    list->display();

    cout << "反转链表，结果如下：" << endl;
    list->reverse();
    list->display();

    cout << "升序排序，结果如下：" << endl;
    list->sort();
    list->display();

    cout << "降序排序，结果如下：" << endl;
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