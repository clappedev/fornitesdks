#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
// 0x0000 (0x0450 - 0x0450)
class AB_PlayerHealthDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
