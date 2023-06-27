#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
struct UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Params
{
	struct FString                                     DeviceName;                                               // (ConstParm, Parm, ZeroConstructor)
	int                                                DeviceID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
struct UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Params
{
	struct FString                                     DeviceName;                                               // (ConstParm, Parm, ZeroConstructor)
	int                                                DeviceID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIOutputDeviceID
struct UMIDIDeviceManager_GetDefaultIMIDIOutputDeviceID_Params
{
	int                                                DeviceID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIInputDeviceID
struct UMIDIDeviceManager_GetDefaultIMIDIInputDeviceID_Params
{
	int                                                DeviceID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
struct UMIDIDeviceManager_FindMIDIDevices_Params
{
	TArray<struct FFoundMIDIDevice>                    OutMIDIDevices;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
struct UMIDIDeviceManager_FindAllMIDIDeviceInfo_Params
{
	TArray<struct FMIDIDeviceInfo>                     OutMIDIInputDevices;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMIDIDeviceInfo>                     OutMIDIOutputDevices;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
struct UMIDIDeviceManager_CreateMIDIDeviceOutputController_Params
{
	int                                                DeviceID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMIDIDeviceOutputController*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
struct UMIDIDeviceManager_CreateMIDIDeviceInputController_Params
{
	int                                                DeviceID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MIDIBufferSize;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMIDIDeviceInputController*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
struct UMIDIDeviceManager_CreateMIDIDeviceController_Params
{
	int                                                DeviceID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MIDIBufferSize;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMIDIDeviceController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
struct UMIDIDeviceOutputController_SendMIDIProgramChange_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ProgramNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
struct UMIDIDeviceOutputController_SendMIDIPitchBend_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
struct UMIDIDeviceOutputController_SendMIDINoteOn_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
struct UMIDIDeviceOutputController_SendMIDINoteOff_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
struct UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
struct UMIDIDeviceOutputController_SendMIDIEvent_Params
{
	EMIDIEventType                                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                data1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                data2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
struct UMIDIDeviceOutputController_SendMIDIControlChange_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
struct UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
