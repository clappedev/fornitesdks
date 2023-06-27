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

// BlueprintGeneratedClass BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C
// 0x004C (0x0760 - 0x0714)
class ABP_Hex_Outpost_Theater4_C : public ABP_Hex_PARENT_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        FlagLight;                                                // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Tip;                                                      // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MeshCommandCenterFlag;                                    // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Outpost_Core;                                          // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BannerMID;                                                // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ActivateOutpost();
	void HandleOnPlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void ExecuteUbergraph_BP_Hex_Outpost_Theater4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
