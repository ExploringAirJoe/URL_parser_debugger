#ifndef RANDOM_URL_H
#define RANDOM_URL_H

#include "parsed_url.h"
#include "tested_parser.h"

//�ֱ�궨�˸�������������ɵ�����
#define PROTOCOL_LEGAL 1

#define HOSTNAME_LEGAL 1

#define PORT_LEGAL 1

#define PATH_LEGAL 1

#define QUERY_PARAMS_LEGAL 1

#define FRAGMENT_LEGAL 1

void test_random_legal_url();//��������Ϸ�url

void test_random_illegal_url();//��������Ƿ�url

std::string generate_random_string(int length);//������ɳ���Ϊlength���ַ������Դ�Сд��ĸ������Ϊ�ַ���

std::string generate_random_protocol(int kind);//�������һ��ָ������Э��

std::string generate_random_hostname(int kind);//�������һ��ָ������������

int generate_random_port(int kind);//�������һ��ָ�����Ͷ˿�

std::string generate_random_path(int kind);//�������һ��ָ������·��

std::map<std::string, std::string> generate_random_query_params(int kind);//�������һ��ָ�����Ͳ����б�

std::string generate_random_fragment(int kind);//�������һ��ָ������Ƭ��

#endif