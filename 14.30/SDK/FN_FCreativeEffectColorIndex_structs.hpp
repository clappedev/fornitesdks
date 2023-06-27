#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FCreativeEffectColorIndex.FCreativeEffectColorIndex
// 0x0007
struct FFCreativeEffectColorIndex
{
	int                                                Index_2_D2D2DEB24E760961E0D6AB88DC603692;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECreativeColorSetType>                 SetType_5_3A2997D544A0618EC312FEAED95187B8;               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Creative_Powerup_LocalVisibility>    VisibleToOwningPlayer_8_E546F2A4426B8AB99EE118A3125AC217; // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Creative_Powerup_TeamRelationshipVisibility> TeamRelationshipVisibility_11_3BB5265D4D611D2BB5799EB5A6E26AA7;// 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
