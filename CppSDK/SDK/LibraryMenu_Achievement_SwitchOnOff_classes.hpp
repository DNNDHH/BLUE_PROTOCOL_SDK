#pragma once

 

// Package: LibraryMenu_Achievement_SwitchOnOff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C
// 0x0048 (0x02C0 - 0x0278)
class ULibraryMenu_Achievement_SwitchOnOff_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 OnArea;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    OnOffText;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TitltText;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                VisibilitySwitch;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSwitchOnPressed;                                 // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSetAchievement;                                  // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSwitchOnPressed__DelegateSignature(bool OutIsSetAchievement);
	void ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff(int32 EntryPoint);
	void SwitchOnOff(bool InIsSwitchOn);
	void Construct();
	void BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void DataSet(bool bInIsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Achievement_SwitchOnOff_C">();
	}
	static class ULibraryMenu_Achievement_SwitchOnOff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Achievement_SwitchOnOff_C>();
	}
};
static_assert(alignof(ULibraryMenu_Achievement_SwitchOnOff_C) == 0x000008, "Wrong alignment on ULibraryMenu_Achievement_SwitchOnOff_C");
static_assert(sizeof(ULibraryMenu_Achievement_SwitchOnOff_C) == 0x0002C0, "Wrong size on ULibraryMenu_Achievement_SwitchOnOff_C");
static_assert(offsetof(ULibraryMenu_Achievement_SwitchOnOff_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_Achievement_SwitchOnOff_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_SwitchOnOff_C, OnArea) == 0x000280, "Member 'ULibraryMenu_Achievement_SwitchOnOff_C::OnArea' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_SwitchOnOff_C, OnOffText) == 0x000288, "Member 'ULibraryMenu_Achievement_SwitchOnOff_C::OnOffText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_SwitchOnOff_C, TitleIcon) == 0x000290, "Member 'ULibraryMenu_Achievement_SwitchOnOff_C::TitleIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_SwitchOnOff_C, TitltText) == 0x000298, "Member 'ULibraryMenu_Achievement_SwitchOnOff_C::TitltText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_SwitchOnOff_C, VisibilitySwitch) == 0x0002A0, "Member 'ULibraryMenu_Achievement_SwitchOnOff_C::VisibilitySwitch' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_SwitchOnOff_C, OnSwitchOnPressed) == 0x0002A8, "Member 'ULibraryMenu_Achievement_SwitchOnOff_C::OnSwitchOnPressed' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_SwitchOnOff_C, IsSetAchievement) == 0x0002B8, "Member 'ULibraryMenu_Achievement_SwitchOnOff_C::IsSetAchievement' has a wrong offset!");

}

