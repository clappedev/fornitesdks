#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorePinataMaster_BP.StorePinataMaster_BP_C
// 0x07C1 (0x0A11 - 0x0250)
class AStorePinataMaster_BP_C : public AStorePinataMaster_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkyLightComponent*                          SkyLightStoreLOW;                                         // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LightsRoot;                                               // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeshScreenshotBG;                                         // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FXRoot;                                                   // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Llama_Voice;                                              // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             CardRoot;                                                 // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GroundRoot;                                               // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WeaponRoot;                                               // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponMobileVersion;                                 // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow3;                                                   // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  MobileDirectionalLight;                                   // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MobileLightsParent;                                       // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeshScreenshotRopeEraser;                                 // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PhysicsBroomCube;                                         // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_LightShafts;                             // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PSC_PinataFallingDebris;                                  // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PSC_PinataExplode;                                        // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PSC_PinataHit;                                            // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLightRim02_A;                                         // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLightRim01_A;                                         // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow2;                                                   // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_A;                                       // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLightRim_B;                                           // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_B;                                       // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLightMain_B;                                          // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          SkyLightStore;                                            // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDummyAttackFinish;                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCard01;                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_CandyCorn02;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_CandyCorn01;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint13;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint12;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint11;                                           // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint10;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean08;                                      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint09;                                           // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean07;                                      // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean06;                                      // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint08;                                           // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean05;                                      // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean04;                                      // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint07;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean01;                                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint05;                                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint06;                                           // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean03;                                      // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Jellybean02;                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint03;                                           // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint01;                                           // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Candy_Mint04;                                           // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Broomdust;                                              // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_PushBroom;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDummyCharge;                                   // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDummyHidden;                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDummy;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_PhaseBFade_MainGround;                                 // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_PhaseBFade__Direction;                                 // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_PhaseBFade;                                            // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_Upgrade3_UpgradeWipe_B21C849A48AE2BB921CD949CA9B9A20F; // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Upgrade3__Direction_B21C849A48AE2BB921CD949CA9B9A20F;  // 0x0434(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Upgrade3;                                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_DropEyeAnim_Blink;                                     // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_DropEyeAnim_LocLerp;                                   // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_DropEyeAnim_SizeLerp;                                  // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_DropEyeAnim__Direction;                                // 0x044C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_DropEyeAnim;                                           // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_PupilContracts_ContractLerpLoc_FE4A75A84413E69729FBCD9FE414408A;// 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_PupilContracts_ContractLerpA_FE4A75A84413E69729FBCD9FE414408A;// 0x045C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_PupilContracts__Direction_FE4A75A84413E69729FBCD9FE414408A;// 0x0460(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_PupilContracts;                                        // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_SuspiciousEyes_SuspiciousEyeLoc_D8D2FF1F436C6B879D28EFAA86F1BBC2;// 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SuspiciousEyes_SuspiciousEyelids_D8D2FF1F436C6B879D28EFAA86F1BBC2;// 0x0474(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_SuspiciousEyes__Direction_D8D2FF1F436C6B879D28EFAA86F1BBC2;// 0x0478(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_SuspiciousEyes;                                        // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_WeaponCharge_AttackPlayRate;                           // 0x0488(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_WeaponCharge_TimeHeld;                                 // 0x048C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_WeaponCharge_WeaponChargeRotateLerp;                   // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_WeaponCharge__Direction;                               // 0x0494(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_WeaponCharge;                                          // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_PushbroomAnim_ParticleScaleOut;                        // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_PushbroomAnim_BroomLocX;                               // 0x04A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_PushbroomAnim__Direction;                              // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_PushbroomAnim;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_ChangeLighting_Ground_A488F4E44EB8E7A0F9886E8F7CA1BDC4;// 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_ChangeLighting_Main_A488F4E44EB8E7A0F9886E8F7CA1BDC4;  // 0x04BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_ChangeLighting__Direction_A488F4E44EB8E7A0F9886E8F7CA1BDC4;// 0x04C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_ChangeLighting;                                        // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CardCough_NewTrack;                                    // 0x04D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardCough__Direction_DAEEB3A641472A9A78E0BB93BA6CE0E0; // 0x04D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CardCough;                                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_EyesFollowMouseAgain_NewTrack;                         // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_EyesFollowMouseAgain__Direction;                       // 0x04E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_EyesFollowMouseAgain;                                  // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_Upgrade2_UpgradeWipe;                                  // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Upgrade2__Direction;                                   // 0x04F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Upgrade2;                                              // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_UndarkenBG_NewTrack;                                   // 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_UndarkenBG__Direction_C60EED984B4A5117E9941E920611D748;// 0x0504(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_UndarkenBG;                                            // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_RegularEyes_DizzyEyes;                                 // 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_RegularEyes_NewTrack;                                  // 0x0514(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_RegularEyes__Direction;                                // 0x0518(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_RegularEyes;                                           // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_DarkenBG_NewTrack;                                     // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_DarkenBG__Direction_C89B3A6D43D94BAC2627F18DC7E2A1D1;  // 0x052C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_DarkenBG;                                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_Upgrade1_UpgradeWipe_DE6D0868440970D949F11B98CC0FC434; // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Upgrade1__Direction_DE6D0868440970D949F11B98CC0FC434;  // 0x053C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Upgrade1;                                              // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_Attack_WeaponRotateAttack;                             // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Attack__Direction;                                     // 0x054C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Attack;                                                // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_EquipWeapon_NewTrack;                                  // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_EquipWeapon__Direction;                                // 0x055C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_EquipWeapon;                                           // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USoundBase*>                          SoundWeaponGreetArray;                                    // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Current_Delta;                                            // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldLocationForMaterial;                                 // 0x057C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PackIsUpgrade1;                                           // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PackIsUpgrade2;                                           // 0x0589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PackIsUpgrade0;                                           // 0x058A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasAttacked1X;                                            // 0x058B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasAttacked2X;                                            // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasAttacked3X;                                            // 0x058D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbleToAttack;                                             // 0x058E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFastForward;                                           // 0x058F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_PPT_Icon;                                             // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugUpgradeLevels;                                       // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugLevel0_;                                             // 0x0599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugLevel1_;                                             // 0x059A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugLevel2_;                                             // 0x059B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_PPT_Base;                                             // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_PPT_Tassles;                                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    CardPackIconTexture;                                      // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CardPackIconColor;                                        // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FallingDebris_Lvl_0;                                      // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FallingDebris_Lvl_1;                                      // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Falling_Debris_Lvl_2;                                     // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Explode_Lvl_0;                                            // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Explode_Lvl_1;                                            // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Explode_Lvl_2;                                            // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Llama_Hit_Lvl_0;                                          // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Llama_Hit_Lvl_1;                                          // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Lvl1_Lightray_Color;                                      // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Lvl2_Lightray_Color;                                      // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           Material_PPT_Confetti;                                    // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_PinataEyeLeft;                                        // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_PinataEyeRight;                                       // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ChosenWeaponNumber;                                       // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Llama_Appear;                                       // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_CurrentWeaponReady;                                 // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_CurrentWeaponSwing;                                 // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_CurrentWeaponImpact;                                // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ChargeAttackLoop;                                   // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Upgrade_Silver;                                     // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Upgrade_Gold;                                       // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Open_Normal;                                        // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Open_Silver;                                        // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Open_Gold;                                          // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Greet_Current;                               // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenNormal_Current;                          // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_UpgradeSilver_Current;                       // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_UpgradeGold_Current;                         // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenSilver_Current;                          // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenGold_Current;                            // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_SweepUp;                                            // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VO_Upgrade_Delay;                                         // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	class AFort_Entry_Music_Controller_BP_C*           Fort_Entry_Music_Controller;                              // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_PreHit_Current;                              // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Music_Drop;                                         // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Music_Open;                                         // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeHeldDown;                                             // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      WeaponObject;                                             // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FVector>                             WeaponListOffsetLoc;                                      // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AStoreWeaponMaster_BP_C*                     SpawnedWeaponBlueprint;                                   // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AStoreCamera_Blueprint_C*                    StoreCameraInLevel;                                       // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttackLeftMousePressed;                                   // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	class AStoreCardReveal_BP_C*                       StoreCardRevealInLevel;                                   // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountOfWeapons;                                          // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_PPT_Foil;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPinataScreenshot;                                    // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	float                                              DirLightA_BaseSetting;                                    // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RimLight01_A_BaseSetting;                                 // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpotLightMain_B_BaseSetting;                              // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RimLight_B_BaseSetting;                                   // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirLight_B_BaseSetting;                                   // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugUseSpecificWeapon;                                   // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	class UFortPackPersonality*                        CurrentPackPersonality;                                   // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_PinataSmashed;                                      // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_PinataBonked;                                       // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LetTickUpdate;                                            // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0xF];                                       // 0x0781(0x000F) MISSED OFFSET
	struct FTransform                                  MeleeWeaponPreAttackTrans;                                // 0x0790(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackPlayRate;                                           // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0xC];                                       // 0x07C4(0x000C) MISSED OFFSET
	struct FTransform                                  MeleeWeaponHiddenTrans;                                   // 0x07D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MeleeWeaponAttackFinishTrans;                             // 0x0800(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MeleeWeaponChargeTrans;                                   // 0x0830(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MeleeWeaponPreChargeTrans;                                // 0x0860(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MeleeWeaponEquipDefaultTrans;                             // 0x0890(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MeleeWeaponEquipAdjustedTrans;                            // 0x08C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      PinataSKMeshComponent;                                    // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimSequence*                               AnimDrop;                                                 // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimHit;                                                  // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimHitUpgradeA;                                          // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimHitUpgradeB;                                          // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimDestroy;                                              // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimDestroyUpgradeA;                                      // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimDestroyUpgradeB;                                      // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightEyeBoneName;                                         // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftEyeBoneName;                                          // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BodyRootBoneName;                                         // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCardRevealInLevel;                                   // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0949(0x0003) MISSED OFFSET
	float                                              RimLight02_A_BaseSetting;                                 // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LetTickUpdateEyes;                                        // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstCard;                                                // 0x0951(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugLevel3_;                                             // 0x0952(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PackIsUpgrade3;                                           // 0x0953(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasAttacked4X;                                            // 0x0954(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0955(0x0003) MISSED OFFSET
	class UAnimSequence*                               AnimHitUpgradeC;                                          // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimDestroyUpgradeC;                                      // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Lvl3_Lightray_Color;                                      // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Explode_Lvl_3;                                            // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Falling_Debris_Lvl_3;                                     // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Llama_Hit_Lvl_2;                                          // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                CandyPhysicsComponentsArray;                              // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TotalCandySpawned;                                        // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalCandyAllowable;                                      // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopCandySpawn;                                           // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x09A9(0x0003) MISSED OFFSET
	int                                                CandySpawnedTillSlowDown;                                 // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SlowCandySpawn;                                           // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowOpenAllPacks;                                         // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpenAllPacks;                                             // 0x09B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpenAllPacksFirstCycle;                                   // 0x09B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsES2Limited;                                             // 0x09B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPinataMobile;                                        // 0x09B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugWeapons;                                             // 0x09B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x1];                                       // 0x09B7(0x0001) MISSED OFFSET
	class UClass*                                      LoadedWeaponClass;                                        // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          RegularMaterial_Confetti;                                 // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseSpecificWeapon;                                        // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_LlamaLeather;                                         // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        SpecialProp1;                                             // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                RandomWeaponClass;                                        // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreviousRandomWeaponClass;                                // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             WeaponListOffsetLoc_Backup;                               // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugLightingPC;                                          // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugLightingLOW;                                         // 0x09F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x6];                                       // 0x09FA(0x0006) MISSED OFFSET
	class ABoxReflectionCapture*                       ReflectionCaptureActor;                                   // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_LlamaRope;                                            // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionedFromOpeningPacks;                             // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorePinataMaster_BP.StorePinataMaster_BP_C");
		return ptr;
	}


	void SwitchLightingLOW(bool Visibility);
	void SwitchLightingPC(bool Visibility);
	void ChooseRandomWeapon();
	void PackPersonalitySounds();
	void DefinePinataAssets();
	void UserConstructionScript();
	void TL_DarkenBG__FinishedFunc();
	void TL_DarkenBG__UpdateFunc();
	void TL_UndarkenBG__FinishedFunc();
	void TL_UndarkenBG__UpdateFunc();
	void TL_RegularEyes__FinishedFunc();
	void TL_RegularEyes__UpdateFunc();
	void TL_EyesFollowMouseAgain__FinishedFunc();
	void TL_EyesFollowMouseAgain__UpdateFunc();
	void TL_ChangeLighting__FinishedFunc();
	void TL_ChangeLighting__UpdateFunc();
	void TL_CardCough__FinishedFunc();
	void TL_CardCough__UpdateFunc();
	void TL_PhaseBFade__FinishedFunc();
	void TL_PhaseBFade__UpdateFunc();
	void TL_WeaponCharge__FinishedFunc();
	void TL_WeaponCharge__UpdateFunc();
	void TL_Upgrade2__FinishedFunc();
	void TL_Upgrade2__UpdateFunc();
	void TL_Upgrade2__TasslesDropOff2__EventFunc();
	void TL_Upgrade1__FinishedFunc();
	void TL_Upgrade1__UpdateFunc();
	void TL_Upgrade1__TasslesDropOffEvent__EventFunc();
	void TL_PushbroomAnim__FinishedFunc();
	void TL_PushbroomAnim__UpdateFunc();
	void TL_PushbroomAnim__Trigger_Particles__EventFunc();
	void TL_SuspiciousEyes__FinishedFunc();
	void TL_SuspiciousEyes__UpdateFunc();
	void TL_PupilContracts__FinishedFunc();
	void TL_PupilContracts__UpdateFunc();
	void TL_DropEyeAnim__FinishedFunc();
	void TL_DropEyeAnim__UpdateFunc();
	void TL_Upgrade3__FinishedFunc();
	void TL_Upgrade3__UpdateFunc();
	void TL_Upgrade3__TasslesDropOff2__EventFunc();
	void TL_Attack__FinishedFunc();
	void TL_Attack__UpdateFunc();
	void TL_Attack__EventTrackHit__EventFunc();
	void TL_EquipWeapon__FinishedFunc();
	void TL_EquipWeapon__UpdateFunc();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(struct FKey Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(struct FKey Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(struct FKey Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1(struct FKey Key);
	void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, struct FVector Location);
	void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, struct FVector Location);
	void OnLoaded(class UClass* Loaded);
	void CardPackStoreStart();
	void ReceiveBeginPlay();
	void ReadyToAttack();
	void OpenPinata();
	void PackDestroyStart();
	void CardEnterStart();
	void StartPackOpen();
	void OnStoreStateChanged(EFortStoreState NewStoreState);
	void Stop_DropEyeAnim();
	void Stop_SwingingEyeAnim();
	void ExitCardPackStore();
	void SpawnCandy();
	void ReceiveTick(float DeltaSeconds);
	void InitiatePinata();
	void CameraResetComplete();
	void CameraTransitionComplete();
	void TransitionFromOpeningPacks();
	void HideAllOpeningPacksMeshes();
	void StartChoiceCardFlip();
	void ExecuteUbergraph_StorePinataMaster_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
