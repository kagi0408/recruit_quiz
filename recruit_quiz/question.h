#pragma once

#include <string>
#include <vector>

// ��蕶�Ɠ������܂Ƃ߂�\����
struct Question
{
	std::string s;	//��蕶
	std::string a;	//����
};

// ���̔z���\���^
using QuestionList = std::vector<Question>;