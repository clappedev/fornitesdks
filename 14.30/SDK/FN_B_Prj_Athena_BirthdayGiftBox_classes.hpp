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

// BlueprintGeneratedClass B_Prj_Athena_BirthdayGiftBox.B_Prj_Athena_BirthdayGiftBox_C
// 0x0010 (0x0BF0 - 0x0BE0)
class AB_Prj_Athena_BirthdayGiftBox_C : public AB_Prj_Athena_GiftBox_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             InAirAudio;                                               // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_BirthdayGiftBox.B_Prj_Athena_BirthdayGiftBox_C");
		
		return ptr;
	}


	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ExecuteUbergraph_B_Prj_Athena_BirthdayGiftBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
