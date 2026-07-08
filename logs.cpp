#include "logs.h"

std::string logs::GetTimeInfo()
{
	time_t time_now{ time(0) };
	tm time_info{};
	std::vector<std::string> time;

	localtime_s(&time_info, &time_now);

	time.push_back(std::to_string(time_info.tm_year + 1900));
	time.push_back(std::to_string(time_info.tm_mon + 1));
	time.push_back(std::to_string(time_info.tm_mday));
	time.push_back(std::to_string(time_info.tm_hour));
	time.push_back(std::to_string(time_info.tm_min));
	time.push_back(std::to_string(time_info.tm_sec));

	for (auto& i : time) if (i.length() < 2) i.insert(0, "0");

	return std::string
	(
		{
			'[' +
			time.at(0) +
			'.' +
			time.at(1) +
			'.' +
			time.at(2) +
			']' +
			'[' +
			time.at(3) +
			':' +
			time.at(4) +
			':' +
			time.at(5) +
			']'
		}
	);
}

std::wstring logs::GetTimeInfoW()
{
	time_t time_now{ time(0) };
	tm time_info{};
	std::vector<std::wstring> time;

	localtime_s(&time_info, &time_now);

	time.push_back(std::to_wstring(time_info.tm_year + 1900));
	time.push_back(std::to_wstring(time_info.tm_mon + 1));
	time.push_back(std::to_wstring(time_info.tm_mday));
	time.push_back(std::to_wstring(time_info.tm_hour));
	time.push_back(std::to_wstring(time_info.tm_min));
	time.push_back(std::to_wstring(time_info.tm_sec));

	for (auto& i : time) if (i.length() < 2) i.insert(0, L"0");

	return std::wstring
	(
		{
			L'[' +
			time.at(0) +
			L'.' +
			time.at(1) +
			L'.' +
			time.at(2) +
			L']' +
			L'[' +
			time.at(3) +
			L':' +
			time.at(4) +
			L':' +
			time.at(5) +
			L']'
		}
	);
}

VOID logs::info(std::string log)
{
	std::clog << GetTimeInfo() << "[INFO]" << log << std::endl;
}

VOID logs::info(std::vector<std::string> log_list)
{
	for (const auto& i : log_list) info(i);
}

VOID logs::info(std::wstring log)
{
	std::wclog << GetTimeInfoW() << L"[INFO]" << log << std::endl;
}

VOID logs::info(std::vector<std::wstring> log_list)
{
	for (const auto& i : log_list) info(i);
}

VOID logs::info(char* log)
{
	std::clog << GetTimeInfo() << "[INFO]" << log << std::endl;
}

VOID logs::info(std::vector<char*> log_list)
{
	for (const auto& i : log_list) info(i);
}

VOID logs::warn(std::string log)
{
	std::clog << GetTimeInfo() << "[WARN]" << log << std::endl;
}

VOID logs::warn(std::vector<std::string> log_list)
{
	for (const auto& i : log_list) warn(i);
}

VOID logs::warn(std::wstring log)
{
	std::wclog << GetTimeInfoW() << L"[WARN]" << log << std::endl;
}

VOID logs::warn(std::vector<std::wstring> log_list)
{
	for (const auto& i : log_list) warn(i);
}

VOID logs::warn(char* log)
{
	std::clog << GetTimeInfo() << "[WARN]" << log << std::endl;
}

VOID logs::warn(std::vector<char*> log_list)
{
	for (const auto& i : log_list) warn(i);
}

VOID logs::error(std::string log)
{
	std::cerr << GetTimeInfo() << "[ERROR]" << log << std::endl;
}

VOID logs::error(std::vector<std::string> log_list)
{
	for (const auto& i : log_list) error(i);
}

VOID logs::error(std::wstring log)
{
	std::wclog << GetTimeInfoW() << L"[ERROR]" << log << std::endl;
}

VOID logs::error(std::vector<std::wstring> log_list)
{
	for (const auto& i : log_list) error(i);
}

VOID logs::error(char* log)
{
	std::cerr << GetTimeInfo() << "[ERROR]" << log << std::endl;
}

VOID logs::error(std::vector<char*> log_list)
{
	for (const auto& i : log_list) error(i);
}
VOID logs::debug(std::string log)
{
	std::clog << GetTimeInfo() << "[DEBUG]" << log << std::endl;
}

VOID logs::debug(std::vector<std::string> log_list)
{
	for (const auto& i : log_list) debug(i);
}

VOID logs::debug(std::wstring log)
{
	std::wclog << GetTimeInfoW() << L"[DEBUG]" << log << std::endl;
}

VOID logs::debug(std::vector<std::wstring> log_list)
{
	for (const auto& i : log_list) debug(i);
}

VOID logs::debug(char* log)
{
	std::clog << GetTimeInfo() << "[DEBUG]" << log << std::endl;
}

VOID logs::debug(std::vector<char*> log_list)
{
	for (const auto& i : log_list) debug(i);
}
