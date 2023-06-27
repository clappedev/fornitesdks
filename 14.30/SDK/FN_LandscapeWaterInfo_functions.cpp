// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.UpdateGameTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALandscapeWaterInfo_C::UpdateGameTexture()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LandscapeWaterInfo.LandscapeWaterInfo_C.UpdateGameTexture");

	ALandscapeWaterInfo_C_UpdateGameTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Update Water MID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeWaterInfo_C::Update_Water_MID(class UTexture* Texture)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LandscapeWaterInfo.LandscapeWaterInfo_C.Update Water MID");

	ALandscapeWaterInfo_C_Update_Water_MID_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Water MPC Values
// (Public, BlueprintCallable, BlueprintEvent)

void ALandscapeWaterInfo_C::Set_Water_MPC_Values()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Water MPC Values");

	ALandscapeWaterInfo_C_Set_Water_MPC_Values_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALandscapeWaterInfo_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LandscapeWaterInfo.LandscapeWaterInfo_C.UserConstructionScript");

	ALandscapeWaterInfo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALandscapeWaterInfo_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay");

	ALandscapeWaterInfo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeWaterInfo_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveEndPlay");

	ALandscapeWaterInfo_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level
// (BlueprintCallable, BlueprintEvent)

void ALandscapeWaterInfo_C::Set_Flood_Water_Level()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level");

	ALandscapeWaterInfo_C_Set_Flood_Water_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeWaterInfo_C::ExecuteUbergraph_LandscapeWaterInfo(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo");

	ALandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
