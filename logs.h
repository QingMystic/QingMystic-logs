#pragma once
#ifndef LOGS_H
#define LOGS_H
#define _X86_

#include <iostream>
#include <windef.h>
#include <time.h>
#include <ctime>
#include <string>
#include <vector>

namespace logs
{
	std::string GetTimeInfo();
	std::wstring GetTimeInfoW();

	VOID info(std::string log);
	VOID info(std::vector<std::string> log_list);
	VOID info(std::wstring log);
	VOID info(std::vector<std::wstring> log_list);
	VOID info(char* log);
	VOID info(std::vector<char*> log_list);
	VOID warn(std::string log);
	VOID warn(std::vector<std::string> log_list);
	VOID warn(std::wstring log);
	VOID warn(std::vector<std::wstring> log_list);
	VOID warn(char* log);
	VOID warn(std::vector<char*> log_list);
	VOID error(std::string log);
	VOID error(std::vector<std::string> log_list);
	VOID error(std::wstring log);
	VOID error(std::vector<std::wstring> log_list);
	VOID error(char* log);
	VOID error(std::vector<char*> log_list);
	VOID debug(std::string log);
	VOID debug(std::vector<std::string> log_list);
	VOID debug(std::wstring log);
	VOID debug(std::vector<std::wstring> log_list);
	VOID debug(char* log);
	VOID debug(std::vector<char*> log_list);
}

#endif // !LOGS_H