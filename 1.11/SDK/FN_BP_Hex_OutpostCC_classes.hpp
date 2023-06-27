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

// BlueprintGeneratedClass BP_Hex_OutpostCC.BP_Hex_OutpostCC_C
// 0x0084 (0x0798 - 0x0714)
class ABP_Hex_OutpostCC_C : public ABP_Hex_PARENT_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MeshCommandCenterFlag;                                    // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FlagPole;                                                 // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Tip2;                                                     // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MeshSmallRocks01;                                         // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MeshTowerBall;                                            // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MeshFlagpole;                                             // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             FlagParent;                                               // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Tip;                                                      // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_HB_Mountain;                                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_HB_Center_Command0040;                                 // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Outpost_Core;                                          // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OriginalPos;                                              // 0x0778(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MovedPos;                                                 // 0x0784(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BannerMID;                                                // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hex_OutpostCC.BP_Hex_OutpostCC_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ActivateOutpost();
	void HandleOnPlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void ExecuteUbergraph_BP_Hex_OutpostCC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
