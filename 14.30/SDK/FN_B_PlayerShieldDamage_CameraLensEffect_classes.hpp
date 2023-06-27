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

// BlueprintGeneratedClass B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
// 0x0008 (0x02F0 - 0x02E8)
class AB_PlayerShieldDamage_CameraLensEffect_C : public AB_PlayerHealthDamage_CameraLensEffect_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C");
		
		return ptr;
	}


	void PassParticle_Parameter_Shield(float NewParam);
	void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
