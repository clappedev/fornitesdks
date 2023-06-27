// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"
#include <Windows.h>

typedef uint64_t(__fastcall* funcGetObj)(int32_t*);
funcGetObj fGetObj = (funcGetObj)((uint64_t)GetModuleHandle(NULL) + 0xC50CB0);

typedef void*(__fastcall* funcGetName)(int64_t, wchar_t**);
funcGetName fGetName = (funcGetName)((uint64_t)GetModuleHandle(NULL) + 0xC54910);

std::string GetEncryptedName(int32_t index)
{
	uint64_t obj = fGetObj(&index);
	if (obj == NULL) return "";
	wchar_t* name;
	fGetName(obj, &name);
	if (name == nullptr) return "";
	std::wstring wname = std::wstring(name);
	return std::string(wname.begin(), wname.end());
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif