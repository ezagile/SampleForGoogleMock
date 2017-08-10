// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
#include <gtest\gtest.h>
#include <gmock\gmock.h>

using ::testing::_;

#pragma comment(lib, "gtest.lib")
#pragma comment(lib, "gmock.lib")
#pragma comment(lib, "calculator.lib")

#define _write(log)  std::cout << log << std::endl
#define _trace( log )	_write(log)
#define _debug( log )	_write(log)
#define _info( log )	_write(log)
#define _warn( log )	_write(log)
#define _error( log )	_write(log)
#define _fatal( log )	_write(log)