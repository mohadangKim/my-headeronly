#ifndef MY_HEADERONLY_H
#define MY_HEADERONLY_H

#include <iostream>

class Foo {
public:
  void Hello() {
    std::cout << "Hello My Headeronly" << std::endl;
  }
};

inline int InlineAdd(int a, int b) {
  return a + b;
}

/*
 * ��� �Ұ�, �ɺ� �ߺ� �߻�
 */
//int ExternMinus(int a, int b) {
//  return a - b;
//}

/*
 * ��� ���� �����ϴ� �ҽ����� ���� ���� ������ ���� ����
 */
static int _static_data = 10;

/*
 * ��� �Ұ�, �ɺ� �ߺ� �߻�
 */
//extern int _extern_data;
#endif
