#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class BlueprintContext.BlueprintContextBase
// 0x0000 (0x0028 - 0x0028)
class UBlueprintContextBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextBase");
		return ptr;
	}

};


// Class BlueprintContext.BlueprintContextLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextLibrary");
		return ptr;
	}


	void STATIC_GetContext();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
