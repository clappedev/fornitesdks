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

// BlueprintGeneratedClass BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C
// 0x0000 (0x0028 - 0x0028)
class UBPi_CreativeMoveToolOverrides_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C");
		
		return ptr;
	}


	void GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds);
	void GetCreativeActorOrigin(bool* Override, struct FVector* Center);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
