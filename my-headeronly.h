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
 * 사용 불가, 심볼 중복 발생
 */
//int ExternMinus(int a, int b) {
//  return a - b;
//}

/*
 * 헤더 파일 포함하는 소스파일 마다 정적 변수를 따로 관리
 */
static int _static_data = 10;

/*
 * 사용 불가, 심볼 중복 발생
 */
//extern int _extern_data;
#endif
