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

// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
// 0x0010 (0x0AE1 - 0x0AD1)
class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               UseHeroLoadoutSystem;                                     // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C");
		
		return ptr;
	}


	void CommitAbilityWithEvent(bool* Passed);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
