#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Slate.CheckBoxWidgetStyle
// 0x05E0 (0x0610 - 0x0030)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x05E0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x0428 (0x0458 - 0x0030)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x0428) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x03E0 (0x0410 - 0x0030)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x03E0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x0870 (0x08A0 - 0x0030)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x0870) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0248 (0x0278 - 0x0030)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x0248) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x01B8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x0518 (0x0548 - 0x0030)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x0518) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0248 (0x0278 - 0x0030)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x0248) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.SlateSettings
// 0x0008 (0x0030 - 0x0028)
class USlateSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x0310 (0x0340 - 0x0030)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x0310) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x0208 (0x0238 - 0x0030)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x0208) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

};


// Class Slate.ButtonWidgetStyle
// 0x02A8 (0x02D8 - 0x0030)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x02A8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
