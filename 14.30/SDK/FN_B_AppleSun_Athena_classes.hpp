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

// BlueprintGeneratedClass B_AppleSun_Athena.B_AppleSun_Athena_C
// 0x0037 (0x0CF8 - 0x0CC1)
class AB_AppleSun_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        Apple_Sun;                                                // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewVar_1;                                                 // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NewVar_2;                                                 // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       NewVar_3;                                                 // 0x0CE0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_AppleSun_Athena.B_AppleSun_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
