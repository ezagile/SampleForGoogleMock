#include "stdafx.h"
#include "TestCalculator.h"
#include "MockAccountStorage.h"
#include "TestUtil.h"
#include "../calculator/calculator.h"


TEST_F(FixtureTestCalculator, SuccessToSum) {
	FEATURE("Calculator �� storage ���� ���� ���⿡ ���� ������ ���� �� �ִ�.");
	SCENARIO("storage �� ����� ���� ���⿡ ���� ������ ���Ѵ�.");

	GIVEN("1�� ���� 5������ 5������ ���� ���� ������ �ִ�.");
	Calculator calculator(this->storage);

	WHEN("������ ������ ��");

	THEN("��� ������ 1���� �ε��ؾ� �ϰ�,");
	EXPECT_CALL(*(this->storage), getMonths(_)).Times(1);
	int sum = 0;
	calculator.sum(sum);

	AND("������ 1240 �̾�� �Ѵ�.");
	EXPECT_EQ(sum, 1240);
}

TEST_F(FixtureTestCalculator, SuccessToAverage) {
	FEATURE("Calculator �� storage ���� ���� ���⿡ ���� ����� ���� �� �ִ�.");
	SCENARIO("storage �� ����� ���� ���⿡ ���� ����� ���Ѵ�.");

	GIVEN("1�� ���� 5������ 5������ ���� ���� ������ �ִ�.");
	Calculator calculator(this->storage);

	WHEN("����� ������ ��");

	THEN("��� ������ 2�� �ε��ؾ� �ϰ�,");
	EXPECT_CALL(*(this->storage), getMonths(_)).Times(2);
	double average = 0;
	calculator.average(average);

	AND("248 �̾�� �Ѵ�.");
	EXPECT_EQ(average, 248);
}