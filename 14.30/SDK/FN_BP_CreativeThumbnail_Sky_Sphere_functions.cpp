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

// Function BP_CreativeThumbnail_Sky_Sphere.BP_CreativeThumbnail_Sky_Sphere_C.RefreshMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeThumbnail_Sky_Sphere_C::RefreshMaterial()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeThumbnail_Sky_Sphere.BP_CreativeThumbnail_Sky_Sphere_C.RefreshMaterial");

	ABP_CreativeThumbnail_Sky_Sphere_C_RefreshMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeThumbnail_Sky_Sphere.BP_CreativeThumbnail_Sky_Sphere_C.UpdateSunDirection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeThumbnail_Sky_Sphere_C::UpdateSunDirection()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeThumbnail_Sky_Sphere.BP_CreativeThumbnail_Sky_Sphere_C.UpdateSunDirection");

	ABP_CreativeThumbnail_Sky_Sphere_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeThumbnail_Sky_Sphere.BP_CreativeThumbnail_Sky_Sphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeThumbnail_Sky_Sphere_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeThumbnail_Sky_Sphere.BP_CreativeThumbnail_Sky_Sphere_C.UserConstructionScript");

	ABP_CreativeThumbnail_Sky_Sphere_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
