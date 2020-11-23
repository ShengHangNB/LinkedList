# LinkedList
基于C++的单链表实现（增删改查，以及排序和反转）

请下载zip文件到本地后使用Visual Studio打开项目或者解决方案然后选择"单链表.sln”来打开这个项目。

## 介绍
n个结点可以由指针连接成一个链表，它是线性表的链式存储映像，称为线性表的链式存储结构。其中，结点只有一个指针的链表，称为单链表。

## 功能
该代码能实现单链表的基本功能，包括：

### 1. 增加数据
在头部添加元素 - prepend()

在尾部添加元素 - append()

通过指定的索引添加元素 - insertByIndex()

~~~cpp
void prepend(int data);
void append(int data);
void insertByIndex( int index, int data);
~~~

### 2. 删除数据
根据数据值来删除数据 - deleteByValue()

根据索引来删除数据 - deleteByIndex()

删除链表中的所有数据 - clearList()

~~~cpp
void deleteByValue(int data); 
void deleteByIndex(int index); 
void clearList();
~~~

### 3. 更改和查询数据
更改数据 - changeValue()

通过索引查询对应的数值 - getValue()

通过数值查询对应的索引 -getIndex()

~~~cpp
void changeValue(int index, int data);
int getValue(int index);
int getIndex(int data);
~~~

### 4. 反转和排序
反转链表 - reverse()

给链表进行升序排序或者降序排序 - sort()

~~~cpp
void reverse();
void sort(bool ascending = true);
~~~

## 测试结果
通过运行"LinkedList testing.cpp"，可得到测试结果如下:

![image](https://github.com/ShengHangNB/README-images/blob/main/LinkedList%20README/Result%201.png)

![image](https://github.com/ShengHangNB/README-images/blob/main/LinkedList%20README/Result%202.png)

![image](https://github.com/ShengHangNB/README-images/blob/main/LinkedList%20README/Result%203.png)

![image](https://github.com/ShengHangNB/README-images/blob/main/LinkedList%20README/Result%204.png)

