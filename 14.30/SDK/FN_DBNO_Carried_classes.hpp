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

// AnimBlueprintGeneratedClass DBNO_Carried.DBNO_Carried_C
// 0x0B39 (0x2649 - 0x1B10)
class UDBNO_Carried_C : public UFortPlayerAnimInstance_DBNOCarried
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x1B18(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1B19(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x1B20(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1B50(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x1B70(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1C78(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1D80(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x1DF8(0x00C8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                  // 0x1EC0(0x01E0)
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance;                                // 0x20A0(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x2140(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x2160(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x2188(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                        // 0x21B0(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x21F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x2228(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x22A0(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x22D0(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x2318(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x2348(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x23F8(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x24C0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x2588(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x25B0(0x0028)
	EFortPlayerAnimBodyType                            __CustomProperty_my_animbodytype_BC9172D64300E6A13C48509FE2988A40;// 0x25D8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortCustomGender>                     __CustomProperty_my_gender_BC9172D64300E6A13C48509FE2988A40;// 0x25D9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Carried;                                                  // 0x25DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x25DB(0x0005) MISSED OFFSET
	class APlayerPawn_Athena_C*                        CarrierPawn;                                              // 0x25E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortPlayerAnimInstance*                     CarrierAnimBP;                                            // 0x25E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LHandIKLocation;                                          // 0x25F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LHandIKRotation;                                          // 0x25FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TempAttachLocation;                                       // 0x2608(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TempAttachRotation;                                       // 0x2614(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SubAnimPhysicsWeight;                                     // 0x2620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBeingDropped;                                           // 0x2624(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2625(0x0003) MISSED OFFSET
	float                                              DropMontagePosition;                                      // 0x2628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x262C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CarrierDropMontage;                                       // 0x2630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CarrierPickupMontage;                                     // 0x2638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBeingPickedUp;                                          // 0x2640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2641(0x0003) MISSED OFFSET
	float                                              PickupMontagePosition;                                    // 0x2644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionFromPickupToIdle;                               // 0x2648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DBNO_Carried.DBNO_Carried_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_DBNO_Carried(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
