#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
struct AFort_Entry_Music_Controller_BP_C_Change_Music_Params
{
public:
	class USoundBase*                            New_Music;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
struct AFort_Entry_Music_Controller_BP_C_ListenToMusicPacks_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
struct AFort_Entry_Music_Controller_BP_C_OnMusicPackChanged_Params
{
public:
	class UAthenaMusicPackItemDefinition*        NewMusicPack;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
struct AFort_Entry_Music_Controller_BP_C_Lobby_Music_Override_Params
{
public:
	bool                                         Lobby_Music_Activate;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6221[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            New_Music;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.MakeNextMusicPackStartFromBeginning
struct AFort_Entry_Music_Controller_BP_C_MakeNextMusicPackStartFromBeginning_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.DelayedPlayMusicPack
struct AFort_Entry_Music_Controller_BP_C_DelayedPlayMusicPack_Params
{
public:
	class UAthenaMusicPackItemDefinition*        MusicPackToPlayLater;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ClearDelayedPlayMusicPack
struct AFort_Entry_Music_Controller_BP_C_ClearDelayedPlayMusicPack_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.PlayEquippedMusicPack
struct AFort_Entry_Music_Controller_BP_C_PlayEquippedMusicPack_Params
{
public:
};

// 0xA4 (0xA4 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
struct AFort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6222[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_CustomEvent_New_Music_1;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6223[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMusicPackItemDefinition*        K2Node_CustomEvent_NewMusicPack;                   // 0x18(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Lobby_Music_Activate;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6224[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_CustomEvent_New_Music;                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6225[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_DynamicCast_AsSound_Base;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6226[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMusicPackItemDefinition*        CallFunc_GetEquippedMusicPack_ReturnValue;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6227[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6228[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMusicPackItemDefinition*        CallFunc_GetEquippedMusicPack_ReturnValue_1;       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMusicPackItemDefinition*        K2Node_CustomEvent_MusicPackToPlayLater;           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue_2;                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6229[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x94(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
