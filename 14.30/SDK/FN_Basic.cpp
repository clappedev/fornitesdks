// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
std::string GetById(int id)
{
	std::string name;
	UObject temp;
	static DWORD_PTR funcGetObjectName = ((DWORD_PTR)GetModuleHandleW(NULL) + 0x4D06F31);

	temp.Name.ComparisonIndex = id;
	temp.Name.Number = 0;

	name = std::string(reinterpret_cast<FString(__fastcall*)(UObject*)>(funcGetObjectName)(&temp).ToString());

	return name;
}
//---------------------------------------------------------------------------
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
