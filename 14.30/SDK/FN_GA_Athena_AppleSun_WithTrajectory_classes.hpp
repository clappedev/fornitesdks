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

// BlueprintGeneratedClass GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C
// 0x0064 (0x0E88 - 0x0E24)
class UGA_Athena_AppleSun_WithTrajectory_C : public UGA_ThrowConsumable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E24(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               LocationIsValid;                                          // 0x0E30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E31(0x0003) MISSED OFFSET
	float                                              OffsetLocation;                                           // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemDef;                                                  // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemDef_VR;                                               // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       Recharging_Tags;                                          // 0x0E48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       VR_tag;                                                   // 0x0E68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C");
		
		return ptr;
	}


	void K2_CommitExecute();
	void UpdateTrajectory();
	void Remove_Item_();
	void ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
