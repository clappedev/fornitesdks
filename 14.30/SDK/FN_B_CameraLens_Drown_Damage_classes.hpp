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

// BlueprintGeneratedClass B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C
// 0x0008 (0x02E8 - 0x02E0)
class AB_CameraLens_Drown_Damage_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_Drown_Damage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
