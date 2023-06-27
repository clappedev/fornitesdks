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

// BlueprintGeneratedClass GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C
// 0x0008 (0x0368 - 0x0360)
class UGSC_C2S3_BattlePass_C : public UFortGameStateComponent_EventLevel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C");
		
		return ptr;
	}


	void OnNavActorSelected();
	void OnNavActorHovered();
	void ExecuteUbergraph_GSC_C2S3_BattlePass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
