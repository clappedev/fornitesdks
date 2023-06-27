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

// BlueprintGeneratedClass LandscapeWaterInfo.LandscapeWaterInfo_C
// 0x0070 (0x0290 - 0x0220)
class ALandscapeWaterInfo_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Flood_Water_Level;                                        // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	class UTexture2D*                                  Game_Texture__Water_Velocity_and_Height;                  // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FTransform                                  LS_Transform;                                             // 0x0240(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   LS_RT_Res;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Quad_Size;                                                // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Terrain_Velocity_and_Height_Texture;                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    External_Water_MID_To_Update;                             // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LandscapeWaterInfo.LandscapeWaterInfo_C");
		
		return ptr;
	}


	void UpdateGameTexture();
	void Update_Water_MID(class UTexture* Texture);
	void Set_Water_MPC_Values();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Set_Flood_Water_Level();
	void ExecuteUbergraph_LandscapeWaterInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
