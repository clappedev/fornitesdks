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

// BlueprintGeneratedClass MASTER_TODM.MASTER_TODM_C
// 0x01CD (0x104D - 0x0E80)
class AMASTER_TODM_C : public AFortTimeOfDayManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       HeavySSAO_Postprocess;                                    // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_;// 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF;// 0x0E98(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF;// 0x0E9C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF;// 0x0EA0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF;// 0x0EA4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF;// 0x0EA8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0EA9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          New_Storm_Timeline;                                       // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285;// 0x0EB8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285;// 0x0EBC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285;// 0x0EC0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285;// 0x0EC4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EC5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FlashLightning;                                           // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              WindSpeed;                                                // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomWeatherWaitTime;                                    // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAmountOfRandomWeatherTimeLeft;                     // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWeatherLerpAmount;                                     // 0x0EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindStrength;                                             // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FutureWindStrength;                                       // 0x0EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FutureWindSpeed;                                          // 0x0EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickNewWindConditions;                                   // 0x0EEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0EED(0x0003) MISSED OFFSET
	float                                              LightningStrength;                                        // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThreatCloudStormAmount;                                   // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRainWithStorms;                                        // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Play_a_Particle_Effect_Near_the_players_Feet;             // 0x0EF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WindEffects_Should_be_Active;                             // 0x0EFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0EFB(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    Storm_Foot_Particle_Outdoor;                              // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_on_Terrain;                     // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Storm_Foot_Particle_Indoor;                               // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_NOT_on_Terrain;                 // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Storm_Wind_Strength;                                      // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Generate_Foliage_Wind_Gusts;                              // 0x0F24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0F25(0x0003) MISSED OFFSET
	struct FTimerHandle                                LightningStrikeTimerHandle;                               // 0x0F28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                PreviousDirectionalLightColor;                            // 0x0F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Lightning_Flash_Color;                                    // 0x0F40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Min;                             // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Max;                             // 0x0F54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogMorningColor;                                    // 0x0F58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogMorningLitColor;                                 // 0x0F68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningDistance;                                 // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningDiffuseAmount;                            // 0x0F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningEmissiveAmount;                           // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitLength;                                // 0x0F84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitRotation;                              // 0x0F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitOffset;                                // 0x0F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayColor;                                        // 0x0F90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayLitColor;                                     // 0x0FA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayDistance;                                     // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayDiffuseAmount;                                // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayEmissiveAmount;                               // 0x0FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitLength;                                    // 0x0FBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitRotation;                                  // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitOffset;                                    // 0x0FC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningColor;                                    // 0x0FC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningLitColor;                                 // 0x0FD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningDistance;                                 // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningDiffuseAmount;                            // 0x0FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningEmissiveAmount;                           // 0x0FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitLength;                                // 0x0FF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitRotation;                              // 0x0FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitOffset;                                // 0x0FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightColor;                                      // 0x1000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightLitColor;                                   // 0x1010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightDistance;                                   // 0x1020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightDiffuseAmount;                              // 0x1024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightEmissiveAmount;                             // 0x1028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitLength;                                  // 0x102C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitRotation;                                // 0x1030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitOffset;                                  // 0x1034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              World_Border_Cloud_Base_Color_Brightness;                 // 0x1038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                World_Border_Cloud_Sub_Surface_Color_and_Opacity;         // 0x103C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCometDynamicPlacement;                              // 0x104C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MASTER_TODM.MASTER_TODM_C");
		
		return ptr;
	}


	void EmptyTransform(struct FTransform* Transform);
	void SetHeavySSAO();
	void UserConstructionScript();
	void FlashLightning__FinishedFunc();
	void FlashLightning__UpdateFunc();
	void New_Storm_Timeline__FinishedFunc();
	void New_Storm_Timeline__UpdateFunc();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void StartStorm();
	void OnStormStart();
	void OnStormEnd();
	void LightningStrike();
	void ReceiveBeginPlay();
	void DisableLightAndFog(bool Enable);
	void EnableHDRRendering();
	void UpdateSSAO();
	void ExecuteUbergraph_MASTER_TODM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
