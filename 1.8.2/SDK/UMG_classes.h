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

// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

};


// Class UMG.Widget
// 0x00F0 (0x0118 - 0x0028)
class UWidget : public UVisual
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}

};


// Class UMG.UserWidget
// 0x0118 (0x0230 - 0x0118)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0118(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}

};


// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0048 - 0x0028)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}

};


// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformSection
// 0x0320 (0x03F0 - 0x00D0)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x00D0(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x01D0 (0x02A0 - 0x00D0)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x00D0(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

};


// Class UMG.PropertyBinding
// 0x0020 (0x0048 - 0x0028)
class UPropertyBinding : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0048 - 0x0048)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0050 - 0x0048)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.ColorBinding
// 0x0008 (0x0050 - 0x0048)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}


	void GetSlateValue();
	void GetLinearValue();
};


// Class UMG.FloatBinding
// 0x0000 (0x0048 - 0x0048)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.Int32Binding
// 0x0000 (0x0048 - 0x0048)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0048 - 0x0048)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.TextBinding
// 0x0008 (0x0050 - 0x0048)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}


	void GetTextValue();
	void GetStringValue();
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0048 - 0x0048)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.WidgetBinding
// 0x0000 (0x0048 - 0x0048)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.RichTextBlockDecorator
// 0x0008 (0x0030 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}

};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	void STATIC_ScreenToWidgetLocal();
	void STATIC_ScreenToWidgetAbsolute();
	void STATIC_ScreenToViewport();
	void STATIC_LocalToViewport();
	void STATIC_LocalToAbsolute(const struct FGeometry& Geometry);
	void STATIC_IsUnderLocation(const struct FGeometry& Geometry);
	void STATIC_GetLocalSize(const struct FGeometry& Geometry);
	void STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void STATIC_AbsoluteToViewport();
	void STATIC_AbsoluteToLocal(const struct FGeometry& Geometry);
};


// Class UMG.SlateDataSheet
// 0x0408 (0x0430 - 0x0028)
class USlateDataSheet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x408];                                     // 0x0028(0x0408) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateDataSheet");
		return ptr;
	}

};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0060 - 0x0028)
class USlateVectorArtData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0068 (0x0398 - 0x0330)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0338(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

};


// Class UMG.UMGSequencePlayer
// 0x0638 (0x0660 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x638];                                     // 0x0028(0x0638) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}

};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0060 - 0x0038)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}

};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UBorderSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}

};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}

};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}

};


// Class UMG.GridSlot
// 0x0038 (0x0070 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}

};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}

};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}

};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
class USafeZoneSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}

};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}

};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}

};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}

};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}

};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}

};


// Class UMG.PanelWidget
// 0x0018 (0x0130 - 0x0118)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0118(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}


	void RemoveChildAt();
	void RemoveChild();
	void HasChild();
	void HasAnyChildren();
	void GetChildrenCount();
	void GetChildIndex();
	void GetChildAt();
	void ClearChildren();
	void AddChild();
};


// Class UMG.ContentWidget
// 0x0000 (0x0130 - 0x0130)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	void SetContent();
	void GetContentSlot();
};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0150 - 0x0130)
class UWindowTitleBarArea : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0130(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}

};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0060 - 0x0038)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}

};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UWrapBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}

};


// Class UMG.CircularThrobber
// 0x00C0 (0x01D8 - 0x0118)
class UCircularThrobber : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0118(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}

};


// Class UMG.ComboBox
// 0x0038 (0x0150 - 0x0118)
class UComboBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0118(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x0C80 (0x0D98 - 0x0118)
class UComboBoxString : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xC80];                                     // 0x0118(0x0C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}

};


// Class UMG.TextLayoutWidget
// 0x0028 (0x0140 - 0x0118)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}

};


// Class UMG.EditableText
// 0x0390 (0x04A8 - 0x0118)
class UEditableText : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0118(0x0390) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}

};


// Class UMG.EditableTextBox
// 0x09B8 (0x0AD0 - 0x0118)
class UEditableTextBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x9B8];                                     // 0x0118(0x09B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}

};


// Class UMG.ExpandableArea
// 0x0248 (0x0360 - 0x0118)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0118(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}

};


// Class UMG.Image
// 0x00E8 (0x0200 - 0x0118)
class UImage : public UWidget
{
public:
	class USlateBrushAsset*                            Image;                                                    // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // 0x0120(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x50];                                      // 0x01B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}

};


// Class UMG.InputKeySelector
// 0x0100 (0x0218 - 0x0118)
class UInputKeySelector : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0118(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}

};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0128 - 0x0118)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

};


// Class UMG.CanvasPanel
// 0x0010 (0x0140 - 0x0130)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	void AddChildToCanvas();
};


// Class UMG.BackgroundBlur
// 0x00C0 (0x01F0 - 0x0130)
class UBackgroundBlur : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0130(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}

};


// Class UMG.Border
// 0x0160 (0x0290 - 0x0130)
class UBorder : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0130(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}

};


// Class UMG.Button
// 0x0338 (0x0468 - 0x0130)
class UButton : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x338];                                     // 0x0130(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}

};


// Class UMG.CheckBox
// 0x06B0 (0x07E0 - 0x0130)
class UCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x6B0];                                     // 0x0130(0x06B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}

};


// Class UMG.InvalidationBox
// 0x0018 (0x0148 - 0x0130)
class UInvalidationBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}

};


// Class UMG.MenuAnchor
// 0x0040 (0x0170 - 0x0130)
class UMenuAnchor : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0130(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}

};


// Class UMG.NamedSlot
// 0x0010 (0x0140 - 0x0130)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

};


// Class UMG.RetainerBox
// 0x0028 (0x0158 - 0x0130)
class URetainerBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}

};


// Class UMG.SafeZone
// 0x0018 (0x0148 - 0x0130)
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0150 - 0x0130)
class UScaleBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0130(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}

};


// Class UMG.SizeBox
// 0x0030 (0x0160 - 0x0130)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0130(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}

};


// Class UMG.Viewport
// 0x0028 (0x0158 - 0x0130)
class UViewport : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}

};


// Class UMG.GridPanel
// 0x0030 (0x0160 - 0x0130)
class UGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0130(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}

};


// Class UMG.HorizontalBox
// 0x0010 (0x0140 - 0x0130)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	void AddChildToHorizontalBox();
};


// Class UMG.Overlay
// 0x0010 (0x0140 - 0x0130)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	void AddChildToOverlay();
};


// Class UMG.ScrollBox
// 0x0798 (0x08C8 - 0x0130)
class UScrollBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x798];                                     // 0x0130(0x0798) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}

};


// Class UMG.BrushBinding
// 0x0008 (0x0050 - 0x0048)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.UniformGridPanel
// 0x0028 (0x0158 - 0x0130)
class UUniformGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}

};


// Class UMG.VerticalBox
// 0x0010 (0x0140 - 0x0130)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	void AddChildToVerticalBox();
};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0148 - 0x0130)
class UWidgetSwitcher : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}

};


// Class UMG.WrapBox
// 0x0020 (0x0150 - 0x0130)
class UWrapBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0130(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}

};


// Class UMG.ProgressBar
// 0x0220 (0x0338 - 0x0118)
class UProgressBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0118(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}

};


// Class UMG.Slider
// 0x02F8 (0x0410 - 0x0118)
class USlider : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0118(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}

};


// Class UMG.Spacer
// 0x0018 (0x0130 - 0x0118)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void SetSize();
};


// Class UMG.SpinBox
// 0x0438 (0x0550 - 0x0118)
class USpinBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x438];                                     // 0x0118(0x0438) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}

};


// Class UMG.TableViewBase
// 0x0000 (0x0118 - 0x0118)
class UTableViewBase : public UWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TableViewBase");
		return ptr;
	}

};


// Class UMG.ListView
// 0x0040 (0x0158 - 0x0118)
class UListView : public UTableViewBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0118(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}

};


// Class UMG.ScrollBar
// 0x0540 (0x0658 - 0x0118)
class UScrollBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x540];                                     // 0x0118(0x0540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}

};


// Class UMG.TileView
// 0x0040 (0x0158 - 0x0118)
class UTileView : public UTableViewBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0118(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}

};


// Class UMG.MultiLineEditableText
// 0x02E8 (0x0428 - 0x0140)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x2E8];                                     // 0x0140(0x02E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}

};


// Class UMG.RichTextBlock
// 0x02C8 (0x0408 - 0x0140)
class URichTextBlock : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0140(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}

};


// Class UMG.TextBlock
// 0x0108 (0x0248 - 0x0140)
class UTextBlock : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0140(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}

};


// Class UMG.Throbber
// 0x00B0 (0x01C8 - 0x0118)
class UThrobber : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0118(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}

};


// Class UMG.MultiLineEditableTextBox
// 0x0B90 (0x0CD0 - 0x0140)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0xB90];                                     // 0x0140(0x0B90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	void STATIC_UnlockMouse();
	void STATIC_Unhandled();
	void STATIC_SetUserFocus();
	void STATIC_SetMousePosition();
	void STATIC_SetInputMode_UIOnlyEx();
	void STATIC_SetInputMode_UIOnly();
	void STATIC_SetInputMode_GameOnly();
	void STATIC_SetInputMode_GameAndUIEx();
	void STATIC_SetInputMode_GameAndUI();
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	void STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	void STATIC_ReleaseMouseCapture();
	void STATIC_ReleaseJoystickCapture();
	void STATIC_NoResourceBrush();
	void STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	void STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	void STATIC_MakeBrushFromAsset();
	void STATIC_LockMouse();
	void STATIC_IsDragDropping();
	void STATIC_Handled();
	void STATIC_GetSafeZonePadding();
	void STATIC_GetKeyEventFromAnalogInputEvent();
	void STATIC_GetInputEventFromPointerEvent();
	void STATIC_GetInputEventFromNavigationEvent();
	void STATIC_GetInputEventFromKeyEvent();
	void STATIC_GetInputEventFromControllerEvent();
	void STATIC_GetInputEventFromCharacterEvent();
	void STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
	void STATIC_GetDragDroppingContent();
	void STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush);
	void STATIC_GetBrushResourceAsMaterial(struct FSlateBrush* Brush);
	void STATIC_GetBrushResource(struct FSlateBrush* Brush);
	void STATIC_GetAllWidgetsWithInterface();
	void STATIC_GetAllWidgetsOfClass();
	void STATIC_EndDragDrop();
	void STATIC_DrawTextFormatted();
	void STATIC_DrawText();
	void STATIC_DrawLines();
	void STATIC_DrawLine();
	void STATIC_DrawBox();
	void STATIC_DismissAllMenus();
	void STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent);
	void STATIC_DetectDrag();
	void STATIC_CreateDragDropOperation();
	void STATIC_Create();
	void STATIC_ClearUserFocus();
	void STATIC_CaptureMouse();
	void STATIC_CaptureJoystick();
	void STATIC_CancelDragDrop();
};


// Class UMG.WidgetAnimation
// 0x0030 (0x0310 - 0x02E0)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                      // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovieScene*                                 MovieScene;                                               // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}

};


// Class UMG.WidgetComponent
// 0x0130 (0x08B0 - 0x0780)
class UWidgetComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0780(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}

};


// Class UMG.WidgetInteractionComponent
// 0x01F0 (0x0480 - 0x0290)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0290(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}

};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	void STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	void STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	void STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	void STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	void STATIC_SlotAsGridSlot(class UWidget* Widget);
	void STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	void STATIC_SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets();
	void STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController);
	void STATIC_GetViewportSize();
	void STATIC_GetViewportScale();
	void STATIC_GetMousePositionScaledByDPI(class APlayerController* Player);
};


// Class UMG.WidgetNavigation
// 0x0090 (0x00B8 - 0x0028)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                     // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                     // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                    // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                     // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

};


// Class UMG.WidgetTree
// 0x0018 (0x0040 - 0x0028)
class UWidgetTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
