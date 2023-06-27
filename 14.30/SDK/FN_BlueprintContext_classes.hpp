#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BlueprintContext.BlueprintContextBase
// 0x0000 (0x0030 - 0x0030)
class UBlueprintContextBase : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextBase");
		
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
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextLibrary");
		
		return ptr;
	}


	class USubsystem* STATIC_GetContext(class UObject* ContextObject, class USubsystem* Class);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
