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

// BlueprintGeneratedClass GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C
// 0x0034 (0x0ADC - 0x0AA8)
class UGA_Keycard_Mark_Passive_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      LockActorClass;                                           // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      LockActor;                                                // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerControllerAthena*                 PlayerController;                                         // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FMarkerID                                   Marker;                                                   // 0x0AD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimeBetweenLines;                                         // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C");
		
		return ptr;
	}


	void InitAbility();
	void OnSync_5619E23F4D1F97AAF6EB6C8A62F04951();
	void K2_ActivateAbility();
	void DrawTrailToVault();
	void ReplicatedDrawTrailToVault(const struct FRotator& Rotation);
	void ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
