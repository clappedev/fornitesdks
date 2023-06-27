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

// BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
// 0x0028 (0x0968 - 0x0940)
class AB_Prj_Athena_FragGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SurfaceTypeSoundComponent_C*             BP_SurfaceTypeSoundComponent;                             // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PreExploWarning_PreExplo_E5859FFE443F57359EC2C0AB73DFA4CD;// 0x0950(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PreExploWarning__Direction_E5859FFE443F57359EC2C0AB73DFA4CD;// 0x0954(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0955(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PreExploWarning;                                          // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                FeedbackCue;                                              // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C");
		
		return ptr;
	}


	void PreExploWarning__FinishedFunc();
	void PreExploWarning__UpdateFunc();
	void FuseEnded();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void OnBounce(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Pre_Explo_Audio_Tell();
	void ExecuteUbergraph_B_Prj_Athena_FragGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
