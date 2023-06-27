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

// BlueprintGeneratedClass VaultCharacterLightingBP.VaultCharacterLightingBP_C
// 0x0078 (0x03E0 - 0x0368)
class AVaultCharacterLightingBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USkyLightComponent*                          SkyLightLowSettings;                                      // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkyLightComponent*                          SkyLight;                                                 // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent010;                                        // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent09;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent08;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent07;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent06;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent05;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent04;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent03;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent02;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent01;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LightComponent0;                                          // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VaultCharacterLightingBP.VaultCharacterLightingBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void LightControl(bool NewParam);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VaultCharacterLightingBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
