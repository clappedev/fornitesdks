#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary");
		return ptr;
	}


	void STATIC_StopWebCam();
	void STATIC_StopBroadcastingGame();
	void STATIC_StartWebCam();
	void STATIC_StartBroadcastingGame();
	void STATIC_IsWebCamEnabled();
	void STATIC_IsBroadcastingGame();
};


// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
