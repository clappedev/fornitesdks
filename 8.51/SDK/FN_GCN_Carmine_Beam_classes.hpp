#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCN_Carmine_Beam.GCN_Carmine_Beam_C
// 0x000C (0x01AC - 0x01A0)
class UGCN_Carmine_Beam_C : public UFortGameplayCueNotify_Burst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MaxBeamLength;                                            // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Carmine_Beam.GCN_Carmine_Beam_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GCN_Carmine_Beam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
