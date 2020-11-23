#pragma once
#include<iostream>
using namespace std;

class LinkedList
{
public:
    int length;
    struct Node {
        int data;
        Node* next;
    } *head;

    LinkedList();
    ~LinkedList();

    void prepend(int data);
    void append(int data);
    void insertByIndex(int index, int data);

    void deleteByValue(int data);
    void deleteByIndex(int index);
    void clearList();

    void changeValue(int index, int data);

    int getValue(int index);
    int getIndex(int data);

    void reverse();
    void sort(bool ascending = true);

    void display();
};