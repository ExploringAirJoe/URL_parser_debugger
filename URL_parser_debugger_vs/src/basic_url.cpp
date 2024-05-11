#include<iostream>
#include<fstream>
#include<nlohmann/json.hpp>

#include "basic_url.h"

using json = nlohmann::json;

void test_basic_legal_url()
{
    //�ļ�����ȡ�����Ϸ�url��JSON�ļ�����
	std::ifstream file("../basic_url/basic_legal_url.json");
	json basic_legal_url;
	file >> basic_legal_url;

    for (json::iterator it = basic_legal_url.begin(); it != basic_legal_url.end(); ++it) {
        std::string test_case_name = it.key();
        json test_case_data = it.value();

        std::string url = test_case_data["url"];
        ParsedURL refer_url;
        // ������������ý���������������url���ݸ������н���
        // ע�⴦�����������쳣
        ParsedURL parsed_url = parser_test(url);
        
    }
}