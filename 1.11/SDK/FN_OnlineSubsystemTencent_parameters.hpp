#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemTencent.TssAntiComponent.ServerHandleDataFromClient
struct UTssAntiComponent_ServerHandleDataFromClient_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function OnlineSubsystemTencent.TssAntiComponent.ClientPlayerLogin
struct UTssAntiComponent_ClientPlayerLogin_Params
{
};

// Function OnlineSubsystemTencent.TssAntiComponent.ClientHandleDataFromServer
struct UTssAntiComponent_ClientHandleDataFromServer_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
