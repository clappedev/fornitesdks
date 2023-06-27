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

// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterialForUniqueId_New
struct UBannerLibrary_C_UpdateBannerMeshMaterialForUniqueId_New_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseIconMask;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.Get Icon Texture and Colors
struct UBannerLibrary_C_Get_Icon_Texture_and_Colors_Params
{
	struct FString                                     BannerIconId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     BannerColorId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryColor;                                             // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                Secondary_Color;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateMaterial_New
struct UBannerLibrary_C_UpdateMaterial_New_Params
{
	class UImage*                                      Banner_material;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortHomeBaseInfo                           Image_info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Is_Icon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial_New
struct UBannerLibrary_C_UpdateBannerMeshMaterial_New_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseIconMask;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerState*                            InstigatorPlayerState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial
struct UBannerLibrary_C_UpdateBannerIconOnMaterial_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial
struct UBannerLibrary_C_UpdateBannerColorOnMaterial_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryBGColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                SecondaryBGColor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial
struct UBannerLibrary_C_GenericUpdateMaterial_Params
{
	class UMaterialInstanceDynamic*                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BannerIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BG_PrimaryColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                BG_SecondaryColor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UTexture*                                    ShapeIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
