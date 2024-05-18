#include<iostream>
#include<fstream>
#include<nlohmann/json.hpp>

#include "basic_url.h"

using json = nlohmann::json;

//���Ի����Ϸ�url
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
        ParsedURL refer_parsed_url = read_parsed_url(test_case_data);//���ս��
        ParsedURL parsed_url = parser_test(url);//URL���������
        
        bool parse_correct = compare_parsed_url(refer_parsed_url, parsed_url);//�ȽϽ��
        //�����ȷ
        if (parse_correct)
        {
            std::cout << "basic legal url " << url << " is parsed successfully!" << std::endl;
        }
        //�������
        else
        {
            std::cout << "basic legal url " << url << " is parsed wrongly!" << std::endl;
        }
    }
}

//���Ի����Ƿ�url
void test_basic_illegal_url()
{
    //�ļ�����ȡ�����Ϸ�url��JSON�ļ�����
    std::ifstream file("../basic_url/basic_illegal_url.json");
    json basic_legal_url;
    file >> basic_legal_url;

    for (json::iterator it = basic_legal_url.begin(); it != basic_legal_url.end(); ++it) {
        std::string test_case_name = it.key();
        json test_case_data = it.value();

        std::string url = test_case_data["url"];
        ParsedURL refer_parsed_url = read_parsed_url(test_case_data);//���ս��
        ParsedURL parsed_url = parser_test(url);//URL���������

        bool parse_correct = compare_parsed_url(refer_parsed_url, parsed_url);//�ȽϽ��
        //�����ȷ
        if (parse_correct)
        {
            std::cout << "basic illegal url " << url << " is parsed successfully!" << std::endl;
        }
        //�������
        else
        {
            std::cout << "basic illegal url " << url << " is parsed wrongly!" << std::endl;
        }
    }
}