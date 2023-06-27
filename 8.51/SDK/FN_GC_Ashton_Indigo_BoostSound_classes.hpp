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

// BlueprintGeneratedClass GC_Ashton_Indigo_BoostSound.GC_Ashton_Indigo_BoostSound_C
// 0x0008 (0x0798 - 0x0790)
class AGC_Ashton_Indigo_BoostSound_C : public AFortGameplayCueNotify_Loop
{
public:
	class UAudioComponent*                             AudioComponent;                                           // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Ashton_Indigo_BoostSound.GC_Ashton_Indigo_BoostSound_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
