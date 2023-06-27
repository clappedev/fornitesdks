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

// BlueprintGeneratedClass Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C
// 0x0011 (0x0961 - 0x0950)
class APrj_Athena_Bucket_Nice_C : public APrj_Athena_Bucket_Old_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               TurnOffTrail;                                             // 0x0960(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C");
		
		return ptr;
	}


	void OnRep_TurnOffTrail();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ExecuteUbergraph_Prj_Athena_Bucket_Nice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
