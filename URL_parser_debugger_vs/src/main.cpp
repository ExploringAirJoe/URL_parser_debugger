#include <nlohmann/json.hpp>

#include "parsed_url.h"

#include "tested_parser.h"
#include "basic_url.h"
#include "random_url.h"

int main()
{
	//���Ի����Ϸ�url
	test_basic_legal_url();
	
	return 0;
}