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

// BlueprintGeneratedClass GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C
// 0x0064 (0x0EB0 - 0x0E4C)
class UGA_Athena_AppleSun_SecondaryTrajectory_C : public UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E4C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               LocationIsValid;                                          // 0x0E58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E59(0x0003) MISSED OFFSET
	float                                              OffsetLocation;                                           // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemDef;                                                  // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemDef_VR;                                               // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       Recharging_Tags;                                          // 0x0E70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       VR_tag;                                                   // 0x0E90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C");
		
		return ptr;
	}


	void K2_CommitExecute();
	void UpdateTrajectory();
	void Remove_Item_();
	void ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
