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

// BlueprintGeneratedClass GE_MoveSpeed_Parent.GE_MoveSpeed_Parent_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_MoveSpeed_Parent_C : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_MoveSpeed_Parent.GE_MoveSpeed_Parent_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
