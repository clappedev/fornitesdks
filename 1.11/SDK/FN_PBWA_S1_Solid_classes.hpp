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

// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// 0x0028 (0x0E78 - 0x0E50)
class APBWA_S1_Solid_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (Transient, DuplicateTransient)
	int                                                GnomeWallChance;                                          // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GnomeWallMax;                                             // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Gnomed;                                                   // 0x0E60(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E61(0x0007) MISSED OFFSET
	class UMaterialInstanceConstant*                   GnomeMaterial;                                            // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 GnomeWall;                                                // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBWA_S1_Solid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
