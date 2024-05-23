#ifndef PARSED_URL_H
#define PARSED_URL_H

#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

struct ParsedURL
{
    std::string protocol;
    std::string hostname;
    int port = 0;
    std::string path;
    std::map<std::string, std::string> query_params;
    std::string fragment;
};

ParsedURL read_parsed_url(const json& parsed_url_json);//读取JSON文件中的已解析URL数据，并返回一个ParsedURL对象

bool compare_parsed_url(const ParsedURL& refer_parsed_url, const ParsedURL& parsed_url);//比较参考结果和URL解析器结果

std::string url_encode(const std::string& value);//将字符串进行url编码

std::string ParsedURL_to_url(ParsedURL& parsed_url);//将已解析的url组装为完整url

#endif