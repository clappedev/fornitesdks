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

// Class Curie.CurieComponent
// 0x0030 (0x00E0 - 0x00B0)
class UCurieComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FGameplayTag                                Identifier;                                               // 0x00B8(0x0008) (Transient)
	ECurieEntityType                                   EntityType;                                               // 0x00C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x00C1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Curie.CurieComponent");
		
		return ptr;
	}


	bool IsInteractingWithElement(const struct FGameplayTag& Element);
	bool HasStateAttached(const struct FGameplayTag& StateIdentifier);
	bool HasElementAttached(const struct FGameplayTag& ElementIdentifier);
	bool HasAnyElementAttached(const struct FGameplayTagContainer& ElementIdentifiers);
	void HandleOwningActorDestroyed(class AActor* Owner);
};


// Class Curie.CurieElementBehavior
// 0x0070 (0x0098 - 0x0028)
class UCurieElementBehavior : public UObject
{
public:
	TArray<struct FCurieEffectContainer>               OnBeginAttachmentEffects;                                 // 0x0028(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OngoingAttachmentEffects;                                 // 0x0038(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OnEndAttachmentEffects;                                   // 0x0048(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OnInstantInteractionEffects;                              // 0x0058(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OnBeginInteractionEffects;                                // 0x0068(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OngoingInteractionEffects;                                // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OnEndInteractionEffects;                                  // 0x0088(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Curie.CurieElementBehavior");
		
		return ptr;
	}

};


// Class Curie.CurieEntityStateBehavior
// 0x0078 (0x00A0 - 0x0028)
class UCurieEntityStateBehavior : public UObject
{
public:
	struct FGameplayTagContainer                       RequiredAttachedElements;                                 // 0x0028(0x0020) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       RequiredInteractingElements;                              // 0x0048(0x0020) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OnBeginEffects;                                           // 0x0068(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OngoingEffects;                                           // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCurieEffectContainer>               OnEndEffects;                                             // 0x0088(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsConsumable : 1;                                        // 0x0098(0x0001) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Curie.CurieEntityStateBehavior");
		
		return ptr;
	}

};


// Class Curie.CurieGlobals
// 0x00B8 (0x00E0 - 0x0028)
class UCurieGlobals : public UObject
{
public:
	bool                                               bEnableCurie;                                             // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSoftClassPath                              CurieGlobalsClassName;                                    // 0x0030(0x0018) (ZeroConstructor, Config)
	struct FSoftClassPath                              CurieComponentClassName;                                  // 0x0048(0x0018) (ZeroConstructor, Config)
	struct FSoftObjectPath                             MaterialDefinitionsTableName;                             // 0x0060(0x0018) (ZeroConstructor, Config)
	struct FSoftObjectPath                             ElementDefinitionsTableName;                              // 0x0078(0x0018) (ZeroConstructor, Config)
	struct FSoftObjectPath                             EntityStateDefinitionsTableName;                          // 0x0090(0x0018) (ZeroConstructor, Config)
	class UCurieComponent*                             CurieComponentClass;                                      // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDataTable*                                  MaterialDefinitionsTable;                                 // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDataTable*                                  ElementDefinitionsTable;                                  // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDataTable*                                  EntityStateDefinitionsTable;                              // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCurieStateBehaviorContainer>        KnownEntityStates;                                        // 0x00C8(0x0010) (ZeroConstructor, Transient)
	class UCurieManager*                               RegisteredCurieManager;                                   // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Curie.CurieGlobals");
		
		return ptr;
	}

};


// Class Curie.CurieInterface
// 0x0000 (0x0028 - 0x0028)
class UCurieInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Curie.CurieInterface");
		
		return ptr;
	}


	void OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);
	void OnCurieStateConsumed_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);
	void OnCurieStateAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);
	void OnCurieElementInteractEnded_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void OnCurieContainerShutdown_BP(const struct FCurieContainerHandle& CurieContainerHandle);
	void OnCurieContainerInitialized_BP(const struct FCurieContainerHandle& CurieContainerHandle);
};


// Class Curie.CurieManager
// 0x00A8 (0x0158 - 0x00B0)
class UCurieManager : public UGameStateComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00B0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Curie.CurieManager");
		
		return ptr;
	}


	void UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void BindDelegateForCurieStateDetached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void BindDelegateForCurieStateAttached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void BindDelegateForCurieElementInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void BindDelegateForCurieElementDetached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
	void BindDelegateForCurieElementAttached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
