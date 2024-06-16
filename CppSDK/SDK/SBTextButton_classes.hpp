#pragma once

 

// Package: SBTextButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SBButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBTextButton.SBTextButton_C
// 0x0048 (0x04E0 - 0x0498)
class USBTextButton_C : public USBButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SBTextButton_C;                     // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UTextBlock*>                     ChildText;                                         // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FLinearColor                           NormalChildTextColor;                              // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredChildTextColor;                             // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PressedChildTextColor;                             // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SBTextButton(int32 EntryPoint);
	void OnReleased_Event_0();
	void OnPressed_Event_0();
	void Construct();
	void UpdateChildTextColor();
	void OnUnhovered_Event_0();
	void OnHovered_Event_0();
	void InitChildText();
	void SearchChildText(class UPanelWidget* PanelWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBTextButton_C">();
	}
	static class USBTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBTextButton_C>();
	}
};
static_assert(alignof(USBTextButton_C) == 0x000008, "Wrong alignment on USBTextButton_C");
static_assert(sizeof(USBTextButton_C) == 0x0004E0, "Wrong size on USBTextButton_C");
static_assert(offsetof(USBTextButton_C, UberGraphFrame_SBTextButton_C) == 0x000498, "Member 'USBTextButton_C::UberGraphFrame_SBTextButton_C' has a wrong offset!");
static_assert(offsetof(USBTextButton_C, ChildText) == 0x0004A0, "Member 'USBTextButton_C::ChildText' has a wrong offset!");
static_assert(offsetof(USBTextButton_C, NormalChildTextColor) == 0x0004B0, "Member 'USBTextButton_C::NormalChildTextColor' has a wrong offset!");
static_assert(offsetof(USBTextButton_C, HoveredChildTextColor) == 0x0004C0, "Member 'USBTextButton_C::HoveredChildTextColor' has a wrong offset!");
static_assert(offsetof(USBTextButton_C, PressedChildTextColor) == 0x0004D0, "Member 'USBTextButton_C::PressedChildTextColor' has a wrong offset!");

}

