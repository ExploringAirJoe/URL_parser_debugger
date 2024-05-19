#include <nlohmann/json.hpp>

#include "parsed_url.h"

#include "tested_parser.h"
#include "basic_url.h"
#include "random_url.h"

int main()
{
	//��ʼ�����ӣ����������������
	srand((unsigned int)time(NULL));

	//���Ի����Ϸ�url
	test_basic_legal_url();

	//��������Ϸ�url
	test_random_legal_url();
	
	return 0;
}