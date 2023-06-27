// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"
#include <Windows.h>

namespace SDK
{
uintptr_t base_address = (uintptr_t)GetModuleHandle(NULL);
UWorld** GWorld = reinterpret_cast<UWorld**>(base_address + 0x5D3F9A8);
TNameEntryArray* FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>((PBYTE)base_address + 0x5CB7CA0);
FUObjectArray* UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>((PBYTE)base_address + 0x5CC1310);
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
}
//---------------------------------------------------------------------------

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


