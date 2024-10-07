#include <iostream>
#include "node.h"
#pragma once

using namespace std;

// объявление структуры Queue
struct Queue {
    Node* head;
    Node* tail;
    Queue() {
        head = nullptr;
        tail = nullptr;
    }
    void push(string value); //добавление
    void pop(); //удаление
    void display(); //вывод на экран
};

// объявление структуры Stack
struct Stack {
    Node* top;
    Stack() {
        top = nullptr;
    }
    void push(string value);
    void pop();
    void display();
};

// объявление структуры Array
struct Array {
    Node* head;
    int size;
    int capacity;

    Array(int initialCapacity = 10);
    void push(int index, string value);
    void pushEnd(string value);
    string get(int index);
    void pop(int index);
    void replace(int index, string value);
    int length();
    void display();
};

// объявление структуры List
/*
struct List {
    Node* head;
    Node* tail;
    int size;

    List();
    void pushHead(string value);
    void pushTail(string value);
    void popHead();
    void popTail();
    bool popValue(string value);
    bool search(string value);
    void display();
};
*/

// объявление структуры DubleList
// объявление структуры HashTable
// объявление структуры AVL