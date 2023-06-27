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

// BlueprintGeneratedClass B_Pistol_Revolver_Futuristic_Athena.B_Pistol_Revolver_Futuristic_Athena_C
// 0x0010 (0x1320 - 0x1310)
class AB_Pistol_Revolver_Futuristic_Athena_C : public AB_Pistol_Generic_C
{
public:
	class UStaticMeshComponent*                        Reload_QuickReload;                                       // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Reload_Ammo;                                              // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Pistol_Revolver_Futuristic_Athena.B_Pistol_Revolver_Futuristic_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
