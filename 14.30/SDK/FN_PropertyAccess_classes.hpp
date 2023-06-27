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

// Class PropertyAccess.AnimBlueprintClassSubsystem_PropertyAccess
// 0x00D0 (0x00F8 - 0x0028)
class UAnimBlueprintClassSubsystem_PropertyAccess : public UAnimBlueprintClassSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FPropertyAccessLibrary                      PropertyAccessLibrary;                                    // 0x0030(0x00C8)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PropertyAccess.AnimBlueprintClassSubsystem_PropertyAccess");
		
		return ptr;
	}

};


// Class PropertyAccess.PropertyEventBroadcaster
// 0x0000 (0x0028 - 0x0028)
class UPropertyEventBroadcaster : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PropertyAccess.PropertyEventBroadcaster");
		
		return ptr;
	}

};


// Class PropertyAccess.PropertyEventSubscriber
// 0x0000 (0x0028 - 0x0028)
class UPropertyEventSubscriber : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PropertyAccess.PropertyEventSubscriber");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
