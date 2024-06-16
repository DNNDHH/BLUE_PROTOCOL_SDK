#pragma once

 

// Package: SBSelectableTextButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SBButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBSelectableTextButton.SBSelectableTextButton_C
// 0x0580 (0x0A18 - 0x0498)
class USBSelectableTextButton_C : public USBButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SBSelectableTextButton_C;           // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bDesignCheck;                                      // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92AE[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     ChildText;                                         // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bSelected;                                         // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHovered;                                          // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bPressed;                                          // 0x04BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92AF[0x5];                                     // 0x04BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           UnselectedStyle;                                   // 0x04C0(0x0278)(Edit, BlueprintVisible)
	struct FButtonStyle                           SelectedStyle;                                     // 0x0738(0x0278)(Edit, BlueprintVisible)
	struct FLinearColor                           UnselectNormalChildTextColor;                      // 0x09B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           UnselectHoveredChildTextColor;                     // 0x09C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           UnselectPressedChildTextColor;                     // 0x09D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SelectNormalChildTextColor;                        // 0x09E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SelectHoverdChildTextColor;                        // 0x09F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SelectPressedChildTextColor;                       // 0x0A00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bExecuteStyleToBothStyle;                          // 0x0A10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SBSelectableTextButton(int32 EntryPoint);
	void UpdateButtonStyleByDesignCheck();
	void OnReleased_Event_0();
	void OnPressed_Event_0();
	void UpdateButtonStyle();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateChildTextColor();
	void OnUnhovered_Event_0();
	void OnHovered_Event_0();
	void InitBothStyle(const struct FButtonStyle& Param_SelectedStyle);
	void SetSelected(bool bSelect);
	void InitChildText();
	void IsSelected(bool* bIsSelected);
	void SearchChildText(class UPanelWidget* PanelWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBSelectableTextButton_C">();
	}
	static class USBSelectableTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBSelectableTextButton_C>();
	}
};
static_assert(alignof(USBSelectableTextButton_C) == 0x000008, "Wrong alignment on USBSelectableTextButton_C");
static_assert(sizeof(USBSelectableTextButton_C) == 0x000A18, "Wrong size on USBSelectableTextButton_C");
static_assert(offsetof(USBSelectableTextButton_C, UberGraphFrame_SBSelectableTextButton_C) == 0x000498, "Member 'USBSelectableTextButton_C::UberGraphFrame_SBSelectableTextButton_C' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, bDesignCheck) == 0x0004A0, "Member 'USBSelectableTextButton_C::bDesignCheck' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, ChildText) == 0x0004A8, "Member 'USBSelectableTextButton_C::ChildText' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, bSelected) == 0x0004B8, "Member 'USBSelectableTextButton_C::bSelected' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, bHovered) == 0x0004B9, "Member 'USBSelectableTextButton_C::bHovered' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, bPressed) == 0x0004BA, "Member 'USBSelectableTextButton_C::bPressed' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, UnselectedStyle) == 0x0004C0, "Member 'USBSelectableTextButton_C::UnselectedStyle' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, SelectedStyle) == 0x000738, "Member 'USBSelectableTextButton_C::SelectedStyle' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, UnselectNormalChildTextColor) == 0x0009B0, "Member 'USBSelectableTextButton_C::UnselectNormalChildTextColor' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, UnselectHoveredChildTextColor) == 0x0009C0, "Member 'USBSelectableTextButton_C::UnselectHoveredChildTextColor' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, UnselectPressedChildTextColor) == 0x0009D0, "Member 'USBSelectableTextButton_C::UnselectPressedChildTextColor' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, SelectNormalChildTextColor) == 0x0009E0, "Member 'USBSelectableTextButton_C::SelectNormalChildTextColor' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, SelectHoverdChildTextColor) == 0x0009F0, "Member 'USBSelectableTextButton_C::SelectHoverdChildTextColor' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, SelectPressedChildTextColor) == 0x000A00, "Member 'USBSelectableTextButton_C::SelectPressedChildTextColor' has a wrong offset!");
static_assert(offsetof(USBSelectableTextButton_C, bExecuteStyleToBothStyle) == 0x000A10, "Member 'USBSelectableTextButton_C::bExecuteStyleToBothStyle' has a wrong offset!");

}

