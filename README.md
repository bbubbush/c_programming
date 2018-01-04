# c_programming
독하게 시작하는 C 프로그래밍(with 최호성)

p.s 본 강의는 VS 2013 버전을 사용하지만 용량이 큰 관계로 VScode에서 gcc컴파일러를 설치해서 실습을 진행하였습니다.

#### [1장 설치 및 코드분석]

HelloWorld.c  =  High level 언어 (사람을 위한) 설계도  
HelloWorld.obj = 기계어 (컴파일러를 통해 번역) 부품
HelloWorld.exe = 최종 (링커를 통해 Link) 완성품

부품을 완성품으로 조립하는 것을 link. 

<코드분석>
```{.c}
#include<stdio.h> //-> 전처리기(Pre Processor)
int main(void)	  //-> 함수 선언 및 정의  매개변수가 없을 땐 void를 넣어주어야 한다
{		// ->  Block Scope

}
```
.c는 정의, .h는 선언.  h안에 정의를 넣을 수 있지만 에러가 나기 때문에 안한다.

여러 항이 모여 구분을 이루고, 구문이 모여 함수를 이루고, 함수가 모여 프로그램을 만든다. 단, main()는 특별해서 얘로 시작해서 얘가 끝나면 프로그램이 끝남

전처리기는 컴파일 전을 의미한다.
caller가 callee를 부를 때는 실인수(매개열)를 기술해줘야 한다.

#### [2장 자료형]
