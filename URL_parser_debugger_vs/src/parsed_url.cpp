#include<iostream>
#include<fstream>
#include<nlohmann/json.hpp>

#include "parsed_url.h"

using json = nlohmann::json;

//��ȡJSON�ļ��е��ѽ���URL���ݣ�������һ��ParsedURL����
ParsedURL read_parsed_url(const json& parsed_url_json)
{
    ParsedURL parsed_url;
    parsed_url.protocol = parsed_url_json["protocol"].get<std::string>();
    parsed_url.hostname = parsed_url_json["hostname"].get<std::string>();
    parsed_url.port = parsed_url_json["port"].is_null() ? -1 : parsed_url_json["port"].get<int>();
    parsed_url.path = parsed_url_json["path"].get<std::string>();
    parsed_url.query_params = parsed_url_json["query_params"].get<std::map<std::string, std::string>>();
    parsed_url.fragment = parsed_url_json["fragment"].get<std::string>();
    return parsed_url;
}

//�Ƚϲο������URL���������
bool compare_parsed_url(const ParsedURL& refer_parsed_url, const ParsedURL& parsed_url)
{
    bool correct = true;

    //Э��
    if (refer_parsed_url.protocol != parsed_url.protocol)
    {
        correct = false;
    }

    //����
    if (refer_parsed_url.hostname != parsed_url.hostname)
    {
        correct = false;
    }

    //�˿�
    if (refer_parsed_url.port != parsed_url.port)
    {
        correct = false;
    }

    //·��
    if (refer_parsed_url.path != parsed_url.path)
    {
        correct = false;
    }

    //����
    if (refer_parsed_url.query_params != parsed_url.query_params)
    {
        correct = false;
    }

    //Ƭ��
    if (refer_parsed_url.fragment != parsed_url.fragment)
    {
        correct = false;
    }

    return correct;
}