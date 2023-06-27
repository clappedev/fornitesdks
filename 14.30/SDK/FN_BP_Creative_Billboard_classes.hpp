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

// BlueprintGeneratedClass BP_Creative_Billboard.BP_Creative_Billboard_C
// 0x00CD (0x0CA5 - 0x0BD8)
class ABP_Creative_Billboard_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             WidgetAnchor;                                             // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCreative_Enabled_Component_C*               Creative_Enabled_Component;                               // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCreative_VisibleInGame_Component_C*         VisibleInGameComponent;                                   // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMinigameLogicComponent*                 FortMinigameLogic;                                        // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortGameplayReceiverMessageComponent*       HideTextReceiverComponent;                                // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortGameplayReceiverMessageComponent*       ShowTextReceiverComponent;                                // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ToolPickingBox;                                           // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x0C18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     UserDefinedText;                                          // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShowBorder;                                              // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C31(0x0003) MISSED OFFSET
	struct FLinearColor                                BackgroundColor;                                          // 0x0C34(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          HorizontalTextAlignment;                                  // 0x0C44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C45(0x0003) MISSED OFFSET
	int                                                TextSize;                                                 // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ViewDistance;                                             // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // 0x0C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnabledIndex;                                             // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TextFont;                                                 // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Debug_Text;                                          // 0x0C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C69(0x0003) MISSED OFFSET
	struct FRotator                                    BackgroundRelativeRotationWithBorder;                     // 0x0C6C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BackgroundRelativeRotationWithoutBorder;                  // 0x0C78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OutlineStrength;                                          // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBillboardshadowDirection>             DropShadow;                                               // 0x0C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0C89(0x0003) MISSED OFFSET
	float                                              Shadow_Divisor;                                           // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidgetComponent*                            WidgetComponent;                                          // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCreative_Background_Widget_C*               Widget;                                                   // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MinTextSize;                                              // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortMinigameState                                 Last_State_Updated;                                       // 0x0CA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Creative_Billboard.BP_Creative_Billboard_C");
		
		return ptr;
	}


	void GetCreativeActorOrigin(bool* Override, struct FVector* Center);
	void GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds);
	class UStaticMesh* GetCollisionStaticMesh();
	TArray<class UMeshComponent*> GetMeshComponents();
	void Update_Last_Game_State_Enable_Changed();
	void Text_Visibility_On_Game_State(EFortMinigameState New_State);
	void Create_Widget();
	void SetShadow();
	void SetTextFont();
	void SetViewDistance();
	void SetTextColor();
	void UpdateProperties();
	void SetDisplayText();
	void SetTextAlignment();
	void SetTextSize();
	void SetBackgroundColor();
	void PostUpdateProperties();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator);
	void BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator);
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void Update_Static_Mesh_Component_Visibility_Options();
	void BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On_Visibility_Changed__DelegateSignature(bool Visible);
	void OnWorldReady();
	void Initialize_Device();
	void BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On_Enabled_State_Changed__DelegateSignature(bool Enabled);
	void ReceiveBeginPlay();
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);
	void Initialize_Minigame_Options(class AFortMinigame* Minigame);
	void ExecuteUbergraph_BP_Creative_Billboard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
