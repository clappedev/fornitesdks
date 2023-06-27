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

// BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C
// 0x017F (0x11CC - 0x104D)
class ATODM_Disabled_C : public AMASTER_TODM_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x104D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1050(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              WindSpeed_1;                                              // 0x1058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomWeatherWaitTime_1;                                  // 0x105C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAmountOfRandomWeatherTimeLeft_1;                   // 0x1060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWeatherLerpAmount_1;                                   // 0x1064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindStrength_1;                                           // 0x1068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FutureWindStrength_1;                                     // 0x106C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FutureWindSpeed_1;                                        // 0x1070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickNewWindConditions_1;                                 // 0x1074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1075(0x0003) MISSED OFFSET
	float                                              LightningStrength_1;                                      // 0x1078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThreatCloudStormAmount_1;                                 // 0x107C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRainWithStorms_1;                                      // 0x1080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Play_a_Particle_Effect_Near_the_players_Feet_1;           // 0x1081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WindEffects_Should_be_Active_1;                           // 0x1082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x1083(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    Storm_Foot_Particle_Outdoor_1;                            // 0x1088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_on_Terrain_1;                   // 0x1090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Storm_Foot_Particle_Indoor_1;                             // 0x1098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_NOT_on_Terrain_1;               // 0x10A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Storm_Wind_Strength_1;                                    // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Generate_Foliage_Wind_Gusts_1;                            // 0x10AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x10AD(0x0003) MISSED OFFSET
	struct FTimerHandle                                LightningStrikeTimerHandle_1;                             // 0x10B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                PreviousDirectionalLightColor_1;                          // 0x10B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Lightning_Flash_Color_1;                                  // 0x10C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Min_1;                           // 0x10D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Max_1;                           // 0x10DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ShootingStarParticleSystem_1;                             // 0x10E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Spawn_Shooting_Stars_1;                                   // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x10E9(0x0003) MISSED OFFSET
	struct FLinearColor                                SkyboxFogMorningColor_1;                                  // 0x10EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogMorningLitColor_1;                               // 0x10FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningDistance_1;                               // 0x110C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningDiffuseAmount_1;                          // 0x1110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningEmissiveAmount_1;                         // 0x1114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitLength_1;                              // 0x1118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitRotation_1;                            // 0x111C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogMorningLitOffset_1;                              // 0x1120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayColor_1;                                      // 0x1124(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayLitColor_1;                                   // 0x1134(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayDistance_1;                                   // 0x1144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayDiffuseAmount_1;                              // 0x1148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayEmissiveAmount_1;                             // 0x114C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitLength_1;                                  // 0x1150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitRotation_1;                                // 0x1154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogDayLitOffset_1;                                  // 0x1158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningColor_1;                                  // 0x115C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningLitColor_1;                               // 0x116C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningDistance_1;                               // 0x117C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningDiffuseAmount_1;                          // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningEmissiveAmount_1;                         // 0x1184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitLength_1;                              // 0x1188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitRotation_1;                            // 0x118C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogEveningLitOffset_1;                              // 0x1190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightColor_1;                                    // 0x1194(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightLitColor_1;                                 // 0x11A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightDistance_1;                                 // 0x11B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightDiffuseAmount_1;                            // 0x11B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightEmissiveAmount_1;                           // 0x11BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitLength_1;                                // 0x11C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitRotation_1;                              // 0x11C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyboxFogNightLitOffset_1;                                // 0x11C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void DisableLightAndFog(bool Enable);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TODM_Disabled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
