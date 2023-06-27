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

// BlueprintGeneratedClass B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C
// 0x0027 (0x0CE8 - 0x0CC1)
class AB_Grenade_Molotov_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AmbientAudio;                                             // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           Niagara_Light;                                            // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C");
		
		return ptr;
	}


	void OnWeaponAttached();
	void K2_OnUnEquip();
	void ExecuteUbergraph_B_Grenade_Molotov_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
