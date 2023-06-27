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

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x02C0 - 0x02C0)
class UAnimSequencerInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		
		return ptr;
	}

};


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		
		return ptr;
	}


	void STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos);
	void STATIC_K2_StartProfilingTimer();
	struct FVector STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	float STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	struct FTransform STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
	float STATIC_K2_EndProfilingTimer(bool bLog, const struct FString& LogPrefix);
	float STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	struct FVector STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo);
	float STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, const struct FVector& OffsetInBoneSpace, int NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve, struct FPositionHistory* History);
	float STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& position, int NumberOfSamples, float VelocityMin, float VelocityMax, struct FPositionHistory* History);
};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UPlayMontageCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnCompleted
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnBlendOut
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnInterrupted
	unsigned char                                      UnknownData03[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBegin
	unsigned char                                      UnknownData04[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEnd
	unsigned char                                      UnknownData05[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		
		return ptr;
	}


	void OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
};


// Class AnimGraphRuntime.SequencerAnimationSupport
// 0x0000 (0x0028 - 0x0028)
class USequencerAnimationSupport : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SequencerAnimationSupport");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
