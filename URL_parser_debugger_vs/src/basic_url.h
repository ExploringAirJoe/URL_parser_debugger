#ifndef BASIC_URL_H
#define BASIC_URL_H

#include<iostream>
#include<fstream>
#include<nlohmann/json.hpp>

#include "parsed_url.h"
#include "tested_parser.h"

using json = nlohmann::json;

void test_basic_legal_url();//���Ի����Ϸ�url

void test_basic_illegal_url();//���Ի����Ƿ�url

#endif