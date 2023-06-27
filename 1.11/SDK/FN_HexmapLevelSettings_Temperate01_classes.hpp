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

// BlueprintGeneratedClass HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C
// 0x0040 (0x03A8 - 0x0368)
class AHexmapLevelSettings_Temperate01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UExponentialHeightFogComponent*              ExponentialHeightFog_Volumetric;                          // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                     // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkyLightComponent*                          SkyLight;                                                 // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_Main;                                    // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LightsRoot;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C");
		return ptr;
	}


	void UserConstructionScript();
	void CustomSettings(bool Visibility);
	void ExecuteUbergraph_HexmapLevelSettings_Temperate01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
