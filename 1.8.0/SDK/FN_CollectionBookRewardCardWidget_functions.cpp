// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookRewardCardWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C.PreConstruct");

	UCollectionBookRewardCardWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C.ExecuteUbergraph_CollectionBookRewardCardWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookRewardCardWidget_C::ExecuteUbergraph_CollectionBookRewardCardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C.ExecuteUbergraph_CollectionBookRewardCardWidget");

	UCollectionBookRewardCardWidget_C_ExecuteUbergraph_CollectionBookRewardCardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
