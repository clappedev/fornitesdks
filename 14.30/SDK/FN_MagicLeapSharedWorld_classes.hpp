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

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// 0x00D0 (0x03D8 - 0x0308)
class AMagicLeapSharedWorldGameMode : public AGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                          // 0x0308(0x0010) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.OnNewLocalDataFromClients
	float                                              PinSelectionConfidenceThreshold;                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA4];                                      // 0x032C(0x00A4) MISSED OFFSET
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode");
		
		return ptr;
	}


	bool SendSharedWorldDataToClients();
	void SelectChosenOne();
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// 0x0040 (0x02D0 - 0x0290)
class AMagicLeapSharedWorldGameState : public AGameState
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                          // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FMagicLeapSharedWorldAlignmentTransforms    AlignmentTransforms;                                      // 0x02A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnSharedWorldDataUpdated
	unsigned char                                      UnknownData01[0x10];                                      // 0x02C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnAlignmentTransformsUpdated

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState");
		
		return ptr;
	}


	void OnReplicate_SharedWorldData();
	void OnReplicate_AlignmentTransforms();
	void MagicLeapSharedWorldEvent__DelegateSignature();
	struct FTransform CalculateXRCameraRootTransform();
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// 0x0018 (0x0588 - 0x0570)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0570(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController");
		
		return ptr;
	}


	void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
	void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
	bool IsChosenOne();
	void ClientSetChosenOne(bool bChosenOne);
	void ClientMarkReadyForSendingLocalData();
	bool CanSendLocalDataToServer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
