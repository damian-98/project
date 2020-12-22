// test_1.c
#include <stdio.h>
#include <string.h>
#include <c\CUnit/CUnit.h>
#include "hello.h"

void test_hello()
{
	CU_ASSERT(strcmp(hello(), "Hello World\n") == 0);
}
		
