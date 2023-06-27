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

// BlueprintGeneratedClass StoreCardReveal_BP.StoreCardReveal_BP_C
// 0x06A6 (0x08F6 - 0x0250)
class AStoreCardReveal_BP_C : public AStoreCardReveal_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CC_DummyLocInstalled_Bounce;                              // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocShowFlipped_CCBounce;                         // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CC_DummyPre_Install;                                      // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocShowFlipped;                                  // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessCardRevealB;                                   // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessCardRevealA;                                   // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ChoiceCardDestroy_Cue;                                    // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_CC_QuestionMark;                                        // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CC_QuestionMarkDummyLarge;                                // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CCA_DummyLocDeath;                                        // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CCB_DummyLocDeath;                                        // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_ChoiceCardB;                                            // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_ChoiceCardA;                                            // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CC_CardDummyLocShow;                                      // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CCB_DummyLocShowRot;                                      // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CCA_DummyLocShowRot;                                      // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CCA_DummyLocShow;                                         // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CCB_DummyLocShow;                                         // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CC_DummyLocInstalled;                                     // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CCA_DummyLocHide;                                         // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         ChoiceCardSpotLight;                                      // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             CardRootORIGLOC;                                          // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       ChoiceCardPostProcess;                                    // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FastForward_AudioComponent;                               // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocExit;                                         // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocHide;                                         // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CardDummyLocShow;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             CardRoot;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GroundRoot;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            CCB_Count;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            CCA_Count;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            CCB_Name;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            CCA_Name;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FireAshes_B;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FireAshes_A;                                            // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CC_QuestionMarkDummySmall;                                // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_DataCardStatic;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_CC_QuestionMarkInside;                                  // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCardGlowBasic;                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_ChoiceCard_B_BGFX;                                      // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_ChoiceCard_A_BGFX;                                      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_SceneDarken;                                            // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            CardFrontWidget;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCardGlow;                                     // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_CardReveal_Rays;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCard_Rays;                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_VindertechCard01;                                       // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_GroundPlaceholder;                                      // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CC_DataDiskBurns_EmissiveFade01_C4F384FF467C667ECC255EB28CDEAD75;// 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_DataDiskBurns_RarityAndScreenFade_C4F384FF467C667ECC255EB28CDEAD75;// 0x03DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_DataDiskBurns_DataDisk_DeathDirectOpacity_C4F384FF467C667ECC255EB28CDEAD75;// 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_DataDiskBurns_DataDisk_DeathMaster_C4F384FF467C667ECC255EB28CDEAD75;// 0x03E4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CC_DataDiskBurns__Direction_C4F384FF467C667ECC255EB28CDEAD75;// 0x03E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_CC_DataDiskBurns;                                      // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FadeOtherEmissive;                 // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FadeScreenEmissiveMaster;          // 0x03FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FlashFadeUpgradeColors;            // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_SubtleyMoveOutMainCard;            // 0x0404(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FadeInSceneDarkenMaterial;         // 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_Q_Opacity_Fade;                    // 0x040C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CC_QuestionMarkAnim_FadeQInSlowly;                     // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CC_QuestionMarkAnim__Direction;                        // 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CC_QuestionMarkAnim;                                   // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeInRegularEmissive;         // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeInIconScreen;              // 0x0424(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_InstallCCBounceMain;           // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_Install2CC_LerpLoc;            // 0x042C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_InstallCCLerpRot;              // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_CCDeath_FadeOutSound;          // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_CCDeathMaterial_DeathDirectOpacity;// 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeSceneDarkenBackOut;        // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeSpotlight;                 // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_MoveParentCardBackToNormalPos; // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_InstallCCLerpLoc;              // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_CCDeath_Loc;                   // 0x044C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_CCDeathMaterial_DeathMaster;   // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeQ;                         // 0x0454(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FadeFlare;                     // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_SelectedChoiceCardAnims_FlourishFlare;                 // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_SelectedChoiceCardAnims__Direction;                    // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_SelectedChoiceCardAnims;                               // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CCB_Reveal_RevealRotation_E1D990B64CDA6EF98CA6C6B5EC7169B0;// 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCB_Reveal_AddLocation_E1D990B64CDA6EF98CA6C6B5EC7169B0;// 0x0474(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCB_Reveal_Rotation_E1D990B64CDA6EF98CA6C6B5EC7169B0;  // 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCB_Reveal_LerpWorldLoc_E1D990B64CDA6EF98CA6C6B5EC7169B0;// 0x047C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CCB_Reveal__Direction_E1D990B64CDA6EF98CA6C6B5EC7169B0;// 0x0480(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_CCB_Reveal;                                            // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CCA_Reveal_DelayAmount;                                // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCA_Reveal_RevealRotation;                             // 0x0494(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCA_Reveal_AddLocation;                                // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCA_Reveal_Rotation;                                   // 0x049C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCA_Reveal_LerpWorldLoc;                               // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CCA_Reveal__Direction;                                 // 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CCA_Reveal;                                            // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_Reveal_CC_Choices_FadeInChoiceCardPost;                // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_Reveal_CC_Choices_CCSpotFadeIn;                        // 0x04B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Reveal_CC_Choices__Direction;                          // 0x04B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_Reveal_CC_Choices;                                     // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CardMoveToScreen_PPBlend01;                            // 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CardMoveToScreen_Rotation;                             // 0x04CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CardMoveToScreen_LerpWorldLoc;                         // 0x04D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardMoveToScreen__Direction;                           // 0x04D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CardMoveToScreen;                                      // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CardUpgradeFast_PushGlow;                              // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CardUpgradeFast_RaysFader;                             // 0x04E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CardUpgradeFast_CardUpgradeLerpAmtA;                   // 0x04E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardUpgradeFast__Direction;                            // 0x04EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CardUpgradeFast;                                       // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_ClearPostProcessDOFSettings_NewTrack;                  // 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_ClearPostProcessDOFSettings__Direction_E9654CE64B23411962976AA13C3F7D8B;// 0x04FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_ClearPostProcessDOFSettings;                           // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CCB_AmbientAnim_Noise3_E46E9F8349C15D0AD549D7BDBA85CD06;// 0x0508(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCB_AmbientAnim_Noise2_E46E9F8349C15D0AD549D7BDBA85CD06;// 0x050C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCB_AmbientAnim_Noise1_E46E9F8349C15D0AD549D7BDBA85CD06;// 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CCB_AmbientAnim__Direction_E46E9F8349C15D0AD549D7BDBA85CD06;// 0x0514(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CCB_AmbientAnim;                                       // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CCA_AmbientAnim_Noise3_D0F0F85F4E679E6EFE20D8B0C33E4C8F;// 0x0520(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCA_AmbientAnim_Noise2_D0F0F85F4E679E6EFE20D8B0C33E4C8F;// 0x0524(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CCA_AmbientAnim_Noise1_D0F0F85F4E679E6EFE20D8B0C33E4C8F;// 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CCA_AmbientAnim__Direction_D0F0F85F4E679E6EFE20D8B0C33E4C8F;// 0x052C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CCA_AmbientAnim;                                       // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CC_FlareFX_NewTrack;                                   // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CC_FlareFX__Direction_FB393D144ADF530367DF8CA361F07C5B;// 0x053C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CC_FlareFX;                                            // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_MouseoverCC_B_End_CCBMOEFres;                          // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_MouseoverCC_B_End_NewTrack;                            // 0x054C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MouseoverCC_B_End__Direction;                          // 0x0550(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0551(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MouseoverCC_B_End;                                     // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_MouseoverCC_A_End_CCaMOEFres_DBB7CB8C4047097B3D9B15ACE43DDA8D;// 0x0560(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_MouseoverCC_A_End_NewTrack;                            // 0x0564(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MouseoverCC_A_End__Direction_DBB7CB8C4047097B3D9B15ACE43DDA8D;// 0x0568(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MouseoverCC_A_End;                                     // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_MouseoverCC_B_CCBMOFres;                               // 0x0578(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_MouseoverCC_B_NewTrack;                                // 0x057C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MouseoverCC_B__Direction;                              // 0x0580(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MouseoverCC_B;                                         // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_MouseoverCC_A_CCAMOFres;                               // 0x0590(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_MouseoverCC_A_CCAMOScale;                              // 0x0594(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MouseoverCC_A__Direction;                              // 0x0598(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MouseoverCC_A;                                         // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CardFlipToFront_NewTrack;                              // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardFlipToFront__Direction;                            // 0x05AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CardFlipToFront;                                       // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CardExit_PPtoBGChange;                                 // 0x05B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_CardExit_BlendToExitLoc;                               // 0x05BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CardExit__Direction;                                   // 0x05C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_CardExit;                                              // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LiveCardLocBeforeExit;                                    // 0x05D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LiveCardRotBeforeExit;                                    // 0x05DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UserFF_Pressed;                                           // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortRarity                                        CurrentRarity;                                            // 0x05E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortRarity                                        TargetRarity;                                             // 0x05EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x5];                                       // 0x05EB(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_CardRarity;                                           // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_CardFoil;                                             // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CardRaysMID;                                              // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Card_Rays_Color;                                          // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_CardFlip;                                           // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Greet_Current;                               // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenNormal_Current;                          // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_UpgradeSilver_Current;                       // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_UpgradeGold_Current;                         // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenSilver_Current;                          // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_OpenGold_Current;                            // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Hover_Current;                               // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialog_Llama_Tickle_Current;                              // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USoundBase*>                          Dialog_Llama_Depressed_Greet_Array;                       // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  Sound_CardFlyAtPlayer;                                    // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_CardPutAway;                                        // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Store_Card_Summary;                                 // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Blue;                             // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Green;                            // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Purple;                           // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Gold;                             // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Store_CardUpgrade_Platinum;                         // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USoundBase*>                          Dialog_Llama_Mob_Greet_Array;                             // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Dialog_Llama_Greet_Array_Current;                         // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  Dialog_Llama_PreHit_Current;                              // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_CardGlow;                                             // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCard                                       CardData;                                                 // 0x06E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SpecialCardPause;                                         // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	class ATVPostProcessBP_C*                          TVPPEffect;                                               // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               FastForwardIsON;                                          // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableUserToFF;                                           // 0x0709(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x070A(0x0006) MISSED OFFSET
	TArray<class UFortAccountItemDefinition*>          ChoiceCardsArray;                                         // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortAccountItemDefinition*                  ChoiceCard_0;                                             // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortAccountItemDefinition*                  ChoiceCard_1;                                             // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugChoicePacks;                                         // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	int                                                DebugRarityInt;                                           // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DEBUGConsecutiveUpgrade;                                  // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RevealChoicePack;                                         // 0x0739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x073A(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_ChoiceASticker;                                       // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_ChoiceBSticker;                                       // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AStoreCamera_Blueprint_C*                    StoreCamera;                                              // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_SceneDarken;                                          // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ChoiceCardATransform;                                     // 0x0760(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ChoiceCardBTransform;                                     // 0x0790(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CC_A_Selected;                                            // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x07C1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ChoiceB_BGFX_MID;                                         // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChoiceA_BGFX_MID;                                         // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_CardIconScreen;                                       // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_QuestionMark;                                         // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_CardGlowBasic;                                        // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CC_ReadyForSelection;                                     // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound_HoverSelect;                                        // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_HoverDeselect;                                      // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  NewUpgradeSound;                                          // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_MouseClick;                                         // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_QuestionMarkInside;                                   // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_ChoiceA;                                              // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_ChoiceB;                                              // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DEBUGComponentVisibility;                                 // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0xF];                                       // 0x0831(0x000F) MISSED OFFSET
	struct FTransform                                  SelectedCCTransform;                                      // 0x0840(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreHover_CC_A;                                            // 0x0870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreHover_CC_B;                                            // 0x0871(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0xE];                                       // 0x0872(0x000E) MISSED OFFSET
	struct FTransform                                  Un_SelectedCCTransform;                                   // 0x0880(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ChoiceCardDestroy;                                  // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_DataCardFrontSticker;                                 // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_DataCard;                                             // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ChoiceCardInsert;                                   // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCardRevealInLevel;                                   // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x08D1(0x0007) MISSED OFFSET
	class UClass*                                      CardFrontWidgetClass;                                     // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpenAllPacks;                                             // 0x08E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SlomoPinata;                                              // 0x08E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightMousePressed;                                        // 0x08E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightMouseReleased;                                       // 0x08E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipUpgradeAnim;                                          // 0x08E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CardWillUpgrade;                                          // 0x08E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayFirstCard;                                           // 0x08E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x1];                                       // 0x08E7(0x0001) MISSED OFFSET
	int                                                ChoiceIndex;                                              // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnotherChoiceAvailable;                                   // 0x08EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChoiceCardHasBeenSelected;                                // 0x08ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsingGamepad;                                           // 0x08EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gamepad_On_A;                                             // 0x08EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gamepad_On_B;                                             // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               A_Hovered;                                                // 0x08F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               B_Hovered;                                                // 0x08F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CC_B_Selected;                                            // 0x08F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsES2Limited;                                             // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetCCRarityColorBool;                                     // 0x08F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreCardReveal_BP.StoreCardReveal_BP_C");
		return ptr;
	}


	void IsCurrentCardChoicePack(bool* IsChoicePack);
	void SetRarityColor_CC(int ChoiceIndex, class UMaterialInstanceDynamic* MID_Choice_Sticker);
	void SetVisibilityByItemDef(class UWidgetComponent* Widget, class UFortItemDefinition* ItemDef, bool Hide, bool* Visibility);
	void RarityEnumToText(EFortRarity InRarity, struct FText* OutRarity);
	void IsDefender(class UFortAccountItemDefinition* Object, bool* IsDefender, struct FText* Result);
	void SetText_CCB(bool Hide);
	void SetText_CCA(bool Hide);
	void UserConstructionScript();
	void TL_CardExit__FinishedFunc();
	void TL_CardExit__UpdateFunc();
	void TL_CardExit__Proceed__EventFunc();
	void TL_CardFlipToFront__FinishedFunc();
	void TL_CardFlipToFront__UpdateFunc();
	void TL_CardUpgradeFast__FinishedFunc();
	void TL_CardUpgradeFast__UpdateFunc();
	void TL_Reveal_CC_Choices__FinishedFunc();
	void TL_Reveal_CC_Choices__UpdateFunc();
	void TL_ClearPostProcessDOFSettings__FinishedFunc();
	void TL_ClearPostProcessDOFSettings__UpdateFunc();
	void TL_CC_FlareFX__FinishedFunc();
	void TL_CC_FlareFX__UpdateFunc();
	void TL_SelectedChoiceCardAnims__FinishedFunc();
	void TL_SelectedChoiceCardAnims__UpdateFunc();
	void TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc();
	void TL_SelectedChoiceCardAnims__CameraFOV__EventFunc();
	void TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc();
	void TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc();
	void TL_MouseoverCC_A__FinishedFunc();
	void TL_MouseoverCC_A__UpdateFunc();
	void TL_MouseoverCC_A_End__FinishedFunc();
	void TL_MouseoverCC_A_End__UpdateFunc();
	void TL_MouseoverCC_B__FinishedFunc();
	void TL_MouseoverCC_B__UpdateFunc();
	void TL_MouseoverCC_B_End__FinishedFunc();
	void TL_MouseoverCC_B_End__UpdateFunc();
	void TL_CCA_Reveal__FinishedFunc();
	void TL_CCA_Reveal__UpdateFunc();
	void TL_CCB_Reveal__FinishedFunc();
	void TL_CCB_Reveal__UpdateFunc();
	void TL_CC_QuestionMarkAnim__FinishedFunc();
	void TL_CC_QuestionMarkAnim__UpdateFunc();
	void TL_CCA_AmbientAnim__FinishedFunc();
	void TL_CCA_AmbientAnim__UpdateFunc();
	void TL_CCB_AmbientAnim__FinishedFunc();
	void TL_CCB_AmbientAnim__UpdateFunc();
	void TL_CC_DataDiskBurns__FinishedFunc();
	void TL_CC_DataDiskBurns__UpdateFunc();
	void TL_CC_DataDiskBurns__ChangeTexture__EventFunc();
	void TL_CardMoveToScreen__FinishedFunc();
	void TL_CardMoveToScreen__UpdateFunc();
	void OnLoaded(class UObject* Loaded);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(struct FKey Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(struct FKey Key);
	void OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6(class UObject* Loaded);
	void OnLoaded_EFC62B084995CBCCD64787B51198EA0F(class UObject* Loaded);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(struct FKey Key);
	void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, struct FVector Location);
	void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, struct FVector Location);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key);
	void OnStoreStateChanged(EFortStoreState NewStoreState);
	void StartPackOpen();
	void CardEnterStart();
	void PackDestroyStart();
	void CardFlipStart();
	void CardExitStart();
	void TurnOffFastForward();
	void CardBackRevealStart();
	void CardFrontRevealStart();
	void TurnOnFastForward();
	void EnableMouseInputOnActor();
	void ReceiveBeginPlay();
	void CardPackStoreStart();
	void SpecialCardPauseAbort();
	void PresentChoiceStart();
	void ChoiceMadeStart();
	void BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent(class UPrimitiveComponent* TouchedComponent, struct FKey ButtonPressed);
	void BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent(class UPrimitiveComponent* TouchedComponent, struct FKey ButtonPressed);
	void SkipBackRevealForChoicePack();
	void ContinueFinalChoiceCardProcess();
	void ConstructCardFront();
	void StopCCA_AmbientAnim();
	void GetReadyToShowCards();
	void Stop_CC_HoverAnims();
	void OnBeginCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent);
	void OnEndCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent);
	void HoverStart_CC_A();
	void HoverEnd_CC_A();
	void OnBeginCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent);
	void OnEndCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent);
	void HoverStart_CC_B();
	void HoverEnd_CC_B();
	void CheckHoverStatus();
	void RestartCCA_AmbientAnim();
	void StopCCB_AmbientAnim();
	void RestartCCB_AmbientAnim();
	void EnableOpenAllPacks();
	void CardInPlace();
	void CompareRarity();
	void PlayUpgradeAnim();
	void ReadyForCardToCome();
	void InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_1(float AxisValue);
	void Handle_Input_Mode_Changed(ECommonInputType bNewInputType);
	void ExitPackStore();
	void BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ResetGamepadInput();
	void OpenGamepadGate();
	void CloseGamepadGate();
	void EndQuestionMarkAnim();
	void SetCCRarityColor();
	void CCRarityColorReady();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_41(float AxisValue);
	void InitiatePinata();
	void ResetForTransition();
	void ExecuteUbergraph_StoreCardReveal_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
