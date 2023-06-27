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

// BlueprintGeneratedClass GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C
// 0x0008 (0x0C80 - 0x0C78)
class UGA_HeldObject_Throw_Component_TnTina_C : public UGA_HeldObject_Throw_Component_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
