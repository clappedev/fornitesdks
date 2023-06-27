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

// BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C
// 0x0080 (0x0960 - 0x08E0)
class AStoreCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh_DarkenBG;                                            // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            CameraPlaceholderGround;                                  // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0;   // 0x08F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0;   // 0x08FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ChoicePack;                                               // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9;   // 0x0908(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9;   // 0x090C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x090D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraGroundLoc;                                          // 0x0918(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraGroundRot;                                          // 0x0924(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraOriginalLoc;                                        // 0x0930(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraOriginalRot;                                        // 0x093C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CameraInStartPos;                                         // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x0949(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x094A(0x0006) MISSED OFFSET
	class AStorePinataMaster_Parent_C*                 PinataInLevel;                                            // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AStoreCardReveal_Parent_C*                   CardRevealInLevel;                                        // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ChoicePack__FinishedFunc();
	void ChoicePack__UpdateFunc();
	void OnActivated();
	void OnDeactivated();
	void OpeningCameraTransition();
	void ResetCamera();
	void DarkenBGVisibility(bool Enable);
	void ChoicePackFOV_Out();
	void ChoicePackFOV_In();
	void ExecuteUbergraph_StoreCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
