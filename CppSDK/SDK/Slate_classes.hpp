#pragma once

 

// Package: Slate

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SlateCore_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Slate.ButtonWidgetStyle
// 0x0278 (0x02A8 - 0x0030)
class UButtonWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                           ButtonStyle;                                       // 0x0030(0x0278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ButtonWidgetStyle">();
	}
	static class UButtonWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonWidgetStyle>();
	}
};
static_assert(alignof(UButtonWidgetStyle) == 0x000008, "Wrong alignment on UButtonWidgetStyle");
static_assert(sizeof(UButtonWidgetStyle) == 0x0002A8, "Wrong size on UButtonWidgetStyle");
static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 0x000030, "Member 'UButtonWidgetStyle::ButtonStyle' has a wrong offset!");

// Class Slate.CheckBoxWidgetStyle
// 0x0580 (0x05B0 - 0x0030)
class UCheckBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                         CheckBoxStyle;                                     // 0x0030(0x0580)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CheckBoxWidgetStyle">();
	}
	static class UCheckBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCheckBoxWidgetStyle>();
	}
};
static_assert(alignof(UCheckBoxWidgetStyle) == 0x000008, "Wrong alignment on UCheckBoxWidgetStyle");
static_assert(sizeof(UCheckBoxWidgetStyle) == 0x0005B0, "Wrong size on UCheckBoxWidgetStyle");
static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 0x000030, "Member 'UCheckBoxWidgetStyle::CheckBoxStyle' has a wrong offset!");

// Class Slate.ComboBoxWidgetStyle
// 0x03F0 (0x0420 - 0x0030)
class UComboBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                         ComboBoxStyle;                                     // 0x0030(0x03F0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComboBoxWidgetStyle">();
	}
	static class UComboBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboBoxWidgetStyle>();
	}
};
static_assert(alignof(UComboBoxWidgetStyle) == 0x000008, "Wrong alignment on UComboBoxWidgetStyle");
static_assert(sizeof(UComboBoxWidgetStyle) == 0x000420, "Wrong size on UComboBoxWidgetStyle");
static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 0x000030, "Member 'UComboBoxWidgetStyle::ComboBoxStyle' has a wrong offset!");

// Class Slate.ComboButtonWidgetStyle
// 0x03B8 (0x03E8 - 0x0030)
class UComboButtonWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                      ComboButtonStyle;                                  // 0x0030(0x03B8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComboButtonWidgetStyle">();
	}
	static class UComboButtonWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboButtonWidgetStyle>();
	}
};
static_assert(alignof(UComboButtonWidgetStyle) == 0x000008, "Wrong alignment on UComboButtonWidgetStyle");
static_assert(sizeof(UComboButtonWidgetStyle) == 0x0003E8, "Wrong size on UComboButtonWidgetStyle");
static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 0x000030, "Member 'UComboButtonWidgetStyle::ComboButtonStyle' has a wrong offset!");

// Class Slate.EditableTextBoxWidgetStyle
// 0x0838 (0x0868 - 0x0030)
class UEditableTextBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                  EditableTextBoxStyle;                              // 0x0030(0x0838)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableTextBoxWidgetStyle">();
	}
	static class UEditableTextBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextBoxWidgetStyle>();
	}
};
static_assert(alignof(UEditableTextBoxWidgetStyle) == 0x000008, "Wrong alignment on UEditableTextBoxWidgetStyle");
static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x000868, "Wrong size on UEditableTextBoxWidgetStyle");
static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 0x000030, "Member 'UEditableTextBoxWidgetStyle::EditableTextBoxStyle' has a wrong offset!");

// Class Slate.EditableTextWidgetStyle
// 0x0250 (0x0280 - 0x0030)
class UEditableTextWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                     EditableTextStyle;                                 // 0x0030(0x0250)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableTextWidgetStyle">();
	}
	static class UEditableTextWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextWidgetStyle>();
	}
};
static_assert(alignof(UEditableTextWidgetStyle) == 0x000008, "Wrong alignment on UEditableTextWidgetStyle");
static_assert(sizeof(UEditableTextWidgetStyle) == 0x000280, "Wrong size on UEditableTextWidgetStyle");
static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 0x000030, "Member 'UEditableTextWidgetStyle::EditableTextStyle' has a wrong offset!");

// Class Slate.ProgressWidgetStyle
// 0x01A0 (0x01D0 - 0x0030)
class UProgressWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                      ProgressBarStyle;                                  // 0x0030(0x01A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProgressWidgetStyle">();
	}
	static class UProgressWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressWidgetStyle>();
	}
};
static_assert(alignof(UProgressWidgetStyle) == 0x000008, "Wrong alignment on UProgressWidgetStyle");
static_assert(sizeof(UProgressWidgetStyle) == 0x0001D0, "Wrong size on UProgressWidgetStyle");
static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 0x000030, "Member 'UProgressWidgetStyle::ProgressBarStyle' has a wrong offset!");

// Class Slate.ScrollBarWidgetStyle
// 0x04E0 (0x0510 - 0x0030)
class UScrollBarWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                        ScrollBarStyle;                                    // 0x0030(0x04E0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScrollBarWidgetStyle">();
	}
	static class UScrollBarWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBarWidgetStyle>();
	}
};
static_assert(alignof(UScrollBarWidgetStyle) == 0x000008, "Wrong alignment on UScrollBarWidgetStyle");
static_assert(sizeof(UScrollBarWidgetStyle) == 0x000510, "Wrong size on UScrollBarWidgetStyle");
static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 0x000030, "Member 'UScrollBarWidgetStyle::ScrollBarStyle' has a wrong offset!");

// Class Slate.ScrollBoxWidgetStyle
// 0x0228 (0x0258 - 0x0030)
class UScrollBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                        ScrollBoxStyle;                                    // 0x0030(0x0228)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScrollBoxWidgetStyle">();
	}
	static class UScrollBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBoxWidgetStyle>();
	}
};
static_assert(alignof(UScrollBoxWidgetStyle) == 0x000008, "Wrong alignment on UScrollBoxWidgetStyle");
static_assert(sizeof(UScrollBoxWidgetStyle) == 0x000258, "Wrong size on UScrollBoxWidgetStyle");
static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 0x000030, "Member 'UScrollBoxWidgetStyle::ScrollBoxStyle' has a wrong offset!");

// Class Slate.SlateSettings
// 0x0008 (0x0030 - 0x0028)
class USlateSettings final : public UObject
{
public:
	bool                                          bExplicitCanvasChildZOrder;                        // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F42[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateSettings">();
	}
	static class USlateSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateSettings>();
	}
};
static_assert(alignof(USlateSettings) == 0x000008, "Wrong alignment on USlateSettings");
static_assert(sizeof(USlateSettings) == 0x000030, "Wrong size on USlateSettings");
static_assert(offsetof(USlateSettings, bExplicitCanvasChildZOrder) == 0x000028, "Member 'USlateSettings::bExplicitCanvasChildZOrder' has a wrong offset!");

// Class Slate.SpinBoxWidgetStyle
// 0x02E8 (0x0318 - 0x0030)
class USpinBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                          SpinBoxStyle;                                      // 0x0030(0x02E8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpinBoxWidgetStyle">();
	}
	static class USpinBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpinBoxWidgetStyle>();
	}
};
static_assert(alignof(USpinBoxWidgetStyle) == 0x000008, "Wrong alignment on USpinBoxWidgetStyle");
static_assert(sizeof(USpinBoxWidgetStyle) == 0x000318, "Wrong size on USpinBoxWidgetStyle");
static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 0x000030, "Member 'USpinBoxWidgetStyle::SpinBoxStyle' has a wrong offset!");

// Class Slate.TextBlockWidgetStyle
// 0x02A0 (0x02D0 - 0x0030)
class UTextBlockWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                        TextBlockStyle;                                    // 0x0030(0x02A0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextBlockWidgetStyle">();
	}
	static class UTextBlockWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextBlockWidgetStyle>();
	}
};
static_assert(alignof(UTextBlockWidgetStyle) == 0x000008, "Wrong alignment on UTextBlockWidgetStyle");
static_assert(sizeof(UTextBlockWidgetStyle) == 0x0002D0, "Wrong size on UTextBlockWidgetStyle");
static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 0x000030, "Member 'UTextBlockWidgetStyle::TextBlockStyle' has a wrong offset!");

// Class Slate.ToolMenuBase
// 0x0000 (0x0028 - 0x0028)
class UToolMenuBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToolMenuBase">();
	}
	static class UToolMenuBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToolMenuBase>();
	}
};
static_assert(alignof(UToolMenuBase) == 0x000008, "Wrong alignment on UToolMenuBase");
static_assert(sizeof(UToolMenuBase) == 0x000028, "Wrong size on UToolMenuBase");

}
