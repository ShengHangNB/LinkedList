#include "LinkedList.h"

LinkedList::LinkedList()
{
    length = 0;
    head = nullptr;
}

LinkedList::~LinkedList()
{
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    cout << "������ɾ��!" << endl;
}

void LinkedList::prepend(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;

    length++;
}

void LinkedList::append(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
    }
    else {
        Node* p = head;
        while (p->next != nullptr) {
            p = p->next;
        }
        p->next = new_node;
    }
    length++;
}

void LinkedList::insertByIndex(int index, int data) {
    if (index > length) {
        return;
    }

    if (index <= 0) {
        prepend(data);
        return;
    }

    if (index == length) {
        append(data);
        return;
    }

    int currentIndex = 0;
    Node* p = head;
    while (p != nullptr && currentIndex < index - 1) {
        p = p->next;
        currentIndex++;
    }
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = p->next;
    p->next = new_node;
    length++;
}

void LinkedList::deleteByValue(int data) {
    if (head == nullptr) {
        cout << "����Ϊ�գ��޷�ɾ��" << endl;
        return;
    }

    if (head->data == data) {
        Node* h = head;
        head = head->next;
        delete h;
        length--;
        return;
    }

    Node* p = head;
    Node* q = nullptr;
    while (p != nullptr) {
        if (p->next == nullptr) {
            cout << "��Ҫɾ����ֵ������" << endl;
            return;
        }

        if (p->next->data == data) {
            q = p->next;
            p->next = q->next;
            delete q;
            length--;
            return;
        }
        p = p->next;
    }
}

void LinkedList::deleteByIndex(int index) {
    if (head == nullptr) {
        return;
    }

    if (index == 0) {
        Node* h = head;
        head = head->next;
        delete h;
        length--;
        return;
    }

    Node* p = head;
    Node* q = nullptr;
    int currentIndex = 0;
    while (p != nullptr) {
        if (p->next == nullptr) {
            return;
        }

        q = p->next;
        if (currentIndex == index - 1) {
            p->next = q->next;
            delete q;
            length--;
            break;
        }
        p = p->next;
        currentIndex++;
    }
}

void LinkedList::clearList() {
    Node* q;
    Node* p = head;
    while (p != nullptr) {
        q = p->next;
        delete p;
        p = q;
    }
    head = nullptr;
    length = 0;
    cout << "����Ԫ���ѱ���գ�" << endl;
}

void LinkedList::changeValue(int index, int data) {
    Node* p = head;
    int currentIndex = 0;
    while (p != nullptr) {
        if (p->next == nullptr) {
            cout << "δ�ҵ���������Ӧ�Ľ��" << endl;
            return;
        }

        if (currentIndex == index) {
            p->data = data;
            return;
        }
        p = p->next;
        currentIndex++;
    }

}


int LinkedList::getValue(int index) {
    Node* p = head;
    int currentIndex = 0;
    int count = 0;
    while (p != nullptr) {

        if (currentIndex == index) {
            return p->data;
        }
        p = p->next;
        currentIndex++;
        count++;
    }
    return -1;
}

int LinkedList::getIndex(int data) {

    Node* p = head;
    int currentIndex = 0;
    while (p != nullptr) {
        if (p->next == nullptr) {
            cout << "û�ҵ���ֵ���ڵ�����" << endl;
            return -1;
        }

        if (p->data == data) {
            return currentIndex;
        }
        p = p->next;
        currentIndex++;
    }
    return -1;
}

void LinkedList::reverse() {

    if (head == nullptr)
    {
        cout << "����Ϊ�գ��޷���ת" << endl;
        return;
    }

    Node* new_head = nullptr;
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;

        temp->next = new_head;
        new_head = temp;
    }
    head = new_head;
    cout << "��ת�ɹ�" << endl;
}

void LinkedList::sort(bool ascending) {
    if (head == nullptr) {
        cout << "����Ϊ�գ��޷�����" << endl;
        return;
    }

    Node* p;
    p = head;
    for (int i = 0; i < length - 1; i++) {
        while (p->next != nullptr) {
            if (p->data > p->next->data) {
                int temp = p->data;
                p->data = p->next->data;
                p->next->data = temp;
            }
            p = p->next;
        }
        p = head;
    }
    if (!ascending) {
        this->reverse();
    }
}

void LinkedList::display()
{
    Node* p = head;

    while (p != nullptr) {
        cout << p->data << endl;
        p = p->next;
    }
    cout << "-------------------------------------------------" << endl;
}