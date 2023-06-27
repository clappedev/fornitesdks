#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{

};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{

};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{

};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{

};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{

};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{

};


// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8_t
{

};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{

};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{

};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{

};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{

};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.ShapedTextOptions
// 0x0008
struct FShapedTextOptions
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0018
struct FWidgetNavigationData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0010
struct FDynamicPropertyPath
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct UMG.PropertyPathSegment
// 0x0020
struct FPropertyPathSegment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0038
struct FDelegateRuntimeBinding
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0028
struct FWidgetAnimationBinding
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0330 (0x0348 - 0x0018)
struct FMovieScene2DTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x330];                                     // 0x0018(0x0330) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x01E0 (0x01F8 - 0x0018)
struct FMovieSceneMarginSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0018(0x01E0) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0058 - 0x0048)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
