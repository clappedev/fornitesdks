#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Engine.Actor
// 0x0360 (0x0388 - 0x0028)
class AActor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x360];                                     // 0x0028(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}

};


// Class Engine.BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintFunctionLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_MakeStringAssetReference();
};


// Class Engine.DataAsset
// 0x0000 (0x0028 - 0x0028)
class UDataAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}

};


// Class Engine.ActorComponent
// 0x00C8 (0x00F0 - 0x0028)
class UActorComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}

};


// Class Engine.SceneComponent
// 0x01A0 (0x0290 - 0x00F0)
class USceneComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x00F0(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}

};


// Class Engine.PrimitiveComponent
// 0x03E0 (0x0670 - 0x0290)
class UPrimitiveComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0290(0x03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}

};


// Class Engine.PrimaryDataAsset
// 0x0000 (0x0028 - 0x0028)
class UPrimaryDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryDataAsset");
		return ptr;
	}

};


// Class Engine.Info
// 0x0000 (0x0388 - 0x0388)
class AInfo : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.WorldSettings
// 0x01A8 (0x0530 - 0x0388)
class AWorldSettings : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0388(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSettings");
		return ptr;
	}

};


// Class Engine.MeshComponent
// 0x0110 (0x0780 - 0x0670)
class UMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0670(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}

};


// Class Engine.StaticMeshComponent
// 0x0060 (0x07E0 - 0x0780)
class UStaticMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0780(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}

};


// Class Engine.Pawn
// 0x0060 (0x03E8 - 0x0388)
class APawn : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0388(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}

};


// Class Engine.Character
// 0x03B8 (0x07A0 - 0x03E8)
class ACharacter : public APawn
{
public:
	unsigned char                                      UnknownData00[0x3B8];                                     // 0x03E8(0x03B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}

};


// Class Engine.Controller
// 0x0068 (0x03F0 - 0x0388)
class AController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	class APawn*                                       Pawn;                                                     // 0x0390(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	class ACharacter*                                  Character;                                                // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x03B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}

};


// Class Engine.AISystemBase
// 0x0020 (0x0048 - 0x0028)
class UAISystemBase : public UObject
{
public:
	struct FStringClassReference                       AISystemClassName;                                        // 0x0028(0x0010) (Config, GlobalConfig, NoClear)
	struct FName                                       AISystemModuleName;                                       // 0x0038(0x0008) (ZeroConstructor, Config, GlobalConfig, NoClear, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISystemBase");
		return ptr;
	}

};


// Class Engine.AnimInstance
// 0x0330 (0x0358 - 0x0028)
class UAnimInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x0028(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}

};


// Class Engine.BlueprintAsyncActionBase
// 0x0000 (0x0028 - 0x0028)
class UBlueprintAsyncActionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintAsyncActionBase");
		return ptr;
	}


	void Activate();
};


// Class Engine.Engine
// 0x0C68 (0x0C90 - 0x0028)
class UEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC68];                                     // 0x0028(0x0C68) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.Player
// 0x0020 (0x0048 - 0x0028)
class UPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class APlayerController*                           PlayerController;                                         // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.LocalPlayer
// 0x0180 (0x01C8 - 0x0048)
class ULocalPlayer : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0048(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}

};


// Class Engine.GameModeBase
// 0x00A0 (0x0428 - 0x0388)
class AGameModeBase : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0388(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameModeBase");
		return ptr;
	}

};


// Class Engine.GameMode
// 0x0048 (0x0470 - 0x0428)
class AGameMode : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0428(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}

};


// Class Engine.AnimNotify
// 0x0010 (0x0038 - 0x0028)
class UAnimNotify : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}


	void Received_Notify();
	void GetNotifyName();
};


// Class Engine.AnimNotify_PlaySound
// 0x0020 (0x0058 - 0x0038)
class UAnimNotify_PlaySound : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlaySound");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlayParticleEffect
// 0x0048 (0x0080 - 0x0038)
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotifyState
// 0x0008 (0x0030 - 0x0028)
class UAnimNotifyState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState");
		return ptr;
	}


	void Received_NotifyTick();
	void Received_NotifyEnd();
	void Received_NotifyBegin();
	void GetNotifyName();
};


// Class Engine.AssetManager
// 0x0388 (0x03B0 - 0x0028)
class UAssetManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x388];                                     // 0x0028(0x0388) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManager");
		return ptr;
	}

};


// Class Engine.MovementComponent
// 0x0048 (0x0138 - 0x00F0)
class UMovementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovementComponent");
		return ptr;
	}

};


// Class Engine.NavMovementComponent
// 0x0038 (0x0170 - 0x0138)
class UNavMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0138(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMovementComponent");
		return ptr;
	}

};


// Class Engine.PawnMovementComponent
// 0x0008 (0x0178 - 0x0170)
class UPawnMovementComponent : public UNavMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnMovementComponent");
		return ptr;
	}

};


// Class Engine.CameraActor
// 0x04F8 (0x0880 - 0x0388)
class ACameraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4F8];                                     // 0x0388(0x04F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}

};


// Class Engine.PlayerController
// 0x02D8 (0x06C8 - 0x03F0)
class APlayerController : public AController
{
public:
	class UPlayer*                                     Player;                                                   // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x03F8(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}

};


// Class Engine.CheatManager
// 0x0050 (0x0078 - 0x0028)
class UCheatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}

};


// Class Engine.ScriptViewportClient
// 0x0008 (0x0030 - 0x0028)
class UScriptViewportClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x0540 (0x0570 - 0x0030)
class UGameViewportClient : public UScriptViewportClient
{
public:
	unsigned char                                      UnknownData00[0x540];                                     // 0x0030(0x0540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}

};


// Class Engine.Console
// 0x0108 (0x0130 - 0x0028)
class UConsole : public UObject
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0028(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}

};


// Class Engine.GameStateBase
// 0x0040 (0x03C8 - 0x0388)
class AGameStateBase : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0388(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameStateBase");
		return ptr;
	}

};


// Class Engine.GameState
// 0x0020 (0x03E8 - 0x03C8)
class AGameState : public AGameStateBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameState");
		return ptr;
	}

};


// Class Engine.DeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UDeveloperSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeveloperSettings");
		return ptr;
	}

};


// Class Engine.NavRelevantComponent
// 0x0030 (0x0120 - 0x00F0)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantComponent");
		return ptr;
	}

};


// Class Engine.NavLinkCustomComponent
// 0x0110 (0x0230 - 0x0120)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0120(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkCustomComponent");
		return ptr;
	}

};


// Class Engine.Emitter
// 0x0050 (0x03D8 - 0x0388)
class AEmitter : public AActor
{
public:
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0390(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0x0050 (0x0CE0 - 0x0C90)
class UGameEngine : public UEngine
{
public:
	class UGameInstance*                               GameInstance;                                             // 0x0C90(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0C98(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.EmitterCameraLensEffectBase
// 0x0068 (0x0440 - 0x03D8)
class AEmitterCameraLensEffectBase : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03D8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}

};


// Class Engine.GameInstance
// 0x00C8 (0x00F0 - 0x0028)
class UGameInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstance");
		return ptr;
	}

};


// Class Engine.PlayerInput
// 0x0370 (0x0398 - 0x0028)
class UPlayerInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET
	TArray<struct FKeyBind>                            DebugExecBindings;                                        // 0x0120(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x268];                                     // 0x0130(0x0268) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}

};


// Class Engine.Brush
// 0x0038 (0x03C0 - 0x0388)
class ABrush : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0388(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.Volume
// 0x0000 (0x03C0 - 0x03C0)
class AVolume : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

};


// Class Engine.GameSession
// 0x0018 (0x03A0 - 0x0388)
class AGameSession : public AInfo
{
public:
	int                                                MaxSpectators;                                            // 0x0388(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x038C(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameSession");
		return ptr;
	}

};


// Class Engine.GameUserSettings
// 0x00E0 (0x0108 - 0x0028)
class UGameUserSettings : public UObject
{
public:
	bool                                               bUseVSync;                                                // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0029(0x004F) MISSED OFFSET
	uint32_t                                           ResolutionSizeX;                                          // 0x0078(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ResolutionSizeY;                                          // 0x007C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           LastUserConfirmedResolutionSizeX;                         // 0x0080(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           LastUserConfirmedResolutionSizeY;                         // 0x0084(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WindowPosX;                                               // 0x0088(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WindowPosY;                                               // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                FullscreenMode;                                           // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LastConfirmedFullscreenMode;                              // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreferredFullscreenMode;                                  // 0x0098(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           Version;                                                  // 0x009C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioQualityLevel;                                        // 0x00A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              FrameRateLimit;                                           // 0x00A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A8(0x0004) MISSED OFFSET
	int                                                DesiredScreenWidth;                                       // 0x00AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDesiredScreenHeight;                                  // 0x00B0(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                DesiredScreenHeight;                                      // 0x00B4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              LastRecommendedScreenWidth;                               // 0x00B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              LastRecommendedScreenHeight;                              // 0x00BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              LastCPUBenchmarkResult;                                   // 0x00C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              LastGPUBenchmarkResult;                                   // 0x00C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x00C8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUserSettings");
		return ptr;
	}

};


// Class Engine.DataTable
// 0x0060 (0x0088 - 0x0028)
class UDataTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTable");
		return ptr;
	}

};


// Class Engine.NavigationData
// 0x01A0 (0x0528 - 0x0388)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0388(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationData");
		return ptr;
	}

};


// Class Engine.World
// 0x0978 (0x09A0 - 0x0028)
class UWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class ULevel*                                      PersistentLevel;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x960];                                     // 0x0040(0x0960) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}

};


// Class Engine.NavigationSystem
// 0x0438 (0x0460 - 0x0028)
class UNavigationSystem : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x438];                                     // 0x0028(0x0438) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystem");
		return ptr;
	}

};


// Class Engine.NavLinkProxy
// 0x0050 (0x03D8 - 0x0388)
class ANavLinkProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkProxy");
		return ptr;
	}

};


// Class Engine.LevelScriptActor
// 0x0008 (0x0390 - 0x0388)
class ALevelScriptActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptActor");
		return ptr;
	}

};


// Class Engine.NavArea
// 0x0018 (0x0040 - 0x0028)
class UNavArea : public UObject
{
public:
	float                                              DefaultCost;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x002C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea");
		return ptr;
	}

};


// Class Engine.NavAreaMeta
// 0x0000 (0x0040 - 0x0040)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaMeta");
		return ptr;
	}

};


// Class Engine.CharacterMovementComponent
// 0x05B8 (0x0730 - 0x0178)
class UCharacterMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x5B8];                                     // 0x0178(0x05B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CharacterMovementComponent");
		return ptr;
	}

};


// Class Engine.NavigationQueryFilter
// 0x0020 (0x0048 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationQueryFilter");
		return ptr;
	}

};


// Class Engine.ShapeComponent
// 0x0020 (0x0690 - 0x0670)
class UShapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShapeComponent");
		return ptr;
	}

};


// Class Engine.BoxComponent
// 0x0010 (0x06A0 - 0x0690)
class UBoxComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxComponent");
		return ptr;
	}

};


// Class Engine.NavLinkDefinition
// 0x0028 (0x0050 - 0x0028)
class UNavLinkDefinition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkDefinition");
		return ptr;
	}

};


// Class Engine.RecastNavMesh
// 0x0108 (0x0630 - 0x0528)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0528(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastNavMesh");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x0000 (0x0028 - 0x0028)
class ULocalMessage : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}

};


// Class Engine.OnlineSession
// 0x0000 (0x0028 - 0x0028)
class UOnlineSession : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSession");
		return ptr;
	}

};


// Class Engine.NavigationObjectBase
// 0x0028 (0x03B0 - 0x0388)
class ANavigationObjectBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0398(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationObjectBase");
		return ptr;
	}

};


// Class Engine.PlayerState
// 0x0098 (0x0420 - 0x0388)
class APlayerState : public AInfo
{
public:
	float                                              Score;                                                    // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x94];                                      // 0x038C(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}

};


// Class Engine.PlayerCameraManager
// 0x1648 (0x19D0 - 0x0388)
class APlayerCameraManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1648];                                    // 0x0388(0x1648) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}

};


// Class Engine.CameraComponent
// 0x0540 (0x07D0 - 0x0290)
class UCameraComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x540];                                     // 0x0290(0x0540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraComponent");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActor
// 0x0088 (0x0410 - 0x0388)
class ASkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0388(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}

};


// Class Engine.PlayerStart
// 0x0008 (0x03B8 - 0x03B0)
class APlayerStart : public ANavigationObjectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.SkinnedMeshComponent
// 0x0170 (0x08F0 - 0x0780)
class USkinnedMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0780(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}

};


// Class Engine.SkeletalMeshComponent
// 0x0600 (0x0EF0 - 0x08F0)
class USkeletalMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x600];                                     // 0x08F0(0x0600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}

};


// Class Engine.DefaultPawn
// 0x0028 (0x0410 - 0x03E8)
class ADefaultPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPawn");
		return ptr;
	}

};


// Class Engine.SpectatorPawn
// 0x0000 (0x0410 - 0x0410)
class ASpectatorPawn : public ADefaultPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawn");
		return ptr;
	}

};


// Class Engine.StaticMeshActor
// 0x0010 (0x0398 - 0x0388)
class AStaticMeshActor : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}

};


// Class Engine.AssetUserData
// 0x0000 (0x0028 - 0x0028)
class UAssetUserData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetUserData");
		return ptr;
	}

};


// Class Engine.HUD
// 0x00E8 (0x0470 - 0x0388)
class AHUD : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0388(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}

};


// Class Engine.FloatingPawnMovement
// 0x0018 (0x0190 - 0x0178)
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0178(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloatingPawnMovement");
		return ptr;
	}

};


// Class Engine.SpectatorPawnMovement
// 0x0008 (0x0198 - 0x0190)
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawnMovement");
		return ptr;
	}

};


// Class Engine.PhysicsVolume
// 0x0010 (0x03D0 - 0x03C0)
class APhysicsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}

};


// Class Engine.InstancedStaticMeshComponent
// 0x00A0 (0x0880 - 0x07E0)
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x07E0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.HierarchicalInstancedStaticMeshComponent
// 0x0120 (0x09A0 - 0x0880)
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0880(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.MaterialInterface
// 0x0048 (0x0070 - 0x0028)
class UMaterialInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USubsurfaceProfile*                          SubsurfaceProfile;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}

};


// Class Engine.MaterialInstance
// 0x0140 (0x01B0 - 0x0070)
class UMaterialInstance : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0070(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceConstant
// 0x0000 (0x01B0 - 0x01B0)
class UMaterialInstanceConstant : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpression
// 0x0038 (0x0060 - 0x0028)
class UMaterialExpression : public UObject
{
public:
	class UMaterial*                                   Material;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialFunction*                           Function;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomOutput
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionCustomOutput : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomOutput");
		return ptr;
	}

};


// Class Engine.BlueprintGeneratedClass
// 0x00E0 (0x0330 - 0x0250)
class UBlueprintGeneratedClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0250(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.UserDefinedStruct
// 0x0010 (0x00A8 - 0x0098)
class UUserDefinedStruct : public UScriptStruct
{
public:
	struct FGuid                                       Guid;                                                     // 0x0098(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
		return ptr;
	}

};


// Class Engine.OnlineBlueprintCallProxyBase
// 0x0000 (0x0028 - 0x0028)
class UOnlineBlueprintCallProxyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineBlueprintCallProxyBase");
		return ptr;
	}


	void Activate();
};


// Class Engine.Model
// 0x0550 (0x0578 - 0x0028)
class UModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x550];                                     // 0x0028(0x0550) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.EngineBaseTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineBaseTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.EdGraphNode
// 0x0078 (0x00A0 - 0x0028)
class UEdGraphNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class UEdGraphPin_Deprecated*>              DeprecatedPins;                                           // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode");
		return ptr;
	}

};


// Class Engine.EdGraphPin_Deprecated
// 0x0118 (0x0140 - 0x0028)
class UEdGraphPin_Deprecated : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0028(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphPin_Deprecated");
		return ptr;
	}

};


// Class Engine.Interface_AssetUserData
// 0x0000 (0x0028 - 0x0028)
class UInterface_AssetUserData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_AssetUserData");
		return ptr;
	}

};


// Class Engine.ChildActorComponent
// 0x0030 (0x02C0 - 0x0290)
class UChildActorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0290(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildActorComponent");
		return ptr;
	}

};


// Class Engine.Level
// 0x02F8 (0x0320 - 0x0028)
class ULevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0028(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x0008 (0x0390 - 0x0388)
class AAmbientSound : public AActor
{
public:
	class UAudioComponent*                             AudioComponent;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}


	void Stop();
	void Play();
	void FadeOut();
	void FadeIn();
	void AdjustVolume();
};


// Class Engine.BrushShape
// 0x0000 (0x03C0 - 0x03C0)
class ABrushShape : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.AudioVolume
// 0x0048 (0x0408 - 0x03C0)
class AAudioVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03C0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioVolume");
		return ptr;
	}

};


// Class Engine.BlockingVolume
// 0x0000 (0x03C0 - 0x03C0)
class ABlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.CameraBlockingVolume
// 0x0000 (0x03C0 - 0x03C0)
class ACameraBlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraBlockingVolume");
		return ptr;
	}

};


// Class Engine.CullDistanceVolume
// 0x0018 (0x03D8 - 0x03C0)
class ACullDistanceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.LevelStreamingVolume
// 0x0018 (0x03D8 - 0x03C0)
class ALevelStreamingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}

};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000 (0x03C0 - 0x03C0)
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0000 (0x03C0 - 0x03C0)
class ALightmassImportanceVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.MeshMergeCullingVolume
// 0x0000 (0x03C0 - 0x03C0)
class AMeshMergeCullingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshMergeCullingVolume");
		return ptr;
	}

};


// Class Engine.NavigationTypes
// 0x0000 (0x0028 - 0x0028)
class UNavigationTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationTypes");
		return ptr;
	}

};


// Class Engine.NavMeshBoundsVolume
// 0x0008 (0x03C8 - 0x03C0)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x03C0(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class Engine.NavRelevantInterface
// 0x0000 (0x0028 - 0x0028)
class UNavRelevantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantInterface");
		return ptr;
	}

};


// Class Engine.NavModifierVolume
// 0x0010 (0x03D0 - 0x03C0)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavModifierVolume");
		return ptr;
	}

};


// Class Engine.DefaultPhysicsVolume
// 0x0000 (0x03D0 - 0x03D0)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}

};


// Class Engine.KillZVolume
// 0x0000 (0x03D0 - 0x03D0)
class AKillZVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZVolume");
		return ptr;
	}

};


// Class Engine.DamageType
// 0x0018 (0x0040 - 0x0028)
class UDamageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}

};


// Class Engine.PainCausingVolume
// 0x0028 (0x03F8 - 0x03D0)
class APainCausingVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PainCausingVolume");
		return ptr;
	}

};


// Class Engine.BlendableInterface
// 0x0000 (0x0028 - 0x0028)
class UBlendableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendableInterface");
		return ptr;
	}

};


// Class Engine.Scene
// 0x0000 (0x0028 - 0x0028)
class UScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.Interface_PostProcessVolume
// 0x0000 (0x0028 - 0x0028)
class UInterface_PostProcessVolume : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PostProcessVolume");
		return ptr;
	}

};


// Class Engine.PostProcessVolume
// 0x04E0 (0x08A0 - 0x03C0)
class APostProcessVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET
	struct FPostProcessSettings                        Settings;                                                 // 0x03D0(0x04C0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0890(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000 (0x03C0 - 0x03C0)
class APrecomputedVisibilityVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0030 (0x03F0 - 0x03C0)
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x0000 (0x03C0 - 0x03C0)
class ATriggerVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}

};


// Class Engine.NavAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UNavAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAgentInterface");
		return ptr;
	}

};


// Class Engine.CameraShake
// 0x0138 (0x0160 - 0x0028)
class UCameraShake : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}

};


// Class Engine.InputComponent
// 0x0078 (0x0168 - 0x00F0)
class UInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputComponent");
		return ptr;
	}


	void WasControllerKeyJustReleased(const struct FKey& Key);
	void WasControllerKeyJustPressed(const struct FKey& Key);
	void IsControllerKeyDown(const struct FKey& Key);
	void GetTouchState();
	void GetControllerVectorKeyState(const struct FKey& Key);
	void GetControllerMouseDelta();
	void GetControllerKeyTimeDown(const struct FKey& Key);
	void GetControllerAnalogStickState();
	void GetControllerAnalogKeyState(const struct FKey& Key);
};


// Class Engine.CurveBase
// 0x0008 (0x0030 - 0x0028)
class UCurveBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveBase");
		return ptr;
	}


	void GetValueRange();
	void GetTimeRange();
};


// Class Engine.CurveFloat
// 0x0078 (0x00A8 - 0x0030)
class UCurveFloat : public UCurveBase
{
public:
	struct FRichCurve                                  FloatCurve;                                               // 0x0030(0x0070)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveFloat");
		return ptr;
	}

};


// Class Engine.ForceFeedbackEffect
// 0x0018 (0x0040 - 0x0028)
class UForceFeedbackEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackEffect");
		return ptr;
	}

};


// Class Engine.DebugCameraController
// 0x0048 (0x0710 - 0x06C8)
class ADebugCameraController : public APlayerController
{
public:
	unsigned char                                      bShowSelectedInfo : 1;                                    // 0x06C8(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x47];                                      // 0x06C9(0x0047) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraController");
		return ptr;
	}

};


// Class Engine.DecalActor
// 0x0008 (0x0390 - 0x0388)
class ADecalActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}

};


// Class Engine.DestructibleActor
// 0x0020 (0x03A8 - 0x0388)
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0390(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleActor");
		return ptr;
	}

};


// Class Engine.DocumentationActor
// 0x0008 (0x0390 - 0x0388)
class ADocumentationActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DocumentationActor");
		return ptr;
	}

};


// Class Engine.DebugCameraHUD
// 0x0000 (0x0470 - 0x0470)
class ADebugCameraHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraHUD");
		return ptr;
	}

};


// Class Engine.AtmosphericFog
// 0x0008 (0x0390 - 0x0388)
class AAtmosphericFog : public AInfo
{
public:
	class UAtmosphericFogComponent*                    AtmosphericFogComponent;                                  // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFog");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFog
// 0x0010 (0x0398 - 0x0388)
class AExponentialHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}

};


// Class Engine.ServerStatReplicator
// 0x00C8 (0x0450 - 0x0388)
class AServerStatReplicator : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0388(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerStatReplicator");
		return ptr;
	}

};


// Class Engine.GameNetworkManager
// 0x0088 (0x0410 - 0x0388)
class AGameNetworkManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0388(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameNetworkManager");
		return ptr;
	}

};


// Class Engine.SkyLight
// 0x0010 (0x0398 - 0x0388)
class ASkyLight : public AInfo
{
public:
	class USkyLightComponent*                          LightComponent;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x0390(0x0001) (Net)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.WindDirectionalSource
// 0x0008 (0x0390 - 0x0388)
class AWindDirectionalSource : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}

};


// Class Engine.HierarchicalLODSetup
// 0x0010 (0x0038 - 0x0028)
class UHierarchicalLODSetup : public UObject
{
public:
	TArray<struct FHierarchicalSimplification>         HierarchicalLODSetup;                                     // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalLODSetup");
		return ptr;
	}

};


// Class Engine.LevelBounds
// 0x0008 (0x0390 - 0x0388)
class ALevelBounds : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBounds");
		return ptr;
	}

};


// Class Engine.Light
// 0x0010 (0x0398 - 0x0388)
class ALight : public AActor
{
public:
	class ULightComponent*                             LightComponent;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x0390(0x0001) (Net)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}


	void ToggleEnabled();
	void SetLightFunctionScale();
	void SetLightFunctionMaterial();
	void SetLightFunctionFadeDistance();
	void SetLightColor();
	void SetEnabled();
	void SetCastShadows();
	void SetBrightness();
	void SetAffectTranslucentLighting();
	void OnRep_bEnabled();
	void IsEnabled();
	void GetLightColor();
	void GetBrightness();
};


// Class Engine.DirectionalLight
// 0x0000 (0x0398 - 0x0398)
class ADirectionalLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x0008 (0x03A0 - 0x0398)
class APointLight : public ALight
{
public:
	class UPointLightComponent*                        PointLightComponent;                                      // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}


	void SetRadius();
	void SetLightFalloffExponent();
};


// Class Engine.SpotLight
// 0x0008 (0x03A0 - 0x0398)
class ASpotLight : public ALight
{
public:
	class USpotLightComponent*                         SpotLightComponent;                                       // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}


	void SetOuterConeAngle();
	void SetInnerConeAngle();
};


// Class Engine.GeneratedMeshAreaLight
// 0x0000 (0x03A0 - 0x03A0)
class AGeneratedMeshAreaLight : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.LightmassPortal
// 0x0008 (0x0390 - 0x0388)
class ALightmassPortal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortal");
		return ptr;
	}

};


// Class Engine.LODActor
// 0x0038 (0x03C0 - 0x0388)
class ALODActor : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0388(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0390(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActor");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x0010 (0x0398 - 0x0388)
class AMaterialInstanceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x00A8 (0x0430 - 0x0388)
class AMatineeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0388(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}

};


// Class Engine.MatineeActorCameraAnim
// 0x0008 (0x0438 - 0x0430)
class AMatineeActorCameraAnim : public AMatineeActor
{
public:
	class UCameraAnim*                                 CameraAnim;                                               // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorCameraAnim");
		return ptr;
	}

};


// Class Engine.AbstractNavData
// 0x0000 (0x0528 - 0x0528)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AbstractNavData");
		return ptr;
	}

};


// Class Engine.NavigationGraph
// 0x0000 (0x0528 - 0x0528)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraph");
		return ptr;
	}

};


// Class Engine.NavigationGraphNode
// 0x0000 (0x0388 - 0x0388)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraphNode");
		return ptr;
	}

};


// Class Engine.PlayerStartPIE
// 0x0000 (0x03B8 - 0x03B8)
class APlayerStartPIE : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStartPIE");
		return ptr;
	}

};


// Class Engine.NavPathObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UNavPathObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavPathObserverInterface");
		return ptr;
	}

};


// Class Engine.NavigationTestingActor
// 0x0108 (0x0490 - 0x0388)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x03A0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationTestingActor");
		return ptr;
	}

};


// Class Engine.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkHostInterface");
		return ptr;
	}

};


// Class Engine.Note
// 0x0000 (0x0388 - 0x0388)
class ANote : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x0110 (0x0138 - 0x0028)
class UParticleSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}

};


// Class Engine.ParticleSystemComponent
// 0x0280 (0x08F0 - 0x0670)
class UParticleSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0670(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}

};


// Class Engine.ParticleEventManager
// 0x0000 (0x0388 - 0x0388)
class AParticleEventManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}

};


// Class Engine.Interface_CollisionDataProvider
// 0x0000 (0x0028 - 0x0028)
class UInterface_CollisionDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_CollisionDataProvider");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x0298 (0x02C0 - 0x0028)
class USkeletalMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class USkeleton*                                   Skeleton;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x270];                                     // 0x0050(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}

};


// Class Engine.AnimationAsset
// 0x0050 (0x0078 - 0x0028)
class UAnimationAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USkeleton*                                   Skeleton;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0038(0x0020) MISSED OFFSET
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x0058(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x0068(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationAsset");
		return ptr;
	}

};


// Class Engine.ReflectionCapture
// 0x0008 (0x0390 - 0x0388)
class AReflectionCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCapture");
		return ptr;
	}

};


// Class Engine.BoxReflectionCapture
// 0x0000 (0x0390 - 0x0390)
class ABoxReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCapture");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCapture
// 0x0000 (0x0390 - 0x0390)
class APlaneReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCapture");
		return ptr;
	}

};


// Class Engine.SphereReflectionCapture
// 0x0008 (0x0398 - 0x0390)
class ASphereReflectionCapture : public AReflectionCapture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCapture");
		return ptr;
	}

};


// Class Engine.RigidBodyBase
// 0x0000 (0x0388 - 0x0388)
class ARigidBodyBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintActor
// 0x0020 (0x03A8 - 0x0388)
class APhysicsConstraintActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintActor");
		return ptr;
	}

};


// Class Engine.PhysicsThruster
// 0x0008 (0x0390 - 0x0388)
class APhysicsThruster : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThruster");
		return ptr;
	}

};


// Class Engine.SceneCapture
// 0x0008 (0x0390 - 0x0388)
class ASceneCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture");
		return ptr;
	}

};


// Class Engine.PlanarReflection
// 0x0010 (0x03A0 - 0x0390)
class APlanarReflection : public ASceneCapture
{
public:
	class UPlanarReflectionComponent*                  PlanarReflectionComponent;                                // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflection");
		return ptr;
	}

};


// Class Engine.SceneCapture2D
// 0x0010 (0x03A0 - 0x0390)
class ASceneCapture2D : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2D");
		return ptr;
	}

};


// Class Engine.SceneCaptureCube
// 0x0010 (0x03A0 - 0x0390)
class ASceneCaptureCube : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCube");
		return ptr;
	}

};


// Class Engine.RadialForceActor
// 0x0008 (0x0390 - 0x0388)
class ARadialForceActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceActor");
		return ptr;
	}

};


// Class Engine.SplineMeshActor
// 0x0008 (0x0390 - 0x0388)
class ASplineMeshActor : public AActor
{
public:
	class USplineMeshComponent*                        SplineMeshComponent;                                      // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshActor");
		return ptr;
	}

};


// Class Engine.SubDSurfaceActor
// 0x0010 (0x0398 - 0x0388)
class ASubDSurfaceActor : public AActor
{
public:
	class USubDSurfaceComponent*                       SubDSurface;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubDSurfaceActor");
		return ptr;
	}

};


// Class Engine.TargetPoint
// 0x0000 (0x0388 - 0x0388)
class ATargetPoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.TextRenderActor
// 0x0008 (0x0390 - 0x0388)
class ATextRenderActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderActor");
		return ptr;
	}

};


// Class Engine.TriggerBase
// 0x0010 (0x0398 - 0x0388)
class ATriggerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBase");
		return ptr;
	}

};


// Class Engine.TriggerBox
// 0x0000 (0x0398 - 0x0398)
class ATriggerBox : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBox");
		return ptr;
	}

};


// Class Engine.TriggerCapsule
// 0x0000 (0x0398 - 0x0398)
class ATriggerCapsule : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerCapsule");
		return ptr;
	}

};


// Class Engine.TriggerSphere
// 0x0000 (0x0398 - 0x0398)
class ATriggerSphere : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerSphere");
		return ptr;
	}

};


// Class Engine.VectorFieldVolume
// 0x0008 (0x0390 - 0x0388)
class AVectorFieldVolume : public AActor
{
public:
	class UVectorFieldComponent*                       VectorFieldComponent;                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldVolume");
		return ptr;
	}

};


// Class Engine.ApplicationLifecycleComponent
// 0x0050 (0x0140 - 0x00F0)
class UApplicationLifecycleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApplicationLifecycleComponent");
		return ptr;
	}

};


// Class Engine.InterpToMovementComponent
// 0x00A0 (0x01D8 - 0x0138)
class UInterpToMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0138(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpToMovementComponent");
		return ptr;
	}

};


// Class Engine.Skeleton
// 0x0358 (0x0380 - 0x0028)
class USkeleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x358];                                     // 0x0028(0x0358) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}

};


// Class Engine.MatineeAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UMatineeAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeAnimInterface");
		return ptr;
	}

};


// Class Engine.AnimSequenceBase
// 0x0028 (0x00A0 - 0x0078)
class UAnimSequenceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequenceBase");
		return ptr;
	}

};


// Class Engine.AnimCompositeBase
// 0x0000 (0x00A0 - 0x00A0)
class UAnimCompositeBase : public UAnimSequenceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompositeBase");
		return ptr;
	}

};


// Class Engine.AnimMontage
// 0x0108 (0x01A8 - 0x00A0)
class UAnimMontage : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x00A0(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMontage");
		return ptr;
	}

};


// Class Engine.RVOAvoidanceInterface
// 0x0000 (0x0028 - 0x0028)
class URVOAvoidanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RVOAvoidanceInterface");
		return ptr;
	}

};


// Class Engine.NetworkPredictionInterface
// 0x0000 (0x0028 - 0x0028)
class UNetworkPredictionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkPredictionInterface");
		return ptr;
	}

};


// Class Engine.ProjectileMovementComponent
// 0x0068 (0x01A0 - 0x0138)
class UProjectileMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0138(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectileMovementComponent");
		return ptr;
	}

};


// Class Engine.RotatingMovementComponent
// 0x0020 (0x0158 - 0x0138)
class URotatingMovementComponent : public UMovementComponent
{
public:
	struct FRotator                                    RotationRate;                                             // 0x0138(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0144(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RotatingMovementComponent");
		return ptr;
	}

};


// Class Engine.NavigationInvokerComponent
// 0x0008 (0x00F8 - 0x00F0)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationInvokerComponent");
		return ptr;
	}

};


// Class Engine.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkCustomInterface");
		return ptr;
	}

};


// Class Engine.NavModifierComponent
// 0x0028 (0x0148 - 0x0120)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0120(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavModifierComponent");
		return ptr;
	}

};


// Class Engine.PawnNoiseEmitterComponent
// 0x0028 (0x0118 - 0x00F0)
class UPawnNoiseEmitterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnNoiseEmitterComponent");
		return ptr;
	}

};


// Class Engine.PhysicalAnimationComponent
// 0x0040 (0x0130 - 0x00F0)
class UPhysicalAnimationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalAnimationComponent");
		return ptr;
	}

};


// Class Engine.PhysicsHandleComponent
// 0x00B0 (0x01A0 - 0x00F0)
class UPhysicsHandleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsHandleComponent");
		return ptr;
	}

};


// Class Engine.PlatformEventsComponent
// 0x0020 (0x0110 - 0x00F0)
class UPlatformEventsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformEventsComponent");
		return ptr;
	}

};


// Class Engine.AtmosphericFogComponent
// 0x01E0 (0x0470 - 0x0290)
class UAtmosphericFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0290(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFogComponent");
		return ptr;
	}

};


// Class Engine.SoundAttenuation
// 0x0120 (0x0148 - 0x0028)
class USoundAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0028(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundAttenuation");
		return ptr;
	}

};


// Class Engine.AudioComponent
// 0x02C0 (0x0550 - 0x0290)
class UAudioComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x2C0];                                     // 0x0290(0x02C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}

};


// Class Engine.DecalComponent
// 0x0040 (0x02D0 - 0x0290)
class UDecalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0290(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFogComponent
// 0x0080 (0x0310 - 0x0290)
class UExponentialHeightFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0290(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}

};


// Class Engine.ForceFeedbackAttenuation
// 0x00A8 (0x00D0 - 0x0028)
class UForceFeedbackAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackAttenuation");
		return ptr;
	}

};


// Class Engine.ForceFeedbackComponent
// 0x00E0 (0x0370 - 0x0290)
class UForceFeedbackComponent : public USceneComponent
{
public:
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0298(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackComponent");
		return ptr;
	}

};


// Class Engine.LightComponentBase
// 0x0030 (0x02C0 - 0x0290)
class ULightComponentBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0290(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponentBase");
		return ptr;
	}

};


// Class Engine.LightComponent
// 0x0100 (0x03C0 - 0x02C0)
class ULightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x02C0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}

};


// Class Engine.DirectionalLightComponent
// 0x0070 (0x0430 - 0x03C0)
class UDirectionalLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x03C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}

};


// Class Engine.PointLightComponent
// 0x0030 (0x03F0 - 0x03C0)
class UPointLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}

};


// Class Engine.SpotLightComponent
// 0x0010 (0x0400 - 0x03F0)
class USpotLightComponent : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}

};


// Class Engine.SkyLightComponent
// 0x01B0 (0x0470 - 0x02C0)
class USkyLightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x02C0(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}

};


// Class Engine.LightmassPortalComponent
// 0x0010 (0x02A0 - 0x0290)
class ULightmassPortalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortalComponent");
		return ptr;
	}

};


// Class Engine.NavigationGraphNodeComponent
// 0x0030 (0x02C0 - 0x0290)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                               Node;                                                     // 0x0290(0x0018)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintComponent
// 0x0240 (0x04D0 - 0x0290)
class UPhysicsConstraintComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0290(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintComponent");
		return ptr;
	}

};


// Class Engine.PhysicsSpringComponent
// 0x0030 (0x02C0 - 0x0290)
class UPhysicsSpringComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0290(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSpringComponent");
		return ptr;
	}

};


// Class Engine.PhysicsThrusterComponent
// 0x0010 (0x02A0 - 0x0290)
class UPhysicsThrusterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThrusterComponent");
		return ptr;
	}

};


// Class Engine.PostProcessComponent
// 0x04E0 (0x0770 - 0x0290)
class UPostProcessComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	struct FPostProcessSettings                        Settings;                                                 // 0x02A0(0x04C0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0760(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessComponent");
		return ptr;
	}

};


// Class Engine.ArrowComponent
// 0x0020 (0x0690 - 0x0670)
class UArrowComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}

};


// Class Engine.BillboardComponent
// 0x0020 (0x0690 - 0x0670)
class UBillboardComponent : public UPrimitiveComponent
{
public:
	class UTexture2D*                                  Sprite;                                                   // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0678(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BillboardComponent");
		return ptr;
	}

};


// Class Engine.BrushComponent
// 0x0020 (0x0690 - 0x0670)
class UBrushComponent : public UPrimitiveComponent
{
public:
	class UModel*                                      Brush;                                                    // 0x0670(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0678(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x0020 (0x0690 - 0x0670)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.LineBatchComponent
// 0x0040 (0x06B0 - 0x0670)
class ULineBatchComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0670(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.MaterialBillboardComponent
// 0x0010 (0x0680 - 0x0670)
class UMaterialBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialBillboardComponent");
		return ptr;
	}

};


// Class Engine.DestructibleComponent
// 0x00D0 (0x09C0 - 0x08F0)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x08F0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleComponent");
		return ptr;
	}

};


// Class Engine.PoseableMeshComponent
// 0x00F0 (0x09E0 - 0x08F0)
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x08F0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableMeshComponent");
		return ptr;
	}


	void SetBoneTransformByName();
	void SetBoneScaleByName();
	void SetBoneRotationByName();
	void SetBoneLocationByName();
	void ResetBoneTransformByName();
	void GetBoneTransformByName();
	void GetBoneScaleByName();
	void GetBoneRotationByName();
	void GetBoneLocationByName();
	void CopyPoseFromSkeletalComponent();
};


// Class Engine.SplineMeshComponent
// 0x00A0 (0x0880 - 0x07E0)
class USplineMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x07E0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}

};


// Class Engine.ModelComponent
// 0x0040 (0x06B0 - 0x0670)
class UModelComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0670(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.NavLinkComponent
// 0x0020 (0x0690 - 0x0670)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkComponent");
		return ptr;
	}

};


// Class Engine.NavLinkRenderingComponent
// 0x0000 (0x0670 - 0x0670)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class Engine.NavMeshRenderingComponent
// 0x0010 (0x0680 - 0x0670)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class Engine.NavTestRenderingComponent
// 0x0000 (0x0670 - 0x0670)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavTestRenderingComponent");
		return ptr;
	}

};


// Class Engine.CapsuleComponent
// 0x0010 (0x06A0 - 0x0690)
class UCapsuleComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CapsuleComponent");
		return ptr;
	}

};


// Class Engine.SphereComponent
// 0x0010 (0x06A0 - 0x0690)
class USphereComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereComponent");
		return ptr;
	}

};


// Class Engine.DrawSphereComponent
// 0x0000 (0x06A0 - 0x06A0)
class UDrawSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.SplineComponent
// 0x00F0 (0x0760 - 0x0670)
class USplineComponent : public UPrimitiveComponent
{
public:
	struct FSplineCurves                               SplineCurves;                                             // 0x0670(0x0060) (Edit)
	unsigned char                                      UnknownData00[0x90];                                      // 0x06D0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}

};


// Class Engine.TextRenderComponent
// 0x0050 (0x06C0 - 0x0670)
class UTextRenderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0670(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderComponent");
		return ptr;
	}

};


// Class Engine.SubDSurfaceComponent
// 0x0020 (0x0690 - 0x0670)
class USubDSurfaceComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubDSurfaceComponent");
		return ptr;
	}

};


// Class Engine.ReflectionCaptureComponent
// 0x0090 (0x0320 - 0x0290)
class UReflectionCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0290(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.BoxReflectionCaptureComponent
// 0x0020 (0x0340 - 0x0320)
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0320(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCaptureComponent
// 0x0020 (0x0340 - 0x0320)
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0320(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SphereReflectionCaptureComponent
// 0x0010 (0x0330 - 0x0320)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent
// 0x00C0 (0x0350 - 0x0290)
class USceneCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0290(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}

};


// Class Engine.VectorFieldComponent
// 0x0030 (0x06A0 - 0x0670)
class UVectorFieldComponent : public UPrimitiveComponent
{
public:
	class UVectorField*                                VectorField;                                              // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0678(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent2D
// 0x0550 (0x08A0 - 0x0350)
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x550];                                     // 0x0350(0x0550) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent2D");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponentCube
// 0x0010 (0x0360 - 0x0350)
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponentCube");
		return ptr;
	}

};


// Class Engine.SpringArmComponent
// 0x0090 (0x0320 - 0x0290)
class USpringArmComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0290(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}

};


// Class Engine.StereoLayerComponent
// 0x00A0 (0x0330 - 0x0290)
class UStereoLayerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0290(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerComponent");
		return ptr;
	}

};


// Class Engine.WindDirectionalSourceComponent
// 0x0020 (0x02B0 - 0x0290)
class UWindDirectionalSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0290(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}

};


// Class Engine.TimelineComponent
// 0x00F0 (0x01E0 - 0x00F0)
class UTimelineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x00F0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineComponent");
		return ptr;
	}

};


// Class Engine.AnimComposite
// 0x0010 (0x00B0 - 0x00A0)
class UAnimComposite : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimComposite");
		return ptr;
	}

};


// Class Engine.RadialForceComponent
// 0x0030 (0x02C0 - 0x0290)
class URadialForceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0290(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceComponent");
		return ptr;
	}

};


// Class Engine.AnimSequence
// 0x00F8 (0x0198 - 0x00A0)
class UAnimSequence : public UAnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x00A0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}

};


// Class Engine.BlendSpaceBase
// 0x00C8 (0x0140 - 0x0078)
class UBlendSpaceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0078(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpaceBase");
		return ptr;
	}

};


// Class Engine.BlendSpace
// 0x0008 (0x0148 - 0x0140)
class UBlendSpace : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace
// 0x0000 (0x0148 - 0x0148)
class UAimOffsetBlendSpace : public UBlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace");
		return ptr;
	}

};


// Class Engine.BlendSpace1D
// 0x0008 (0x0148 - 0x0140)
class UBlendSpace1D : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace1D");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace1D
// 0x0000 (0x0148 - 0x0148)
class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace1D");
		return ptr;
	}

};


// Class Engine.PoseAsset
// 0x0118 (0x0190 - 0x0078)
class UPoseAsset : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0078(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseAsset");
		return ptr;
	}

};


// Class Engine.AnimStateMachineTypes
// 0x0000 (0x0028 - 0x0028)
class UAnimStateMachineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStateMachineTypes");
		return ptr;
	}

};


// Class Engine.AnimClassInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimClassInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassInterface");
		return ptr;
	}

};


// Class Engine.AnimClassData
// 0x0070 (0x0098 - 0x0028)
class UAnimClassData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassData");
		return ptr;
	}

};


// Class Engine.AnimCompress
// 0x0018 (0x0040 - 0x0028)
class UAnimCompress : public UObject
{
public:
	struct FString                                     Description;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress");
		return ptr;
	}

};


// Class Engine.AnimCompress_Automatic
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_Automatic : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_Automatic");
		return ptr;
	}

};


// Class Engine.AnimCompress_BitwiseCompressOnly
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimCompress_LeastDestructive
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_LeastDestructive : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveLinearKeys
// 0x0020 (0x0060 - 0x0040)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimCompress_PerTrackCompression
// 0x0080 (0x00E0 - 0x0060)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x0010 (0x0050 - 0x0040)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimSingleNodeInstance
// 0x0018 (0x0370 - 0x0358)
class UAnimSingleNodeInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0358(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSingleNodeInstance");
		return ptr;
	}

};


// Class Engine.AnimMetaData
// 0x0000 (0x0028 - 0x0028)
class UAnimMetaData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResetClothingSimulation
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_ResetClothingSimulation : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetClothingSimulation");
		return ptr;
	}

};


// Class Engine.PlanarReflectionComponent
// 0x00E0 (0x0430 - 0x0350)
class UPlanarReflectionComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0350(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflectionComponent");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x0030 (0x0060 - 0x0030)
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_TimedParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_Trail
// 0x0030 (0x0060 - 0x0030)
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_Trail");
		return ptr;
	}

};


// Class Engine.AnimSet
// 0x00C8 (0x00F0 - 0x0028)
class UAnimSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.AssetImportData
// 0x0000 (0x0028 - 0x0028)
class UAssetImportData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetImportData");
		return ptr;
	}

};


// Class Engine.AssetMappingTable
// 0x0010 (0x0038 - 0x0028)
class UAssetMappingTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetMappingTable");
		return ptr;
	}

};


// Class Engine.AutomationTestSettings
// 0x02F8 (0x0320 - 0x0028)
class UAutomationTestSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0028(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestSettings");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.BlendProfile
// 0x0020 (0x0048 - 0x0028)
class UBlendProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendProfile");
		return ptr;
	}

};


// Class Engine.BlueprintCore
// 0x0028 (0x0050 - 0x0028)
class UBlueprintCore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintCore");
		return ptr;
	}

};


// Class Engine.Blueprint
// 0x0150 (0x01A0 - 0x0050)
class UBlueprint : public UBlueprintCore
{
public:
	unsigned char                                      bRecompileOnLoad : 1;                                     // 0x0050(0x0001) (Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UClass*                                      ParentClass;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0060(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Blueprint");
		return ptr;
	}

};


// Class Engine.AnimBlueprint
// 0x0020 (0x01C0 - 0x01A0)
class UAnimBlueprint : public UBlueprint
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprint");
		return ptr;
	}

};


// Class Engine.LevelScriptBlueprint
// 0x0000 (0x01A0 - 0x01A0)
class ULevelScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptBlueprint");
		return ptr;
	}

};


// Class Engine.BlueprintMapLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintMapLibrary");
		return ptr;
	}


	void STATIC_Map_Values();
	void STATIC_Map_Remove();
	void STATIC_Map_Length();
	void STATIC_Map_Keys();
	void STATIC_Map_Find();
	void STATIC_Map_Contains();
	void STATIC_Map_Clear();
	void STATIC_Map_Add();
};


// Class Engine.PlatformGameInstance
// 0x00B0 (0x01A0 - 0x00F0)
class UPlatformGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformGameInstance");
		return ptr;
	}

};


// Class Engine.BlueprintPlatformLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPlatformLibrary");
		return ptr;
	}


	void STATIC_ScheduleLocalNotificationFromNow();
	void STATIC_ScheduleLocalNotificationAtTime();
	void STATIC_GetLaunchNotification();
	void STATIC_ClearAllLocalNotifications();
	void STATIC_CancelLocalNotification();
};


// Class Engine.AvoidanceManager
// 0x00B8 (0x00E0 - 0x0028)
class UAvoidanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidanceManager");
		return ptr;
	}

};


// Class Engine.BlueprintSetLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintSetLibrary");
		return ptr;
	}


	void STATIC_Set_Union();
	void STATIC_Set_ToArray(TArray<int>* Result);
	void STATIC_Set_RemoveItems();
	void STATIC_Set_Remove();
	void STATIC_Set_Length();
	void STATIC_Set_Intersection();
	void STATIC_Set_Difference();
	void STATIC_Set_Contains();
	void STATIC_Set_Clear();
	void STATIC_Set_AddItems();
	void STATIC_Set_Add();
};


// Class Engine.AnimNotifyState_DisableRootMotion
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_DisableRootMotion : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_DisableRootMotion");
		return ptr;
	}

};


// Class Engine.KismetSystemLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}


	void STATIC_StackTrace();
	void STATIC_SphereTraceSingleForObjects();
	void STATIC_SphereTraceSingle();
	void STATIC_SphereTraceMultiForObjects();
	void STATIC_SphereTraceMulti();
	void STATIC_SphereOverlapComponents();
	void STATIC_SphereOverlapActors();
	void STATIC_ShowPlatformSpecificLeaderboardScreen(const struct FString& CategoryName);
	void STATIC_ShowPlatformSpecificAchievementsScreen();
	void STATIC_ShowInterstitialAd();
	void STATIC_ShowAdBanner();
	void STATIC_SetWindowTitle();
	void STATIC_SetVolumeButtonsHandledBySystem(bool bEnabled);
	void STATIC_SetVectorPropertyByName(class UObject* Object);
	void STATIC_SetUserActivity(const struct FUserActivity& UserActivity);
	void STATIC_SetTransformPropertyByName(class UObject* Object);
	void STATIC_SetTextPropertyByName(class UObject* Object);
	void STATIC_SetSuppressViewportTransitionMessage();
	void STATIC_SetStructurePropertyByName(class UObject* Object);
	void STATIC_SetStringPropertyByName(class UObject* Object);
	void STATIC_SetRotatorPropertyByName(class UObject* Object);
	void STATIC_SetObjectPropertyByName(class UObject* Object);
	void STATIC_SetNamePropertyByName(class UObject* Object);
	void STATIC_SetLinearColorPropertyByName(class UObject* Object);
	void STATIC_SetIntPropertyByName(class UObject* Object);
	void STATIC_SetInterfacePropertyByName(class UObject* Object);
	void STATIC_SetFloatPropertyByName(class UObject* Object);
	void STATIC_SetCollisionProfileNameProperty(class UObject* Object);
	void STATIC_SetClassPropertyByName(class UObject* Object);
	void STATIC_SetBytePropertyByName(class UObject* Object);
	void STATIC_SetBoolPropertyByName(class UObject* Object);
	void STATIC_SetAssetPropertyByName(class UObject* Object);
	void STATIC_SetAssetClassPropertyByName(class UObject* Object);
	void STATIC_RetriggerableDelay();
	void STATIC_ResetGamepadAssignmentToController();
	void STATIC_ResetGamepadAssignments();
	void STATIC_RegisterForRemoteNotifications();
	void STATIC_QuitGame();
	void STATIC_PrintWarning();
	void STATIC_PrintText();
	void STATIC_PrintString();
};


// Class Engine.GameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
		return ptr;
	}


	void STATIC_UnloadStreamLevel();
	void STATIC_SuggestProjectileVelocity_CustomArc();
	void STATIC_SpawnSoundAttached();
	void STATIC_SpawnSoundAtLocation();
	void STATIC_SpawnSound2D();
	void STATIC_SpawnObject();
	void STATIC_SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect);
	void STATIC_SpawnForceFeedbackAtLocation();
	void STATIC_SpawnEmitterAttached();
	void STATIC_SpawnEmitterAtLocation();
	void STATIC_SpawnDialogueAttached();
	void STATIC_SpawnDialogueAtLocation();
	void STATIC_SpawnDialogue2D();
	void STATIC_SpawnDecalAttached();
	void STATIC_SpawnDecalAtLocation();
	void STATIC_SetWorldOriginLocation();
	void STATIC_SetSubtitlesEnabled(bool bEnabled);
	void STATIC_SetSoundMixClassOverride();
	void STATIC_SetPlayerControllerID(class APlayerController* Player);
	void STATIC_SetGlobalTimeDilation();
	void STATIC_SetGlobalPitchModulation();
	void STATIC_SetGlobalListenerFocusParameters();
	void STATIC_SetGamePaused();
	void STATIC_SetBaseSoundMix();
	void STATIC_SaveGameToSlot();
	void STATIC_RemovePlayer(class APlayerController* Player);
	void STATIC_RebaseZeroOriginOntoLocal();
	void STATIC_RebaseLocalOriginOntoZero();
	void STATIC_PushSoundMixModifier();
	void STATIC_ProjectWorldToScreen(class APlayerController* Player);
	void STATIC_PopSoundMixModifier();
	void STATIC_PlayWorldCameraShake();
	void STATIC_PlaySoundAtLocation();
	void STATIC_PlaySound2D();
	void STATIC_PlayDialogueAtLocation();
	void STATIC_PlayDialogue2D();
	void STATIC_ParseOption();
	void STATIC_OpenLevel();
	void STATIC_MakeHitResult();
	void STATIC_LoadStreamLevel();
	void STATIC_LoadGameFromSlot();
	void STATIC_IsGamePaused();
	void STATIC_HasOption();
	void STATIC_HasLaunchOption();
	void STATIC_GrassOverlappingSphereCount();
	void STATIC_GetWorldOriginLocation();
	void STATIC_GetWorldDeltaSeconds();
	void STATIC_GetUnpausedTimeSeconds();
	void STATIC_GetTimeSeconds();
	void STATIC_GetSurfaceType();
	void STATIC_GetStreamingLevel();
	void STATIC_GetRealTimeSeconds();
	void STATIC_GetPlayerPawn();
	void STATIC_GetPlayerControllerID(class APlayerController* Player);
	void STATIC_GetPlayerController();
	void STATIC_GetPlayerCharacter();
	void STATIC_GetPlayerCameraManager();
	void STATIC_GetPlatformName();
	void STATIC_GetObjectClass(class UObject* Object);
	void STATIC_GetKeyValue();
	void STATIC_GetIntOption();
	void STATIC_GetGlobalTimeDilation();
	void STATIC_GetGameState();
	void STATIC_GetGameMode();
	void STATIC_GetGameInstance();
	void STATIC_GetCurrentReverbEffect();
	void STATIC_GetCurrentLevelName();
	void STATIC_GetAudioTimeSeconds();
	void STATIC_GetAllActorsWithTag();
	void STATIC_GetAllActorsWithInterface();
	void STATIC_GetAllActorsOfClass();
	void STATIC_GetActorArrayBounds();
	void STATIC_GetActorArrayAverageLocation();
	void STATIC_GetAccurateRealTime();
	void STATIC_FlushLevelStreaming();
	void STATIC_FinishSpawningActor(class AActor* Actor);
	void STATIC_FindCollisionUV();
	void STATIC_EnableLiveStreaming();
	void STATIC_DoesSaveGameExist();
	void STATIC_DeprojectScreenToWorld(class APlayerController* Player);
	void STATIC_DeleteGameInSlot();
	void STATIC_DeactivateReverbEffect();
	void STATIC_CreateSound2D();
	void STATIC_CreateSaveGameObjectFromBlueprint();
	void STATIC_CreateSaveGameObject();
	void STATIC_CreatePlayer();
	void STATIC_ClearSoundMixModifiers();
	void STATIC_ClearSoundMixClassOverride();
	void STATIC_CancelAsyncLoading();
	void STATIC_BreakHitResult();
	void STATIC_BlueprintSuggestProjectileVelocity();
	void STATIC_Blueprint_PredictProjectilePath_ByTraceChannel();
	void STATIC_Blueprint_PredictProjectilePath_ByObjectType();
	void STATIC_Blueprint_PredictProjectilePath_Advanced();
	void STATIC_BeginSpawningActorFromClass();
	void STATIC_BeginSpawningActorFromBlueprint();
	void STATIC_BeginDeferredActorSpawnFromClass();
	void STATIC_AreSubtitlesEnabled();
	void STATIC_AreAnyListenersWithinRange();
	void STATIC_ApplyRadialDamageWithFalloff();
	void STATIC_ApplyRadialDamage();
	void STATIC_ApplyPointDamage();
	void STATIC_ApplyDamage();
	void STATIC_ActivateReverbEffect();
};


// Class Engine.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	void STATIC_SetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_SetTrackingOrigin();
	void STATIC_SetClippingPlanes();
	void STATIC_ResetOrientationAndPosition();
	void STATIC_IsInLowPersistenceMode();
	void STATIC_IsHeadMountedDisplayEnabled();
	void STATIC_IsHeadMountedDisplayConnected();
	void STATIC_HasValidTrackingPosition();
	void STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_GetVRFocusState();
	void STATIC_GetTrackingSensorParameters();
	void STATIC_GetTrackingOrigin();
	void STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters();
	void STATIC_GetOrientationAndPosition();
	void STATIC_GetNumOfTrackingSensors();
	void STATIC_GetHMDDeviceName();
	void STATIC_EnableLowPersistenceMode();
	void STATIC_EnableHMD();
};


// Class Engine.KismetArrayLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}


	void STATIC_SetArrayPropertyByName(class UObject* Object);
	void STATIC_FilterArray();
	void STATIC_Array_Shuffle();
	void STATIC_Array_Set();
	void STATIC_Array_Resize();
	void STATIC_Array_RemoveItem();
	void STATIC_Array_Remove();
	void STATIC_Array_Length();
	void STATIC_Array_LastIndex();
	void STATIC_Array_IsValidIndex();
	void STATIC_Array_Insert();
	void STATIC_Array_Get();
	void STATIC_Array_Find();
	void STATIC_Array_Contains();
	void STATIC_Array_Clear();
	void STATIC_Array_Append();
	void STATIC_Array_AddUnique();
	void STATIC_Array_Add();
};


// Class Engine.KismetGuidLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetGuidLibrary");
		return ptr;
	}


	void STATIC_Parse_StringToGuid();
	void STATIC_NotEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	void STATIC_NewGuid();
	void STATIC_IsValid_Guid();
	void STATIC_Invalidate_Guid();
	void STATIC_EqualEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	void STATIC_Conv_GuidToString();
};


// Class Engine.KismetInputLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}


	void STATIC_PointerEvent_IsTouchEvent(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetWheelDelta(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetUserIndex(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetPointerIndex(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetGestureDelta(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetEffectingButton(const struct FPointerEvent& Input);
	void STATIC_PointerEvent_GetCursorDelta(const struct FPointerEvent& Input);
	void STATIC_Key_IsVectorAxis(const struct FKey& Key);
	void STATIC_Key_IsMouseButton(const struct FKey& Key);
	void STATIC_Key_IsModifierKey(const struct FKey& Key);
	void STATIC_Key_IsKeyboardKey(const struct FKey& Key);
	void STATIC_Key_IsGamepadKey(const struct FKey& Key);
	void STATIC_Key_IsFloatAxis(const struct FKey& Key);
	void STATIC_Key_GetDisplayName(const struct FKey& Key);
	void STATIC_InputEvent_IsShiftDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsRightShiftDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsRightControlDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsRightCommandDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsRightAltDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsRepeat(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsLeftShiftDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsLeftControlDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsLeftCommandDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsLeftAltDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsControlDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsCommandDown(const struct FInputEvent& Input);
	void STATIC_InputEvent_IsAltDown(const struct FInputEvent& Input);
	void STATIC_GetUserIndex(const struct FKeyEvent& Input);
	void STATIC_GetKey(const struct FKeyEvent& Input);
	void STATIC_GetAnalogValue(const struct FAnalogInputEvent& Input);
	void STATIC_EqualEqual_KeyKey(const struct FKey& A, const struct FKey& B);
	void STATIC_EqualEqual_InputChordInputChord(const struct FInputChord& A, const struct FInputChord& B);
	void STATIC_ControllerEvent_GetUserIndex(const struct FControllerEvent& Input);
	void STATIC_ControllerEvent_GetEffectingButton(const struct FControllerEvent& Input);
	void STATIC_ControllerEvent_GetAnalogValue(const struct FControllerEvent& Input);
	void STATIC_CalibrateTilt();
};


// Class Engine.KismetMaterialLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}


	void STATIC_SetVectorParameterValue();
	void STATIC_SetScalarParameterValue();
	void STATIC_GetVectorParameterValue();
	void STATIC_GetScalarParameterValue();
	void STATIC_CreateDynamicMaterialInstance();
};


// Class Engine.DebugDrawService
// 0x0000 (0x0028 - 0x0028)
class UDebugDrawService : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugDrawService");
		return ptr;
	}

};


// Class Engine.KismetMathLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}


	void STATIC_Xor_IntInt(int A, int B);
	void STATIC_VSizeSquared(const struct FVector& A);
	void STATIC_VSize2DSquared(const struct FVector2D& A);
	void STATIC_VSize2D(const struct FVector2D& A);
	void STATIC_VSize(const struct FVector& A);
	void STATIC_VLerp(const struct FVector& A, const struct FVector& B);
	void STATIC_VInterpTo_Constant();
	void STATIC_VInterpTo();
	void STATIC_VectorSpringInterp();
	void STATIC_Vector2DInterpTo_Constant();
	void STATIC_Vector2DInterpTo();
	void STATIC_VEase(const struct FVector& A, const struct FVector& B);
	void STATIC_UtcNow();
	void STATIC_TransformLocation(const struct FTransform& T, const struct FVector& Location);
	void STATIC_TransformDirection(const struct FTransform& T, const struct FVector& Direction);
	void STATIC_Today();
	void STATIC_TLerp(const struct FTransform& A, const struct FTransform& B);
	void STATIC_TInterpTo();
	void STATIC_TimespanZeroValue();
	void STATIC_TimespanRatio(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_TimespanMinValue();
	void STATIC_TimespanMaxValue();
	void STATIC_TimespanFromString();
	void STATIC_TEase(const struct FTransform& A, const struct FTransform& B);
	void STATIC_Tan(float A);
	void STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	void STATIC_Subtract_VectorInt(const struct FVector& A, int B);
	void STATIC_Subtract_VectorFloat(const struct FVector& A, float B);
	void STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	void STATIC_Subtract_Vector2DFloat(const struct FVector2D& A, float B);
	void STATIC_Subtract_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_Subtract_IntInt(int A, int B);
	void STATIC_Subtract_FloatFloat(float A, float B);
	void STATIC_Subtract_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	void STATIC_Subtract_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	void STATIC_Subtract_ByteByte(unsigned char A, unsigned char B);
	void STATIC_Square(float A);
	void STATIC_Sqrt(float A);
	void STATIC_Sin(float A);
	void STATIC_SignOfInteger(int A);
	void STATIC_SignOfFloat(float A);
	void STATIC_SetRandomStreamSeed(struct FRandomStream* Stream);
	void STATIC_SelectVector(const struct FVector& A, const struct FVector& B);
	void STATIC_SelectTransform(const struct FTransform& A, const struct FTransform& B);
	void STATIC_SelectString(const struct FString& A, const struct FString& B);
	void STATIC_SelectRotator(const struct FRotator& A, const struct FRotator& B);
	void STATIC_SelectObject(class UObject* A, class UObject* B);
	void STATIC_SelectInt(int A, int B);
	void STATIC_SelectFloat(float A, float B);
	void STATIC_SelectColor(const struct FLinearColor& A, const struct FLinearColor& B);
	void STATIC_SelectClass(class UClass* A, class UClass* B);
	void STATIC_SeedRandomStream(struct FRandomStream* Stream);
	void STATIC_Round(float A);
	void STATIC_RotatorFromAxisAndAngle(const struct FVector& Axis);
	void STATIC_RotateAngleAxis();
	void STATIC_RLerp(const struct FRotator& A, const struct FRotator& B);
	void STATIC_RInterpTo_Constant();
	void STATIC_RInterpTo();
	void STATIC_RGBToHSV_Vector();
	void STATIC_RGBToHSV();
	void STATIC_ResetVectorSpringState();
	void STATIC_ResetRandomStream(const struct FRandomStream& Stream);
	void STATIC_ResetFloatSpringState();
	void STATIC_REase(const struct FRotator& A, const struct FRotator& B);
	void STATIC_RandomUnitVectorInConeWithYawAndPitch();
	void STATIC_RandomUnitVectorInCone();
	void STATIC_RandomUnitVectorFromStream(const struct FRandomStream& Stream);
	void STATIC_RandomUnitVector();
	void STATIC_RandomRotatorFromStream();
	void STATIC_RandomRotator();
	void STATIC_RandomPointInBoundingBox();
	void STATIC_RandomIntegerInRangeFromStream(int Min, int Max, const struct FRandomStream& Stream);
	void STATIC_RandomIntegerInRange(int Min, int Max);
	void STATIC_RandomIntegerFromStream(int Max, const struct FRandomStream& Stream);
	void STATIC_RandomInteger(int Max);
	void STATIC_RandomFloatInRangeFromStream(float Min, float Max, const struct FRandomStream& Stream);
	void STATIC_RandomFloatInRange(float Min, float Max);
	void STATIC_RandomFloatFromStream(const struct FRandomStream& Stream);
	void STATIC_RandomFloat();
	void STATIC_RandomBoolWithWeightFromStream();
	void STATIC_RandomBoolWithWeight();
	void STATIC_RandomBoolFromStream(const struct FRandomStream& Stream);
	void STATIC_RandomBool();
	void STATIC_RadiansToDegrees(float A);
	void STATIC_ProjectVectorOnToVector(const struct FVector& V);
	void STATIC_ProjectVectorOnToPlane(const struct FVector& V);
	void STATIC_ProjectPointOnToPlane(const struct FVector& Point);
	void STATIC_PointsAreCoplanar();
	void STATIC_Percent_IntInt(int A, int B);
	void STATIC_Percent_FloatFloat(float A, float B);
	void STATIC_Percent_ByteByte(unsigned char A, unsigned char B);
	void STATIC_Or_IntInt(int A, int B);
	void STATIC_Now();
	void STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	void STATIC_NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	void STATIC_NotEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	void STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B);
	void STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B);
	void STATIC_NotEqual_IntInt(int A, int B);
	void STATIC_NotEqual_FloatFloat(float A, float B);
	void STATIC_NotEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	void STATIC_NotEqual_ClassClass(class UClass* A, class UClass* B);
	void STATIC_NotEqual_ByteByte(unsigned char A, unsigned char B);
	void STATIC_NotEqual_BoolBool(bool A, bool B);
	void STATIC_Not_PreBool(bool A);
	void STATIC_Not_Int(int A);
	void STATIC_NormalizeToRange();
	void STATIC_NormalizedDeltaRotator(const struct FRotator& A, const struct FRotator& B);
	void STATIC_NormalizeAxis();
	void STATIC_Normal2D(const struct FVector2D& A);
	void STATIC_Normal(const struct FVector& A);
	void STATIC_NegateVector(const struct FVector& A);
	void STATIC_NegateRotator(const struct FRotator& A);
	void STATIC_NearlyEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B);
	void STATIC_NearlyEqual_FloatFloat(float A, float B);
	void STATIC_MultiplyMultiply_FloatFloat();
	void STATIC_MultiplyByPi();
	void STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	void STATIC_Multiply_VectorInt(const struct FVector& A, int B);
	void STATIC_Multiply_VectorFloat(const struct FVector& A, float B);
	void STATIC_Multiply_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	void STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	void STATIC_Multiply_TimespanFloat(const struct FTimespan& A);
	void STATIC_Multiply_RotatorInt(const struct FRotator& A, int B);
	void STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B);
	void STATIC_Multiply_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	void STATIC_Multiply_LinearColorFloat(const struct FLinearColor& A, float B);
	void STATIC_Multiply_IntInt(int A, int B);
	void STATIC_Multiply_IntFloat(int A, float B);
	void STATIC_Multiply_FloatFloat(float A, float B);
	void STATIC_Multiply_ByteByte(unsigned char A, unsigned char B);
	void STATIC_MirrorVectorByNormal();
	void STATIC_MinOfIntArray();
	void STATIC_MinOfFloatArray();
	void STATIC_MinOfByteArray();
	void STATIC_MinimumAreaRectangle();
	void STATIC_Min(int A, int B);
	void STATIC_MaxOfIntArray();
	void STATIC_MaxOfFloatArray();
	void STATIC_MaxOfByteArray();
	void STATIC_Max(int A, int B);
	void STATIC_MapRangeUnclamped();
	void STATIC_MapRangeClamped();
	void STATIC_MakeVector2D(float X, float Y);
	void STATIC_MakeVector(float X, float Y, float Z);
	void STATIC_MakeTransform(const struct FVector& Location, const struct FRotator& Rotation);
	void STATIC_MakeTimespan();
	void STATIC_MakeRotFromZY(const struct FVector& Z, const struct FVector& Y);
	void STATIC_MakeRotFromZX(const struct FVector& Z, const struct FVector& X);
	void STATIC_MakeRotFromZ(const struct FVector& Z);
	void STATIC_MakeRotFromYZ(const struct FVector& Y, const struct FVector& Z);
	void STATIC_MakeRotFromYX(const struct FVector& Y, const struct FVector& X);
	void STATIC_MakeRotFromY(const struct FVector& Y);
	void STATIC_MakeRotFromXZ(const struct FVector& X, const struct FVector& Z);
	void STATIC_MakeRotFromXY(const struct FVector& X, const struct FVector& Y);
	void STATIC_MakeRotFromX(const struct FVector& X);
	void STATIC_MakeRotator();
	void STATIC_MakeRotationFromAxes();
	void STATIC_MakeRandomStream();
	void STATIC_MakePulsatingValue();
	void STATIC_MakePlaneFromPointAndNormal(const struct FVector& Point, const struct FVector& Normal);
	void STATIC_MakeDateTime();
	void STATIC_MakeColor(float R, float G, float B, float A);
	void STATIC_MakeBox2D(const struct FVector2D& Min, const struct FVector2D& Max);
	void STATIC_MakeBox(const struct FVector& Min, const struct FVector& Max);
	void STATIC_Loge(float A);
	void STATIC_Log(float A);
	void STATIC_LinePlaneIntersection_OriginNormal();
	void STATIC_LinePlaneIntersection();
	void STATIC_LinearColorLerpUsingHSV(const struct FLinearColor& A, const struct FLinearColor& B);
	void STATIC_LinearColorLerp(const struct FLinearColor& A, const struct FLinearColor& B);
	void STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	void STATIC_LessEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_LessEqual_IntInt(int A, int B);
	void STATIC_LessEqual_FloatFloat(float A, float B);
	void STATIC_LessEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	void STATIC_LessEqual_ByteByte(unsigned char A, unsigned char B);
	void STATIC_Less_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_Less_IntInt(int A, int B);
	void STATIC_Less_FloatFloat(float A, float B);
	void STATIC_Less_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	void STATIC_Less_ByteByte(unsigned char A, unsigned char B);
	void STATIC_Lerp(float A, float B);
	void STATIC_IsPointInBoxWithTransform(const struct FVector& Point);
	void STATIC_IsPointInBox(const struct FVector& Point);
	void STATIC_IsMorning(const struct FDateTime& A);
	void STATIC_IsLeapYear();
	void STATIC_IsAfternoon(const struct FDateTime& A);
	void STATIC_InvertTransform(const struct FTransform& T);
	void STATIC_InverseTransformLocation(const struct FTransform& T, const struct FVector& Location);
	void STATIC_InverseTransformDirection(const struct FTransform& T, const struct FVector& Direction);
	void STATIC_InverseLerp(float A, float B);
	void STATIC_InRange_FloatFloat();
	void STATIC_Hypotenuse(float Width, float Height);
	void STATIC_HSVToRGB_Vector();
	void STATIC_HSVToRGB(float H, float S, float V, float A);
	void STATIC_GridSnap_Float(float Location);
	void STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	void STATIC_GreaterEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_GreaterEqual_IntInt(int A, int B);
	void STATIC_GreaterEqual_FloatFloat(float A, float B);
	void STATIC_GreaterEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	void STATIC_GreaterEqual_ByteByte(unsigned char A, unsigned char B);
	void STATIC_Greater_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_Greater_IntInt(int A, int B);
	void STATIC_Greater_FloatFloat(float A, float B);
	void STATIC_Greater_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	void STATIC_Greater_ByteByte(unsigned char A, unsigned char B);
	void STATIC_GetYear(const struct FDateTime& A);
	void STATIC_GetYawPitchFromVector();
	void STATIC_GetVectorArrayAverage();
	void STATIC_GetUpVector();
	void STATIC_GetTotalSeconds(const struct FTimespan& A);
	void STATIC_GetTotalMinutes(const struct FTimespan& A);
	void STATIC_GetTotalMilliseconds(const struct FTimespan& A);
	void STATIC_GetTotalHours(const struct FTimespan& A);
	void STATIC_GetTotalDays(const struct FTimespan& A);
	void STATIC_GetTimeOfDay(const struct FDateTime& A);
	void STATIC_GetTAU();
	void STATIC_GetSeconds(const struct FTimespan& A);
	void STATIC_GetSecond(const struct FDateTime& A);
	void STATIC_GetRightVector();
	void STATIC_GetReflectionVector(const struct FVector& Direction);
	void STATIC_GetPointDistanceToSegment(const struct FVector& Point);
	void STATIC_GetPointDistanceToLine(const struct FVector& Point);
	void STATIC_GetPI();
	void STATIC_GetMonth(const struct FDateTime& A);
	void STATIC_GetMinutes(const struct FTimespan& A);
	void STATIC_GetMinute(const struct FDateTime& A);
	void STATIC_GetMinElement(const struct FVector& A);
	void STATIC_GetMilliseconds(const struct FTimespan& A);
	void STATIC_GetMillisecond(const struct FDateTime& A);
	void STATIC_GetMaxElement(const struct FVector& A);
	void STATIC_GetHours(const struct FTimespan& A);
	void STATIC_GetHour12(const struct FDateTime& A);
	void STATIC_GetHour(const struct FDateTime& A);
	void STATIC_GetForwardVector();
	void STATIC_GetDuration(const struct FTimespan& A);
	void STATIC_GetDirectionUnitVector();
	void STATIC_GetDays(const struct FTimespan& A);
	void STATIC_GetDayOfYear(const struct FDateTime& A);
	void STATIC_GetDay(const struct FDateTime& A);
	void STATIC_GetDate(const struct FDateTime& A);
	void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void STATIC_FTruncVector();
	void STATIC_FTrunc(float A);
	void STATIC_FromSeconds();
	void STATIC_FromMinutes();
	void STATIC_FromMilliseconds();
	void STATIC_FromHours();
	void STATIC_FromDays();
	void STATIC_Fraction(float A);
	void STATIC_FMod();
	void STATIC_FMin(float A, float B);
	void STATIC_FMax(float A, float B);
	void STATIC_FloatSpringInterp();
	void STATIC_FixedTurn();
	void STATIC_FInterpTo_Constant();
	void STATIC_FInterpTo();
	void STATIC_FInterpEaseInOut(float A, float B);
	void STATIC_FindNearestPointsOnLineSegments();
	void STATIC_FindLookAtRotation(const struct FVector& Start);
	void STATIC_FindClosestPointOnSegment(const struct FVector& Point);
	void STATIC_FindClosestPointOnLine(const struct FVector& Point);
	void STATIC_FFloor(float A);
	void STATIC_FClamp();
	void STATIC_FCeil(float A);
	void STATIC_Exp(float A);
	void STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	void STATIC_EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	void STATIC_EqualEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B);
	void STATIC_EqualEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	void STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	void STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B);
	void STATIC_EqualEqual_IntInt(int A, int B);
	void STATIC_EqualEqual_FloatFloat(float A, float B);
	void STATIC_EqualEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	void STATIC_EqualEqual_ClassClass(class UClass* A, class UClass* B);
	void STATIC_EqualEqual_ByteByte(unsigned char A, unsigned char B);
	void STATIC_EqualEqual_BoolBool(bool A, bool B);
	void STATIC_Ease(float A, float B);
	void STATIC_DotProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	void STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	void STATIC_Divide_VectorVector(const struct FVector& A, const struct FVector& B);
	void STATIC_Divide_VectorInt(const struct FVector& A, int B);
	void STATIC_Divide_VectorFloat(const struct FVector& A, float B);
	void STATIC_Divide_Vector2DFloat(const struct FVector2D& A, float B);
	void STATIC_Divide_IntInt(int A, int B);
	void STATIC_Divide_FloatFloat(float A, float B);
	void STATIC_Divide_ByteByte(unsigned char A, unsigned char B);
	void STATIC_DegTan(float A);
	void STATIC_DegSin(float A);
	void STATIC_DegreesToRadians(float A);
	void STATIC_DegCos(float A);
	void STATIC_DegAtan2(float A, float B);
	void STATIC_DegAtan(float A);
	void STATIC_DegAsin(float A);
	void STATIC_DegAcos(float A);
	void STATIC_DaysInYear();
	void STATIC_DaysInMonth();
	void STATIC_DateTimeMinValue();
	void STATIC_DateTimeMaxValue();
	void STATIC_DateTimeFromString();
	void STATIC_DateTimeFromIsoString();
	void STATIC_CrossProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	void STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	void STATIC_CreateVectorFromYawPitch();
	void STATIC_Cos(float A);
	void STATIC_ConvertTransformToRelative(const struct FTransform& Transform, const struct FTransform& ParentTransform);
	void STATIC_Conv_VectorToVector2D();
	void STATIC_Conv_VectorToTransform();
	void STATIC_Conv_VectorToRotator();
	void STATIC_Conv_VectorToLinearColor();
	void STATIC_Conv_Vector2DToVector();
	void STATIC_Conv_RotatorToVector();
	void STATIC_Conv_LinearColorToVector();
	void STATIC_Conv_LinearColorToColor();
	void STATIC_Conv_IntVectorToVector();
	void STATIC_Conv_IntToIntVector();
	void STATIC_Conv_IntToFloat();
	void STATIC_Conv_IntToByte();
	void STATIC_Conv_IntToBool();
	void STATIC_Conv_FloatToVector();
	void STATIC_Conv_FloatToLinearColor();
	void STATIC_Conv_ColorToLinearColor();
	void STATIC_Conv_ByteToInt();
	void STATIC_Conv_ByteToFloat();
	void STATIC_Conv_BoolToInt();
	void STATIC_Conv_BoolToFloat();
	void STATIC_Conv_BoolToByte();
	void STATIC_ComposeTransforms(const struct FTransform& A, const struct FTransform& B);
	void STATIC_ComposeRotators(const struct FRotator& A, const struct FRotator& B);
	void STATIC_ClassIsChildOf();
	void STATIC_ClampVectorSize(const struct FVector& A, float Min, float Max);
	void STATIC_ClampAxis();
	void STATIC_ClampAngle();
	void STATIC_Clamp();
	void STATIC_CInterpTo();
	void STATIC_BreakVector2D();
	void STATIC_BreakVector();
	void STATIC_BreakTransform();
	void STATIC_BreakTimespan();
	void STATIC_BreakRotIntoAxes();
	void STATIC_BreakRotator();
	void STATIC_BreakRandomStream();
	void STATIC_BreakDateTime();
	void STATIC_BreakColor();
	void STATIC_BooleanXOR(bool A, bool B);
	void STATIC_BooleanOR(bool A, bool B);
	void STATIC_BooleanNOR(bool A, bool B);
	void STATIC_BooleanNAND(bool A, bool B);
	void STATIC_BooleanAND(bool A, bool B);
	void STATIC_BMin(unsigned char A, unsigned char B);
	void STATIC_BMax(unsigned char A, unsigned char B);
	void STATIC_Atan2(float A, float B);
	void STATIC_Atan(float A);
	void STATIC_Asin(float A);
	void STATIC_And_IntInt(int A, int B);
	void STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B);
	void STATIC_Add_VectorInt(const struct FVector& A, int B);
	void STATIC_Add_VectorFloat(const struct FVector& A, float B);
	void STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	void STATIC_Add_Vector2DFloat(const struct FVector2D& A, float B);
	void STATIC_Add_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	void STATIC_Add_IntInt(int A, int B);
	void STATIC_Add_FloatFloat(float A, float B);
	void STATIC_Add_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	void STATIC_Add_ByteByte(unsigned char A, unsigned char B);
	void STATIC_Acos(float A);
	void STATIC_Abs_Int(int A);
	void STATIC_Abs(float A);
};


// Class Engine.KismetNodeHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetNodeHelperLibrary");
		return ptr;
	}


	void STATIC_MarkBit();
	void STATIC_HasUnmarkedBit();
	void STATIC_HasMarkedBit();
	void STATIC_GetValidValue(class UEnum* Enum);
	void STATIC_GetUnmarkedBit();
	void STATIC_GetRandomUnmarkedBit();
	void STATIC_GetFirstUnmarkedBit();
	void STATIC_GetEnumeratorValueFromIndex(class UEnum* Enum);
	void STATIC_GetEnumeratorUserFriendlyName(class UEnum* Enum);
	void STATIC_GetEnumeratorName(class UEnum* Enum);
	void STATIC_ClearBit();
	void STATIC_ClearAllBits();
	void STATIC_BitIsMarked();
};


// Class Engine.KismetRenderingLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetRenderingLibrary");
		return ptr;
	}


	void STATIC_MakeSkinWeightInfo();
	void STATIC_ExportTexture2D();
	void STATIC_ExportRenderTarget();
	void STATIC_EndDrawCanvasToRenderTarget();
	void STATIC_DrawMaterialToRenderTarget();
	void STATIC_CreateRenderTarget2D();
	void STATIC_ClearRenderTarget2D();
	void STATIC_BreakSkinWeightInfo();
	void STATIC_BeginDrawCanvasToRenderTarget();
};


// Class Engine.KismetStringLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}


	void STATIC_TrimTrailing();
	void STATIC_Trim();
	void STATIC_ToUpper();
	void STATIC_ToLower();
	void STATIC_TimeSecondsToString();
	void STATIC_StartsWith();
	void STATIC_Split();
	void STATIC_RightPad();
	void STATIC_RightChop();
	void STATIC_Right();
	void STATIC_Reverse();
	void STATIC_ReplaceInline();
	void STATIC_Replace();
	void STATIC_ParseIntoArray();
	void STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B);
	void STATIC_NotEqual_StriStri(const struct FString& A, const struct FString& B);
	void STATIC_Mid();
	void STATIC_MatchesWildcard();
	void STATIC_Len(const struct FString& S);
	void STATIC_LeftPad();
	void STATIC_LeftChop();
	void STATIC_Left();
	void STATIC_JoinStringArray();
	void STATIC_IsNumeric();
	void STATIC_GetSubstring();
	void STATIC_GetCharacterAsNumber();
	void STATIC_GetCharacterArrayFromString();
	void STATIC_FindSubstring();
	void STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	void STATIC_EqualEqual_StriStri(const struct FString& A, const struct FString& B);
	void STATIC_EndsWith();
	void STATIC_CullArray();
	void STATIC_Conv_VectorToString();
	void STATIC_Conv_Vector2dToString();
	void STATIC_Conv_TransformToString();
	void STATIC_Conv_StringToVector2D();
	void STATIC_Conv_StringToVector();
	void STATIC_Conv_StringToRotator();
	void STATIC_Conv_StringToName();
	void STATIC_Conv_StringToInt();
	void STATIC_Conv_StringToFloat();
	void STATIC_Conv_StringToColor();
	void STATIC_Conv_RotatorToString();
	void STATIC_Conv_ObjectToString();
	void STATIC_Conv_NameToString();
	void STATIC_Conv_IntVectorToString();
	void STATIC_Conv_IntToString();
	void STATIC_Conv_FloatToString();
	void STATIC_Conv_ColorToString();
	void STATIC_Conv_ByteToString();
	void STATIC_Conv_BoolToString();
	void STATIC_Contains();
	void STATIC_Concat_StrStr(const struct FString& A, const struct FString& B);
	void STATIC_BuildString_Vector2d();
	void STATIC_BuildString_Vector();
	void STATIC_BuildString_Rotator();
	void STATIC_BuildString_Object();
	void STATIC_BuildString_Name();
	void STATIC_BuildString_IntVector();
	void STATIC_BuildString_Int();
	void STATIC_BuildString_Float();
	void STATIC_BuildString_Color();
	void STATIC_BuildString_Bool();
};


// Class Engine.KismetStringTableLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringTableLibrary");
		return ptr;
	}


	void STATIC_IsRegisteredTableId();
	void STATIC_IsRegisteredTableEntry();
	void STATIC_GetTableNamespace();
	void STATIC_GetTableEntrySourceString();
	void STATIC_GetTableEntryMetaData();
	void STATIC_GetRegisteredStringTables();
	void STATIC_GetMetaDataIdsFromStringTableEntry();
	void STATIC_GetKeysFromStringTable();
};


// Class Engine.KismetTextLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}


	void STATIC_TextTrimTrailing();
	void STATIC_TextTrimPrecedingAndTrailing();
	void STATIC_TextTrimPreceding();
	void STATIC_TextToUpper();
	void STATIC_TextToLower();
	void STATIC_TextIsTransient();
	void STATIC_TextIsFromStringTable();
	void STATIC_TextIsEmpty();
	void STATIC_TextIsCultureInvariant();
	void STATIC_TextFromStringTable();
	void STATIC_StringTableIdAndKeyFromText();
	void STATIC_NotEqual_TextText(const struct FText& A, const struct FText& B);
	void STATIC_NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	void STATIC_GetEmptyText();
	void STATIC_Format();
	void STATIC_FindTextInLocalizationTable();
	void STATIC_EqualEqual_TextText(const struct FText& A, const struct FText& B);
	void STATIC_EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	void STATIC_Conv_VectorToText();
	void STATIC_Conv_Vector2dToText();
	void STATIC_Conv_TransformToText();
	void STATIC_Conv_TextToString();
	void STATIC_Conv_StringToText();
	void STATIC_Conv_RotatorToText();
	void STATIC_Conv_ObjectToText();
	void STATIC_Conv_NameToText();
	void STATIC_Conv_IntToText();
	void STATIC_Conv_FloatToText();
	void STATIC_Conv_ColorToText();
	void STATIC_Conv_ByteToText();
	void STATIC_Conv_BoolToText();
	void STATIC_AsTimeZoneTime_DateTime();
	void STATIC_AsTimeZoneDateTime_DateTime();
	void STATIC_AsTimeZoneDate_DateTime();
	void STATIC_AsTimespan_Timespan();
	void STATIC_AsTime_DateTime();
	void STATIC_AsPercent_Float();
	void STATIC_AsDateTime_DateTime();
	void STATIC_AsDate_DateTime();
	void STATIC_AsCurrencyBase();
	void STATIC_AsCurrency_Integer();
	void STATIC_AsCurrency_Float();
};


// Class Engine.MeshVertexPainterKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshVertexPainterKismetLibrary");
		return ptr;
	}


	void STATIC_RemovePaintedVertices(class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_PaintVerticesSingleColor(class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_PaintVerticesLerpAlongAxis(class UStaticMeshComponent* StaticMeshComponent);
};


// Class Engine.StereoLayerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowSplashScreen();
	void STATIC_SetSplashScreen(class UTexture* Texture);
	void STATIC_HideSplashScreen();
	void STATIC_EnableAutoLoadingSplashScreen();
};


// Class Engine.VisualLoggerKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerKismetLibrary");
		return ptr;
	}


	void STATIC_LogText();
	void STATIC_LogLocation();
	void STATIC_LogBox();
};


// Class Engine.PoseWatch
// 0x0010 (0x0038 - 0x0028)
class UPoseWatch : public UObject
{
public:
	class UEdGraphNode*                                Node;                                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseWatch");
		return ptr;
	}

};


// Class Engine.AnimBlueprintGeneratedClass
// 0x0070 (0x03A0 - 0x0330)
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0330(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.DataTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}


	void STATIC_GetDataTableRowNames();
	void STATIC_GetDataTableRowFromName();
	void STATIC_EvaluateCurveTableRow(class UCurveTable* CurveTable);
};


// Class Engine.BodySetup
// 0x0368 (0x0390 - 0x0028)
class UBodySetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x368];                                     // 0x0028(0x0368) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup");
		return ptr;
	}

};


// Class Engine.BodySetup2D
// 0x0030 (0x03C0 - 0x0390)
class UBodySetup2D : public UBodySetup
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0390(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup2D");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x00E8 (0x0110 - 0x0028)
class UPhysicsAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}

};


// Class Engine.SkeletalBodySetup
// 0x0010 (0x03A0 - 0x0390)
class USkeletalBodySetup : public UBodySetup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalBodySetup");
		return ptr;
	}

};


// Class Engine.BoneMaskFilter
// 0x0010 (0x0038 - 0x0028)
class UBoneMaskFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoneMaskFilter");
		return ptr;
	}

};


// Class Engine.BookMark
// 0x0028 (0x0050 - 0x0028)
class UBookMark : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x0010 (0x0038 - 0x0028)
class UBookMark2D : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.Breakpoint
// 0x0018 (0x0040 - 0x0028)
class UBreakpoint : public UObject
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0028(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UEdGraphNode*                                Node;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Breakpoint");
		return ptr;
	}

};


// Class Engine.BrushBuilder
// 0x0058 (0x0080 - 0x0028)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushBuilder");
		return ptr;
	}

};


// Class Engine.ButtonStyleAsset
// 0x02A8 (0x02D0 - 0x0028)
class UButtonStyleAsset : public UObject
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0028(0x02A8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ButtonStyleAsset");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x0508 (0x0530 - 0x0028)
class UCameraAnim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x508];                                     // 0x0028(0x0508) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x00E8 (0x0110 - 0x0028)
class UCameraAnimInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}

};


// Class Engine.CameraModifier
// 0x0020 (0x0048 - 0x0028)
class UCameraModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}

};


// Class Engine.Canvas
// 0x02A8 (0x02D0 - 0x0028)
class UCanvas : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0028(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}

};


// Class Engine.CameraModifier_CameraShake
// 0x0018 (0x0060 - 0x0048)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}

};


// Class Engine.Channel
// 0x0040 (0x0068 - 0x0028)
class UChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x01C8 (0x0230 - 0x0068)
class UActorChannel : public UChannel
{
public:
	class AActor*                                      Actor;                                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0070(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.VoiceChannel
// 0x0010 (0x0078 - 0x0068)
class UVoiceChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.Commandlet
// 0x0058 (0x0080 - 0x0028)
class UCommandlet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Commandlet");
		return ptr;
	}

};


// Class Engine.PluginCommandlet
// 0x0020 (0x00A0 - 0x0080)
class UPluginCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PluginCommandlet");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0x0000 (0x0080 - 0x0080)
class USmokeTestCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.CurveLinearColor
// 0x01C0 (0x01F0 - 0x0030)
class UCurveLinearColor : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0030(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColor");
		return ptr;
	}

};


// Class Engine.CurveVector
// 0x0150 (0x0180 - 0x0030)
class UCurveVector : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0030(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveVector");
		return ptr;
	}

};


// Class Engine.CurveEdPresetCurve
// 0x0000 (0x0028 - 0x0028)
class UCurveEdPresetCurve : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CurveSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UCurveSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveSourceInterface");
		return ptr;
	}


	void GetCurveValue();
	void GetCurves();
	void GetBindingName();
};


// Class Engine.CurveTable
// 0x0058 (0x0080 - 0x0028)
class UCurveTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveTable");
		return ptr;
	}

};


// Class Engine.CheckBoxStyleAsset
// 0x05E0 (0x0608 - 0x0028)
class UCheckBoxStyleAsset : public UObject
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0028(0x05E0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheckBoxStyleAsset");
		return ptr;
	}

};


// Class Engine.PreviewMeshCollection
// 0x0020 (0x0048 - 0x0028)
class UPreviewMeshCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USkeleton*                                   Skeleton;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewMeshCollection");
		return ptr;
	}

};


// Class Engine.PrimaryAssetLabel
// 0x0038 (0x0060 - 0x0028)
class UPrimaryAssetLabel : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryAssetLabel");
		return ptr;
	}

};


// Class Engine.TireType
// 0x0008 (0x0030 - 0x0028)
class UTireType : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TireType");
		return ptr;
	}

};


// Class Engine.DestructibleFractureSettings
// 0x0090 (0x00B8 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleFractureSettings");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0018 (0x0080 - 0x0068)
class UControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.PreviewCollectionInterface
// 0x0000 (0x0028 - 0x0028)
class UPreviewCollectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewCollectionInterface");
		return ptr;
	}

};


// Class Engine.AssetManagerSettings
// 0x0068 (0x00A0 - 0x0038)
class UAssetManagerSettings : public UDeveloperSettings
{
public:
	TArray<struct FPrimaryAssetTypeInfo>               PrimaryAssetTypesToScan;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManagerSettings");
		return ptr;
	}

};


// Class Engine.AudioSettings
// 0x0070 (0x00A8 - 0x0038)
class UAudioSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       DefaultSoundClassName;                                    // 0x0038(0x0010) (Edit, Config)
	struct FStringAssetReference                       DefaultSoundConcurrencyName;                              // 0x0048(0x0010) (Edit, Config)
	struct FStringAssetReference                       DefaultBaseSoundMix;                                      // 0x0058(0x0010) (Edit, Config)
	struct FStringAssetReference                       VoiPSoundClass;                                           // 0x0068(0x0010) (Edit, Config)
	float                                              LowPassFilterResonance;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaximumConcurrentStreams;                                 // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FAudioQualitySettings>               QualityLevels;                                            // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      bAllowVirtualizedSounds : 1;                              // 0x0090(0x0001) (Edit, Config)
	unsigned char                                      bDisableMasterEQ : 1;                                     // 0x0090(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0091(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSettings");
		return ptr;
	}

};


// Class Engine.CollisionProfile
// 0x0120 (0x0158 - 0x0038)
class UCollisionProfile : public UDeveloperSettings
{
public:
	TArray<struct FCollisionResponseTemplate>          Profiles;                                                 // 0x0038(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FCustomChannelSetup>                 DefaultChannelResponses;                                  // 0x0048(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FCustomProfile>                      EditProfiles;                                             // 0x0058(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FRedirector>                         ProfileRedirects;                                         // 0x0068(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FRedirector>                         CollisionChannelRedirects;                                // 0x0078(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0088(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CollisionProfile");
		return ptr;
	}

};


// Class Engine.StreamingSettings
// 0x0038 (0x0070 - 0x0038)
class UStreamingSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamingSettings");
		return ptr;
	}

};


// Class Engine.GarbageCollectionSettings
// 0x0020 (0x0058 - 0x0038)
class UGarbageCollectionSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GarbageCollectionSettings");
		return ptr;
	}

};


// Class Engine.MeshSimplificationSettings
// 0x0008 (0x0040 - 0x0038)
class UMeshSimplificationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshSimplificationSettings");
		return ptr;
	}

};


// Class Engine.NetworkSettings
// 0x0010 (0x0048 - 0x0038)
class UNetworkSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkSettings");
		return ptr;
	}

};


// Class Engine.PhysicsSettings
// 0x0078 (0x00B0 - 0x0038)
class UPhysicsSettings : public UDeveloperSettings
{
public:
	float                                              DefaultGravityZ;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultTerminalVelocity;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultFluidFriction;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                SimulateScratchMemorySize;                                // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                RagdollAggregateThreshold;                                // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TriangleMeshTriangleMinAreaThreshold;                     // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableAsyncScene;                                        // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableShapeSharing;                                      // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePCM;                                               // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bWarnMissingLocks;                                        // 0x0053(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnable2DPhysics;                                         // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ESettingsLockedAxis>                   LockedAxis;                                               // 0x0055(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)
	TEnumAsByte<ESettingsDOF>                          DefaultDegreesOfFreedom;                                  // 0x0056(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	float                                              BounceThresholdVelocity;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                      // 0x005C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                   // 0x005D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	float                                              MaxAngularVelocity;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxDepenetrationVelocity;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ContactOffsetMultiplier;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinContactOffset;                                         // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxContactOffset;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSimulateSkeletalMeshOnDedicatedServer;                   // 0x0074(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionTraceFlag>                   DefaultShapeComplexity;                                   // 0x0075(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDefaultHasComplexCollision;                              // 0x0076(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)
	bool                                               bSuppressFaceRemapTable;                                  // 0x0077(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSupportUVFromHitResults;                                 // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableActiveActors;                                     // 0x0079(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableCCD;                                              // 0x007A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x007B(0x0001) MISSED OFFSET
	float                                              MaxPhysicsDeltaTime;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSubstepping;                                             // 0x0080(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSubsteppingAsync;                                        // 0x0081(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              MaxSubstepDeltaTime;                                      // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSubsteps;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SyncSceneSmoothingFactor;                                 // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AsyncSceneSmoothingFactor;                                // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              InitialAverageFrameRate;                                  // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PhysXTreeRebuildRate;                                     // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FPhysicalSurfaceName>                PhysicalSurfaces;                                         // 0x00A0(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSettings");
		return ptr;
	}

};


// Class Engine.RendererSettings
// 0x0080 (0x00B8 - 0x0038)
class URendererSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0038(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererSettings");
		return ptr;
	}

};


// Class Engine.RendererOverrideSettings
// 0x0008 (0x0040 - 0x0038)
class URendererOverrideSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererOverrideSettings");
		return ptr;
	}

};


// Class Engine.UserInterfaceSettings
// 0x0130 (0x0168 - 0x0038)
class UUserInterfaceSettings : public UDeveloperSettings
{
public:
	ERenderFocusRule                                   RenderFocusRule;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FStringClassReference                       DefaultCursor;                                            // 0x0040(0x0010) (Edit, Config)
	unsigned char                                      UnknownData01[0x118];                                     // 0x0050(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserInterfaceSettings");
		return ptr;
	}

};


// Class Engine.DeviceProfileManager
// 0x00E8 (0x0110 - 0x0028)
class UDeviceProfileManager : public UObject
{
public:
	TArray<class UObject*>                             Profiles;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0038(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfileManager");
		return ptr;
	}

};


// Class Engine.DialogueVoice
// 0x0018 (0x0040 - 0x0028)
class UDialogueVoice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueVoice");
		return ptr;
	}

};


// Class Engine.DialogueWave
// 0x0048 (0x0070 - 0x0028)
class UDialogueWave : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueWave");
		return ptr;
	}

};


// Class Engine.Distribution
// 0x0008 (0x0030 - 0x0028)
class UDistribution : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Distribution");
		return ptr;
	}

};


// Class Engine.DistributionFloat
// 0x0008 (0x0038 - 0x0030)
class UDistributionFloat : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloat");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatConstant : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0x0020 (0x0060 - 0x0040)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatParticleParameter
// 0x0000 (0x0060 - 0x0060)
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.AnimationSettings
// 0x0038 (0x0070 - 0x0038)
class UAnimationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationSettings");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatUniform : public UDistributionFloat
{
public:
	float                                              Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVector
// 0x0008 (0x0038 - 0x0030)
class UDistributionVector : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVector");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x0018 (0x0050 - 0x0038)
class UDistributionVectorConstant : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0x0040 (0x0090 - 0x0050)
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0x0000 (0x0090 - 0x0090)
class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x0020 (0x0058 - 0x0038)
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniform : public UDistributionVector
{
public:
	struct FVector                                     Max;                                                      // 0x0038(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Min;                                                      // 0x0044(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DPICustomScalingRule
// 0x0000 (0x0028 - 0x0028)
class UDPICustomScalingRule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DPICustomScalingRule");
		return ptr;
	}

};


// Class Engine.DynamicBlueprintBinding
// 0x0000 (0x0028 - 0x0028)
class UDynamicBlueprintBinding : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
		return ptr;
	}

};


// Class Engine.ComponentDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ComponentDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputDelegateBinding
// 0x0000 (0x0028 - 0x0028)
class UInputDelegateBinding : public UDynamicBlueprintBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputActionDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputActionDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputTouchDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputTouchDelegateBinding");
		return ptr;
	}

};


// Class Engine.EdGraph
// 0x0098 (0x00C0 - 0x0028)
class UEdGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraph");
		return ptr;
	}

};


// Class Engine.EdGraphNode_Documentation
// 0x0020 (0x00C0 - 0x00A0)
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Documentation");
		return ptr;
	}

};


// Class Engine.EdGraphSchema
// 0x0000 (0x0028 - 0x0028)
class UEdGraphSchema : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphSchema");
		return ptr;
	}

};


// Class Engine.ImportantToggleSettingInterface
// 0x0000 (0x0028 - 0x0028)
class UImportantToggleSettingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportantToggleSettingInterface");
		return ptr;
	}

};


// Class Engine.EndUserSettings
// 0x0010 (0x0038 - 0x0028)
class UEndUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EndUserSettings");
		return ptr;
	}

};


// Class Engine.PendingNetGame
// 0x00A0 (0x00C8 - 0x0028)
class UPendingNetGame : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UNetDriver*                                  NetDriver;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDemoNetDriver*                              DemoNetDriver;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0040(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingNetGame");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x03E8 (0x0410 - 0x0028)
class UNetDriver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     NetConnectionClassName;                                   // 0x0030(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x3D0];                                     // 0x0040(0x03D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.InputKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputVectorAxisDelegateBinding
// 0x0000 (0x0038 - 0x0038)
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputVectorAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0x33748 (0x33790 - 0x0048)
class UNetConnection : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x33748];                                   // 0x0048(0x33748) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.DemoNetConnection
// 0x0020 (0x337B0 - 0x33790)
class UDemoNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x33790(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetConnection");
		return ptr;
	}

};


// Class Engine.DemoNetDriver
// 0x0590 (0x09A0 - 0x0410)
class UDemoNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x590];                                     // 0x0410(0x0590) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetDriver");
		return ptr;
	}

};


// Class Engine.EngineHandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UEngineHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineHandlerComponentFactory");
		return ptr;
	}

};


// Class Engine.Exporter
// 0x0040 (0x0068 - 0x0028)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Exporter");
		return ptr;
	}

};


// Class Engine.PackageMapClient
// 0x0290 (0x0370 - 0x00E0)
class UPackageMapClient : public UPackageMap
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x00E0(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapClient");
		return ptr;
	}

};


// Class Engine.Font
// 0x0198 (0x01C0 - 0x0028)
class UFont : public UObject
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.FontFace
// 0x0030 (0x0058 - 0x0028)
class UFontFace : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontFace");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Base
// 0x0000 (0x0028 - 0x0028)
class UHapticFeedbackEffect_Base : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Base");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Buffer
// 0x0040 (0x0068 - 0x0028)
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Buffer");
		return ptr;
	}

};


// Class Engine.FontImportOptions
// 0x00B0 (0x00D8 - 0x0028)
class UFontImportOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Curve
// 0x00F0 (0x0118 - 0x0028)
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Curve");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_SoundWave
// 0x0038 (0x0060 - 0x0028)
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
public:
	class USoundWave*                                  SoundWave;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_SoundWave");
		return ptr;
	}

};


// Class Engine.InheritableComponentHandler
// 0x0020 (0x0048 - 0x0028)
class UInheritableComponentHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InheritableComponentHandler");
		return ptr;
	}

};


// Class Engine.InputSettings
// 0x0080 (0x00A8 - 0x0028)
class UInputSettings : public UObject
{
public:
	TArray<struct FInputAxisConfigEntry>               AxisConfig;                                               // 0x0028(0x0010) (Edit, EditFixedSize, ZeroConstructor, Config)
	unsigned char                                      bAltEnterTogglesFullscreen : 1;                           // 0x0038(0x0001) (Edit, Config)
	unsigned char                                      bF11TogglesFullscreen : 1;                                // 0x0038(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x6F];                                      // 0x0039(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputSettings");
		return ptr;
	}

};


// Class Engine.InterpCurveEdSetup
// 0x0018 (0x0040 - 0x0028)
class UInterpCurveEdSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x0048 (0x0070 - 0x0028)
class UInterpData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x0010 (0x0038 - 0x0028)
class UInterpFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Custom : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x0028 (0x0050 - 0x0028)
class UInterpGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x0010 (0x0060 - 0x0050)
class UInterpGroupCamera : public UInterpGroup
{
public:
	class UCameraAnim*                                 CameraAnimInst;                                           // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0x0000 (0x0050 - 0x0050)
class UInterpGroupDirector : public UInterpGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x0020 (0x0048 - 0x0028)
class UInterpGroupInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrack
// 0x0048 (0x0070 - 0x0028)
class UInterpTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackDirector : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackFloatBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAnimControl
// 0x0020 (0x00B0 - 0x0090)
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatAnimBPParam
// 0x0020 (0x00B0 - 0x0090)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x0058 (0x00C8 - 0x0070)
class UInterpTrackMove : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0070(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x0010 (0x0080 - 0x0070)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Classes : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackToggle : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackSlomo
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackSlomo : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackVectorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackVisibility : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstFade : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatAnimBPParam
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class UBoolProperty*                               BoolProperty;                                             // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0x0010 (0x0048 - 0x0038)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x0010 (0x0048 - 0x0038)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSlomo
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstSlomo : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.IntSerialization
// 0x0028 (0x0050 - 0x0028)
class UIntSerialization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IntSerialization");
		return ptr;
	}

};


// Class Engine.Layer
// 0x0020 (0x0048 - 0x0028)
class ULayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Layer");
		return ptr;
	}

};


// Class Engine.LevelActorContainer
// 0x0010 (0x0038 - 0x0028)
class ULevelActorContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelActorContainer");
		return ptr;
	}

};


// Class Engine.LevelStreaming
// 0x0138 (0x0160 - 0x0028)
class ULevelStreaming : public UObject
{
public:
	struct FName                                       PackageName;                                              // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x130];                                     // 0x0030(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}

};


// Class Engine.LevelStreamingAlwaysLoaded
// 0x0000 (0x0160 - 0x0160)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingKismet
// 0x0000 (0x0160 - 0x0160)
class ULevelStreamingKismet : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingKismet");
		return ptr;
	}

};


// Class Engine.LevelStreamingPersistent
// 0x0000 (0x0160 - 0x0160)
class ULevelStreamingPersistent : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x0018 (0x0040 - 0x0028)
class ULightmappedSurfaceCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x0018 (0x0040 - 0x0028)
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.EngineMessage
// 0x0080 (0x00A8 - 0x0028)
class UEngineMessage : public ULocalMessage
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineMessage");
		return ptr;
	}

};


// Class Engine.MapBuildDataRegistry
// 0x00F8 (0x0120 - 0x0028)
class UMapBuildDataRegistry : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MapBuildDataRegistry");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAbs
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionAbs : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorPositionWS
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionActorPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionAdd : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArccosine
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionArccosine : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArccosineFast
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionArccosineFast : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosineFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArcsine
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionArcsine : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArcsineFast
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionArcsineFast : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsineFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionArctangent : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent2
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionArctangent2 : public UMaterialExpression
{
public:
	struct FExpressionInput                            Y;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            X;                                                        // 0x0098(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent2Fast
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionArctangent2Fast : public UMaterialExpression
{
public:
	struct FExpressionInput                            Y;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            X;                                                        // 0x0098(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2Fast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangentFast
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionArctangentFast : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangentFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericFogColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericLightColor
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionAtmosphericLightColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericLightVector
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionAtmosphericLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlackBody
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionBlackBody : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlackBody");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlendMaterialAttributes
// 0x00C0 (0x0120 - 0x0060)
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
public:
	struct FMaterialAttributesInput                    A;                                                        // 0x0060(0x0040)
	struct FMaterialAttributesInput                    B;                                                        // 0x00A0(0x0040)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlendMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBreakMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x00B8 (0x0118 - 0x0060)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0060(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraPositionWS
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVectorWS
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionCeil : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x00B8 (0x0118 - 0x0060)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	struct FExpressionInput                            Min;                                                      // 0x0098(0x0038)
	struct FExpressionInput                            Max;                                                      // 0x00D0(0x0038)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCollectionParameter
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCollectionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x0028 (0x0088 - 0x0060)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionConstant : public UMaterialExpression
{
public:
	float                                              R;                                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:
	float                                              R;                                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	float                                              Period;                                                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClearCoatNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangentOutput
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangentOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDX
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionDDX : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDX");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDY
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionDDY : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDY");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalDerivative
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionDecalDerivative : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalDerivative");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalLifetimeOpacity
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionDecalLifetimeOpacity : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalLifetimeOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalMipmapLevel
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalMipmapLevel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthFade
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x0080 (0x00E0 - 0x0060)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	struct FExpressionInput                            Fraction;                                                 // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionDistance : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceCullFade
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceCullFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceFieldGradient
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceFieldGradient");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceToNearestSurface
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceToNearestSurface");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionDivide : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionEyeAdaptation
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionEyeAdaptation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x0118 (0x0178 - 0x0060)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            Default;                                                  // 0x0060(0x0038)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0098(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFeatureLevelSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionFloor : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
	class UFont*                                       Font;                                                     // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x00B8 (0x0118 - 0x0060)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0060(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionFrac : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x00D0 (0x0130 - 0x0060)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0060(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGetMaterialAttributes
// 0x0050 (0x00B0 - 0x0060)
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0060(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGetMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGIReplace
// 0x00A8 (0x0108 - 0x0060)
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:
	struct FExpressionInput                            Default;                                                  // 0x0060(0x0038)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0098(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGIReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x0128 (0x0188 - 0x0060)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x00D0(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0060(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm2
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
public:
	struct FExpressionInput                            X;                                                        // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x0578 (0x05D8 - 0x0060)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:
	struct FExpressionInput                            BaseColor;                                                // 0x0060(0x0038)
	struct FExpressionInput                            Metallic;                                                 // 0x0098(0x0038)
	struct FExpressionInput                            Specular;                                                 // 0x00D0(0x0038)
	struct FExpressionInput                            Roughness;                                                // 0x0108(0x0038)
	unsigned char                                      UnknownData00[0x498];                                     // 0x0140(0x0498) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMakeMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0028 (0x0088 - 0x0060)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
	class UMaterialFunction*                           MaterialFunction;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialProxyReplace
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0060(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialProxyReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMax
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionMax : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMax");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMin
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionMin : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMin");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNoise
// 0x0098 (0x00F8 - 0x0060)
class UMaterialExpressionNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0060(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x00B8 (0x0118 - 0x0060)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00D0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectBounds
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionObjectBounds : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectBounds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectPositionWS
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x00B8 (0x0118 - 0x0060)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0060(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x0010 (0x0090 - 0x0080)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0x0008 (0x0088 - 0x0080)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0070 (0x00F8 - 0x0088)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:
	struct FExpressionInput                            A;                                                        // 0x0088(0x0038)
	struct FExpressionInput                            B;                                                        // 0x00C0(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0040 (0x00C0 - 0x0080)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0080(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x0010 (0x0090 - 0x0080)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleColor
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleDirection
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleDirection : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMotionBlurFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRadius
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticlePositionWS
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticlePositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRandom
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSize
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSpeed
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceFadeAmount");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionPixelDepth : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelNormalWS
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPrecomputedAOMask
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPrecomputedAOMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRelativeTime
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRelativeTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedNormal
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionPreSkinnedNormal : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedPosition
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionPreSkinnedPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreviousFrameSwitch
// 0x0070 (0x00D0 - 0x0060)
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0060(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreviousFrameSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x00E0 (0x0140 - 0x0060)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            Default;                                                  // 0x0060(0x0038)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0098(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVectorWS
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReroute
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionReroute : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReroute");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x00E8 (0x0148 - 0x0060)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0060(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x0080 (0x00E0 - 0x0060)
class UMaterialExpressionRotator : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRound
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionRound : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRound");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSaturate
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionSaturate : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSaturate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneColor
// 0x0080 (0x00E0 - 0x0060)
class UMaterialExpressionSceneColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x0080 (0x00E0 - 0x0060)
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexelSize
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSetMaterialAttributes
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSetMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	float                                              Period;                                                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSpeedTree
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSpeedTree");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x00E8 (0x0148 - 0x0060)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x78];                                      // 0x00D0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphericalParticleOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x00B0 (0x0110 - 0x0060)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0060(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x0078 (0x00D8 - 0x0060)
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:
	struct FExpressionInput                            A;                                                        // 0x0060(0x0038)
	struct FExpressionInput                            B;                                                        // 0x0098(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureBase
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionTextureBase : public UMaterialExpression
{
public:
	class UTexture*                                    Texture;                                                  // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureBase");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0x0128 (0x0198 - 0x0070)
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0070(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x0008 (0x01A0 - 0x0198)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangent
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionTangent : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	float                                              Period;                                                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0x0020 (0x01B8 - 0x0198)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0198(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000 (0x01B8 - 0x01B8)
class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0008 (0x01C0 - 0x01B8)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0008 (0x01C0 - 0x01B8)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000 (0x01B8 - 0x01B8)
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureProperty
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionTextureProperty : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	unsigned char                                      R : 1;                                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      G : 1;                                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      B : 1;                                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      A : 1;                                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTruncate
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionTruncate : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTruncate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorNoise
// 0x0048 (0x00A8 - 0x0060)
class UMaterialExpressionVectorNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0060(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexNormalWS
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewProperty
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionViewProperty : public UMaterialExpression
{
public:
	TEnumAsByte<EMaterialExposedViewProperty>          Property;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewSize
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionViewSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0x0040 (0x0068 - 0x0028)
class UMaterialFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.Material
// 0x0918 (0x0988 - 0x0070)
class UMaterial : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x918];                                     // 0x0070(0x0918) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.MaterialInstanceDynamic
// 0x0050 (0x0200 - 0x01B0)
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x01B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceDynamic");
		return ptr;
	}


	void SetVectorParameterValue();
	void SetTextureParameterValue();
	void SetScalarParameterValue();
	void K2_InterpolateMaterialInstanceParams(class UMaterialInstance* SourceA, class UMaterialInstance* SourceB);
	void K2_GetVectorParameterValue();
	void K2_GetTextureParameterValue();
	void K2_GetScalarParameterValue();
	void K2_CopyMaterialInstanceParameters(class UMaterialInterface* Source);
	void CopyParameterOverrides(class UMaterialInstance* MaterialInstance);
	void CopyInterpParameters(class UMaterialInstance* Source);
};


// Class Engine.MaterialParameterCollection
// 0x0040 (0x0068 - 0x0028)
class UMaterialParameterCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollection");
		return ptr;
	}

};


// Class Engine.MaterialParameterCollectionInstance
// 0x00C0 (0x00E8 - 0x0028)
class UMaterialParameterCollectionInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollectionInstance");
		return ptr;
	}

};


// Class Engine.MatineeInterface
// 0x0000 (0x0028 - 0x0028)
class UMatineeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeInterface");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x0018 (0x0040 - 0x0028)
class UMorphTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.NavArea_Default
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Default");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
	struct FExpressionInput                            Input;                                                    // 0x0060(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.NavArea_LowHeight
// 0x0000 (0x0040 - 0x0040)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_LowHeight");
		return ptr;
	}

};


// Class Engine.NavArea_Null
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Null");
		return ptr;
	}

};


// Class Engine.NavArea_Obstacle
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Obstacle");
		return ptr;
	}

};


// Class Engine.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C0 - 0x0040)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class Engine.NavCollision
// 0x00E8 (0x0110 - 0x0028)
class UNavCollision : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavCollision");
		return ptr;
	}

};


// Class Engine.NavEdgeProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UNavEdgeProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavEdgeProviderInterface");
		return ptr;
	}

};


// Class Engine.NavigationDataChunk
// 0x0008 (0x0030 - 0x0028)
class UNavigationDataChunk : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataChunk");
		return ptr;
	}

};


// Class Engine.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastNavMeshDataChunk");
		return ptr;
	}

};


// Class Engine.NavigationPath
// 0x0098 (0x00C0 - 0x0028)
class UNavigationPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPath");
		return ptr;
	}

};


// Class Engine.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPathGenerator");
		return ptr;
	}

};


// Class Engine.RecastFilter_UseDefaultArea
// 0x0000 (0x0048 - 0x0048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class Engine.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkTrivial");
		return ptr;
	}

};


// Class Engine.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavNodeInterface");
		return ptr;
	}

};


// Class Engine.ObjectLibrary
// 0x0138 (0x0160 - 0x0028)
class UObjectLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}

};


// Class Engine.OnlineEngineInterface
// 0x0000 (0x0028 - 0x0028)
class UOnlineEngineInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEngineInterface");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x0148 (0x0170 - 0x0028)
class UParticleEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0028(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}

};


// Class Engine.ParticleSpriteEmitter
// 0x0000 (0x0170 - 0x0170)
class UParticleSpriteEmitter : public UParticleEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000 (0x01B8 - 0x01B8)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x0090 (0x00B8 - 0x0028)
class UParticleLODLevel : public UObject
{
public:
	int                                                Level;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x002C(0x0001)
	unsigned char                                      UnknownData00[0x8B];                                      // 0x002D(0x008B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x0010 (0x0038 - 0x0028)
class UObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x0008 (0x0030 - 0x0028)
class UParticleModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleAccelerationBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:
	struct FRawDistributionVector                      Acceleration;                                             // 0x0038(0x0050) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationConstant
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:
	struct FVector                                     Acceleration;                                             // 0x0038(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationConstant");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDrag
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDrag");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDragScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleAttractorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x0088 (0x00B8 - 0x0030)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x00C8 (0x00F8 - 0x0030)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPointGravity
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPointGravity");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleBeamBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x00F0 (0x0120 - 0x0030)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x0188 (0x01B8 - 0x0030)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0030(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x0108 (0x0138 - 0x0030)
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0030(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleCameraBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x0108 (0x0138 - 0x0030)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0030(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
	struct FRawDistributionFloat                       CameraOffset;                                             // 0x0030(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleCollisionBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x0188 (0x01B8 - 0x0030)
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0030(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionGPU
// 0x0088 (0x00B8 - 0x0030)
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionGPU");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleColorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleColor : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0x0020 (0x00E0 - 0x00C0)
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0008 (0x0048 - 0x0040)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0x00A8 (0x00E8 - 0x0040)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0040(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleKillBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x00A8 (0x00D8 - 0x0030)
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0030(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLifetimeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLightBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLightBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLightBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight
// 0x0110 (0x0140 - 0x0030)
class UParticleModuleLight : public UParticleModuleLightBase
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0030(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLocationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0x0020 (0x00A8 - 0x0088)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000 (0x0088 - 0x0088)
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x0020 (0x00A8 - 0x0088)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x0140 (0x0170 - 0x0030)
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:
	struct FRawDistributionVector                      Location;                                                 // 0x0030(0x0050) (Edit)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0080(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x0020 (0x0050 - 0x0030)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x0080 (0x0140 - 0x00C0)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0038 (0x00F8 - 0x00C0)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x0020 (0x0118 - 0x00F8)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight_Seeded
// 0x0020 (0x0160 - 0x0140)
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0140(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x0020 (0x0160 - 0x0140)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0140(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModulePivotOffset
// 0x0008 (0x0038 - 0x0030)
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePivotOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleMaterialBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0x0110 (0x0148 - 0x0038)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0038(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0060 (0x0090 - 0x0030)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
	struct FRawDistributionFloat                       Height;                                                   // 0x0030(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleOrientationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleParameterBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x0020 (0x0068 - 0x0048)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.SubUVAnimation
// 0x0038 (0x0060 - 0x0028)
class USubUVAnimation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubUVAnimation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x0140 (0x0170 - 0x0030)
class UParticleModuleRequired : public UParticleModule
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x138];                                     // 0x0038(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleRotationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x0020 (0x00A8 - 0x0088)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleRotationRateBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x0020 (0x00A0 - 0x0080)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleSizeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0x0020 (0x00A0 - 0x0080)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x0058 (0x0088 - 0x0030)
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleBySpeed");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleSpawnBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0x00C8 (0x0100 - 0x0038)
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0038(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleSubUVBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x0048 (0x0078 - 0x0030)
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0x0048 (0x00C0 - 0x0078)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0078(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleTrailBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x0068 (0x0098 - 0x0030)
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x0138 (0x0168 - 0x0030)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0030(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataGpu
// 0x0430 (0x0460 - 0x0030)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x430];                                     // 0x0030(0x0430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataGpu");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x0088 (0x00B8 - 0x0030)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x0030 (0x0060 - 0x0030)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleVectorFieldBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldGlobal
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldGlobal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldLocal
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:
	class UVectorField*                                VectorField;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldLocal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotation
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:
	struct FVector                                     RotationRate;                                             // 0x0030(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleVelocityBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0x0088 (0x00C0 - 0x0038)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0x0020 (0x00E0 - 0x00C0)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0x0080 (0x00B8 - 0x0038)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0038(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x0000 (0x0028 - 0x0028)
class UParticleModuleEventSendToGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}

};


// Class Engine.ParticleSystemReplay
// 0x0018 (0x0040 - 0x0028)
class UParticleSystemReplay : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.DemoPendingNetGame
// 0x0000 (0x00C8 - 0x00C8)
class UDemoPendingNetGame : public UPendingNetGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPendingNetGame");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScale
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScale");
		return ptr;
	}

};


// Class Engine.PhysicalMaterial
// 0x0058 (0x0080 - 0x0028)
class UPhysicalMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}

};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000 (0x0028 - 0x0028)
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x00F8 (0x0128 - 0x0030)
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0030(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveTriangle");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintTemplate
// 0x0318 (0x0340 - 0x0028)
class UPhysicsConstraintTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FConstraintInstance                         DefaultInstance;                                          // 0x0030(0x01F0) (Edit)
	unsigned char                                      UnknownData01[0x120];                                     // 0x0220(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintTemplate");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceBase
// 0x0010 (0x0038 - 0x0028)
class UPlatformInterfaceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}

};


// Class Engine.CloudStorageBase
// 0x0018 (0x0050 - 0x0038)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}

};


// Class Engine.InGameAdManager
// 0x0028 (0x0060 - 0x0038)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}

};


// Class Engine.PhysicsCollisionHandler
// 0x0018 (0x0040 - 0x0028)
class UPhysicsCollisionHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsCollisionHandler");
		return ptr;
	}

};


// Class Engine.TwitterIntegrationBase
// 0x0000 (0x0038 - 0x0038)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}


	void TwitterRequest(const struct FString& URL);
	void ShowTweetUI();
	void Init();
	void GetNumAccounts();
	void GetAccountName();
	void CanShowTweetUI();
	void AuthorizeAccounts();
};


// Class Engine.PlatformInterfaceWebResponse
// 0x0088 (0x00B0 - 0x0028)
class UPlatformInterfaceWebResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}

};


// Class Engine.ChildConnection
// 0x0008 (0x33798 - 0x33790)
class UChildConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x33790(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.Polys
// 0x0010 (0x0038 - 0x0028)
class UPolys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.ReporterBase
// 0x0008 (0x0030 - 0x0028)
class UReporterBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterBase");
		return ptr;
	}

};


// Class Engine.ReporterGraph
// 0x0078 (0x00A8 - 0x0030)
class UReporterGraph : public UReporterBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterGraph");
		return ptr;
	}

};


// Class Engine.MicroTransactionBase
// 0x0030 (0x0068 - 0x0038)
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}

};


// Class Engine.Rig
// 0x0020 (0x0048 - 0x0028)
class URig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Rig");
		return ptr;
	}

};


// Class Engine.SaveGame
// 0x0000 (0x0028 - 0x0028)
class USaveGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGame");
		return ptr;
	}

};


// Class Engine.SimpleConstructionScript
// 0x0090 (0x00B8 - 0x0028)
class USimpleConstructionScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleConstructionScript");
		return ptr;
	}

};


// Class Engine.SCS_Node
// 0x0118 (0x0140 - 0x0028)
class USCS_Node : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0028(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SCS_Node");
		return ptr;
	}

};


// Class Engine.ReverbEffect
// 0x0030 (0x0058 - 0x0028)
class UReverbEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbEffect");
		return ptr;
	}

};


// Class Engine.DestructibleMesh
// 0x00A0 (0x0360 - 0x02C0)
class UDestructibleMesh : public USkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02C0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleMesh");
		return ptr;
	}

};


// Class Engine.SkeletalMeshReductionSettings
// 0x0018 (0x0040 - 0x0028)
class USkeletalMeshReductionSettings : public UObject
{
public:
	TArray<struct FSkeletalMeshLODGroupSettings>       Settings;                                                 // 0x0028(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshReductionSettings");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x0038 (0x0060 - 0x0028)
class USkeletalMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}

};


// Class Engine.Texture
// 0x00A0 (0x00C8 - 0x0028)
class UTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.SlateTextureAtlasInterface
// 0x0000 (0x0028 - 0x0028)
class USlateTextureAtlasInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateTextureAtlasInterface");
		return ptr;
	}

};


// Class Engine.Selection
// 0x0068 (0x0090 - 0x0028)
class USelection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.SoundConcurrency
// 0x0010 (0x0038 - 0x0028)
class USoundConcurrency : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundConcurrency");
		return ptr;
	}

};


// Class Engine.SoundBase
// 0x0068 (0x0090 - 0x0028)
class USoundBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundBase");
		return ptr;
	}

};


// Class Engine.DialogueSoundWaveProxy
// 0x0018 (0x00A8 - 0x0090)
class UDialogueSoundWaveProxy : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueSoundWaveProxy");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x0148 (0x01D8 - 0x0090)
class USoundCue : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0090(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}

};


// Class Engine.SoundGroups
// 0x0060 (0x0088 - 0x0028)
class USoundGroups : public UObject
{
public:
	TArray<struct FSoundGroup>                         SoundGroupProfiles;                                       // 0x0028(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundGroups");
		return ptr;
	}

};


// Class Engine.SoundWave
// 0x01E0 (0x0270 - 0x0090)
class USoundWave : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0090(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWave");
		return ptr;
	}

};


// Class Engine.SlateBrushAsset
// 0x0090 (0x00B8 - 0x0028)
class USlateBrushAsset : public UObject
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0028(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateBrushAsset");
		return ptr;
	}

};


// Class Engine.SoundClass
// 0x0058 (0x0080 - 0x0028)
class USoundClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundEffectPreset
// 0x0018 (0x0040 - 0x0028)
class USoundEffectPreset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectPreset");
		return ptr;
	}

};


// Class Engine.SoundEffectSourcePreset
// 0x0000 (0x0040 - 0x0040)
class USoundEffectSourcePreset : public USoundEffectPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePreset");
		return ptr;
	}

};


// Class Engine.SoundEffectSubmixPreset
// 0x0000 (0x0040 - 0x0040)
class USoundEffectSubmixPreset : public USoundEffectPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSubmixPreset");
		return ptr;
	}

};


// Class Engine.SoundMix
// 0x0060 (0x0088 - 0x0028)
class USoundMix : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMix");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x0010 (0x0038 - 0x0028)
class USoundNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.SoundNodeAssetReferencer
// 0x0000 (0x0038 - 0x0038)
class USoundNodeAssetReferencer : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAssetReferencer");
		return ptr;
	}

};


// Class Engine.SoundWaveProcedural
// 0x0080 (0x02F0 - 0x0270)
class USoundWaveProcedural : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0270(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWaveProcedural");
		return ptr;
	}

};


// Class Engine.SoundNodeWavePlayer
// 0x0030 (0x0068 - 0x0038)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWavePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x0130 (0x0168 - 0x0038)
class USoundNodeAttenuation : public USoundNode
{
public:
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0040(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeBranch
// 0x0008 (0x0040 - 0x0038)
class USoundNodeBranch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeBranch");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0x0010 (0x0048 - 0x0038)
class USoundNodeConcatenator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x0008 (0x0040 - 0x0038)
class USoundNodeDelay : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDialoguePlayer
// 0x0028 (0x0060 - 0x0038)
class USoundNodeDialoguePlayer : public USoundNode
{
public:
	struct FDialogueWaveParameter                      DialogueWaveParameter;                                    // 0x0038(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDialoguePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0x0010 (0x0048 - 0x0038)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeParamCrossFade
// 0x0008 (0x0050 - 0x0048)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeParamCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x0008 (0x0040 - 0x0038)
class USoundNodeDoppler : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x0128 (0x0160 - 0x0038)
class USoundNodeEnveloper : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0038(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeGroupControl
// 0x0010 (0x0048 - 0x0038)
class USoundNodeGroupControl : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeGroupControl");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x0008 (0x0040 - 0x0038)
class USoundNodeLooping : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0x0000 (0x0038 - 0x0038)
class USoundNodeMature : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x0010 (0x0048 - 0x0038)
class USoundNodeMixer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x0010 (0x0048 - 0x0038)
class USoundNodeModulator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x0040 (0x0078 - 0x0038)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x0028 (0x0060 - 0x0038)
class USoundNodeOscillator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeQualityLevel
// 0x0000 (0x0038 - 0x0038)
class USoundNodeQualityLevel : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeQualityLevel");
		return ptr;
	}

};


// Class Engine.SoundNodeSoundClass
// 0x0008 (0x0040 - 0x0038)
class USoundNodeSoundClass : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSoundClass");
		return ptr;
	}

};


// Class Engine.SoundNodeSwitch
// 0x0008 (0x0040 - 0x0038)
class USoundNodeSwitch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSwitch");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveParam
// 0x0008 (0x0040 - 0x0038)
class USoundNodeWaveParam : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x0030 (0x0068 - 0x0038)
class USoundNodeRandom : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundSubmix
// 0x0030 (0x0058 - 0x0028)
class USoundSubmix : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSubmix");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x0110 (0x0138 - 0x0028)
class UStaticMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}

};


// Class Engine.StaticMeshSocket
// 0x0040 (0x0068 - 0x0028)
class UStaticMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}

};


// Class Engine.StringTable
// 0x0018 (0x0040 - 0x0028)
class UStringTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StringTable");
		return ptr;
	}

};


// Class Engine.VertexAttributeStream
// 0x0020 (0x0048 - 0x0028)
class UVertexAttributeStream : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexAttributeStream");
		return ptr;
	}

};


// Class Engine.SubDSurface
// 0x0050 (0x0078 - 0x0028)
class USubDSurface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubDSurface");
		return ptr;
	}

};


// Class Engine.SubsurfaceProfile
// 0x0028 (0x0050 - 0x0028)
class USubsurfaceProfile : public UObject
{
public:
	struct FSubsurfaceProfileStruct                    Settings;                                                 // 0x0028(0x0024) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsurfaceProfile");
		return ptr;
	}

};


// Class Engine.TextPropertyTestObject
// 0x0048 (0x0070 - 0x0028)
class UTextPropertyTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextPropertyTestObject");
		return ptr;
	}

};


// Class Engine.Texture2D
// 0x0048 (0x0110 - 0x00C8)
class UTexture2D : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x0008 (0x0118 - 0x0110)
class UShadowMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.TextureLightProfile
// 0x0008 (0x0118 - 0x0110)
class UTextureLightProfile : public UTexture2D
{
public:
	float                                              Brightness;                                               // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLightProfile");
		return ptr;
	}

};


// Class Engine.Texture2DDynamic
// 0x0018 (0x00E0 - 0x00C8)
class UTexture2DDynamic : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TEnumAsByte<EPixelFormat>                          Format;                                                   // 0x00D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}

};


// Class Engine.TextureCube
// 0x0058 (0x0120 - 0x00C8)
class UTextureCube : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00C8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget
// 0x0008 (0x00D0 - 0x00C8)
class UTextureRenderTarget : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0x0028 (0x00F8 - 0x00D0)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}

};


// Class Engine.CanvasRenderTarget2D
// 0x0020 (0x0118 - 0x00F8)
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CanvasRenderTarget2D");
		return ptr;
	}

};


// Class Engine.TextureRenderTargetCube
// 0x0020 (0x00F0 - 0x00D0)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.TextureLODSettings
// 0x0010 (0x0038 - 0x0028)
class UTextureLODSettings : public UObject
{
public:
	TArray<struct FTextureLODGroup>                    TextureLODGroups;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLODSettings");
		return ptr;
	}

};


// Class Engine.ThumbnailInfo
// 0x0000 (0x0028 - 0x0028)
class UThumbnailInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThumbnailInfo");
		return ptr;
	}

};


// Class Engine.TimelineTemplate
// 0x0070 (0x0098 - 0x0028)
class UTimelineTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineTemplate");
		return ptr;
	}

};


// Class Engine.TouchInterface
// 0x0030 (0x0058 - 0x0028)
class UTouchInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TouchInterface");
		return ptr;
	}

};


// Class Engine.UserDefinedEnum
// 0x0050 (0x00B0 - 0x0060)
class UUserDefinedEnum : public UEnum
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0060(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
		return ptr;
	}

};


// Class Engine.VectorField
// 0x0020 (0x0048 - 0x0028)
class UVectorField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorField");
		return ptr;
	}

};


// Class Engine.VectorFieldAnimated
// 0x0040 (0x0088 - 0x0048)
class UVectorFieldAnimated : public UVectorField
{
public:
	class UTexture2D*                                  Texture;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldAnimated");
		return ptr;
	}

};


// Class Engine.VectorFieldStatic
// 0x0088 (0x00D0 - 0x0048)
class UVectorFieldStatic : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldStatic");
		return ptr;
	}

};


// Class Engine.VisualLoggerAutomationTests
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerAutomationTests : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerAutomationTests");
		return ptr;
	}

};


// Class Engine.VisualLoggerDebugSnapshotInterface
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerDebugSnapshotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerDebugSnapshotInterface");
		return ptr;
	}

};


// Class Engine.WorldComposition
// 0x0040 (0x0068 - 0x0028)
class UWorldComposition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldComposition");
		return ptr;
	}

};


// Class Engine.LightMapTexture2D
// 0x0008 (0x0118 - 0x0110)
class ULightMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.PhysicsSerializer
// 0x00A8 (0x00D0 - 0x0028)
class UPhysicsSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSerializer");
		return ptr;
	}

};


// Class Engine.DeviceProfile
// 0x0088 (0x00C0 - 0x0038)
class UDeviceProfile : public UTextureLODSettings
{
public:
	struct FString                                     DeviceType;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config, EditConst)
	struct FString                                     BaseProfileName;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0058(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfile");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
