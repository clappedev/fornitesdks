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

// Class EntityActor.ActorToEntityAdapterComponent
// 0x0020 (0x00D0 - 0x00B0)
class UActorToEntityAdapterComponent : public UActorComponent
{
public:
	int                                                EntityID;                                                 // 0x00B0(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	TArray<class UEntityComponent*>                    SerializedComponents;                                     // 0x00B8(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.ActorToEntityAdapterComponent");
		
		return ptr;
	}

};


// Class EntityActor.EntityActorCollisionComponent
// 0x0078 (0x00F0 - 0x0078)
class UEntityActorCollisionComponent : public UEntityEnableableComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0078(0x0048) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EntityActor.EntityActorCollisionComponent.PrimitiveComponentCache
	unsigned char                                      UnknownData02[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorCollisionComponent");
		
		return ptr;
	}


	void OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class EntityActor.EntityActorCustomReplicationComponent
// 0x0008 (0x0060 - 0x0058)
class UEntityActorCustomReplicationComponent : public UEntityComponent
{
public:
	TEnumAsByte<EEntityActorReplicationOverrideType>   ReplicationOverride;                                      // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEntityActorReplicationRelevancyBucketType> ReplicationRelevancyBucketType;                           // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              CustomReplicationRelevancyRange;                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorCustomReplicationComponent");
		
		return ptr;
	}

};


// Class EntityActor.EntityActorLocalInputComponent
// 0x0008 (0x0060 - 0x0058)
class UEntityActorLocalInputComponent : public UEntityComponent
{
public:
	TEnumAsByte<EAutoReceiveInput>                     AutoReceiveControllerInput;                               // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorLocalInputComponent");
		
		return ptr;
	}

};


// Class EntityActor.EntityActorPlayerComponent
// 0x0078 (0x00D8 - 0x0060)
class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EntityActor.EntityActorPlayerComponent.PlayerControllerCache
	unsigned char                                      UnknownData01[0x28];                                      // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EntityActor.EntityActorPlayerComponent.PlayerStateCache
	struct FUniqueNetIdRepl                            PlayerId;                                                 // 0x00B0(0x0028)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorPlayerComponent");
		
		return ptr;
	}

};


// Class EntityActor.EntityActorPositionComponent
// 0x0018 (0x0078 - 0x0060)
class UEntityActorPositionComponent : public UEntityPositionComponent
{
public:
	struct FVector                                     ShadowVar_Location;                                       // 0x0060(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x006C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorPositionComponent");
		
		return ptr;
	}


	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};


// Class EntityActor.EntityActorRotationComponent
// 0x0018 (0x0078 - 0x0060)
class UEntityActorRotationComponent : public UEntityRotationComponent
{
public:
	struct FRotator                                    ShadowVar_Rotation;                                       // 0x0060(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x006C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorRotationComponent");
		
		return ptr;
	}


	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};


// Class EntityActor.EntityActorScaleComponent
// 0x0018 (0x0078 - 0x0060)
class UEntityActorScaleComponent : public UEntityScaleComponent
{
public:
	struct FVector                                     ShadowVar_Scale;                                          // 0x0060(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x006C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorScaleComponent");
		
		return ptr;
	}


	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};


// Class EntityActor.EntityActorSkeletalMeshRenderComponent
// 0x0020 (0x0078 - 0x0058)
class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
	class USkeletalMesh*                               ShadowVar_SkeletalMesh;                                   // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     ShadowVar_EnableCollision;                                // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorSkeletalMeshRenderComponent");
		
		return ptr;
	}

};


// Class EntityActor.EntityActorStaticMeshRenderComponent
// 0x0030 (0x00A8 - 0x0078)
class UEntityActorStaticMeshRenderComponent : public UEntityEnableableComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	class UStaticMesh*                                 ShadowVar_StaticMesh;                                     // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  ShadowVar_MeshMaterials;                                  // 0x0090(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ECollisionEnabled>                     ShadowVar_EnableCollision;                                // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TargetMeshIndex;                                          // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShadowVar_Visible : 1;                                    // 0x00A2(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00A3(0x0001) MISSED OFFSET
	float                                              ShadowVar_MaxDrawDistance;                                // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorStaticMeshRenderComponent");
		
		return ptr;
	}

};


// Class EntityActor.EntityActorSubsystem
// 0x0020 (0x0050 - 0x0030)
class UEntityActorSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorSubsystem");
		
		return ptr;
	}

};


// Class EntityActor.EntityActorTextDisplayComponent
// 0x0028 (0x0080 - 0x0058)
class UEntityActorTextDisplayComponent : public UEntityComponent
{
public:
	struct FText                                       DisplayText;                                              // 0x0058(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityActorTextDisplayComponent");
		
		return ptr;
	}


	void SetWorldSize(float Value);
	void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);
	void SetTextRenderColor(const struct FColor& Value);
	void SetText(const struct FText& Text);
	void SetRelativeScale(const struct FVector& RelativeScale);
	void SetRelativeRotation(const struct FRotator& RelativeRotation);
	void SetRelativeLocation(const struct FVector& RelativeLocation);
	void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
	float GetWorldSize();
	TEnumAsByte<EVerticalTextAligment> GetVerticalAlignment();
	struct FColor GetTextRenderColor();
	struct FText GetText();
	struct FVector GetRelativeLocation();
	TEnumAsByte<EHorizTextAligment> GetHorizontalAlignment();
};


// Class EntityActor.EntityDynamicActivationComponent
// 0x0038 (0x00B0 - 0x0078)
class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	float                                              TransitionTargetTime;                                     // 0x0080(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTargetState;                                             // 0x0084(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	TArray<class UEntityComponent*>                    LinkedComponents;                                         // 0x0088(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityDynamicActivationComponent");
		
		return ptr;
	}


	void OnRep_TransitionTarget();
	void OnEnabledChanged(bool bIsEnabled);
};


// Class EntityActor.EntityToActorAdapterComponent
// 0x0008 (0x0060 - 0x0058)
class UEntityToActorAdapterComponent : public UEntityComponent
{
public:
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.EntityToActorAdapterComponent");
		
		return ptr;
	}

};


// Class EntityActor.SimObject
// 0x0000 (0x0220 - 0x0220)
class ASimObject : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityActor.SimObject");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
