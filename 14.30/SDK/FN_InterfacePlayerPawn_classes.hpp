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

// BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C
// 0x0000 (0x0028 - 0x0028)
class UInterfacePlayerPawn_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C");
		
		return ptr;
	}


	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void FootStepRight();
	void FootStepLeft();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
