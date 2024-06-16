#pragma once

 

// Package: CommandMenuBg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenuBg.CommandMenuBg_C
// 0x0058 (0x02D0 - 0x0278)
class UCommandMenuBg_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           HelpGrp;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Help;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TitleHelpGrp;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimInFinished;                                  // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         HelpId;                                            // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ED6[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAnimTabInFinished;                               // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAnimInFinished__DelegateSignature();
	void OnAnimTabInFinished__DelegateSignature();
	void ExecuteUbergraph_CommandMenuBg(int32 EntryPoint);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void PlayInOut(bool Param_bVisible, int32 Param_HelpId, const class FText& Text, int32 Pos);
	void SetHelpText(int32 ID, const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenuBg_C">();
	}
	static class UCommandMenuBg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenuBg_C>();
	}
};
static_assert(alignof(UCommandMenuBg_C) == 0x000008, "Wrong alignment on UCommandMenuBg_C");
static_assert(sizeof(UCommandMenuBg_C) == 0x0002D0, "Wrong size on UCommandMenuBg_C");
static_assert(offsetof(UCommandMenuBg_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenuBg_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, AnimOut) == 0x000280, "Member 'UCommandMenuBg_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, AnimIn) == 0x000288, "Member 'UCommandMenuBg_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, HelpGrp) == 0x000290, "Member 'UCommandMenuBg_C::HelpGrp' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, SBDateTimeTextBlock_Help) == 0x000298, "Member 'UCommandMenuBg_C::SBDateTimeTextBlock_Help' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, TitleHelpGrp) == 0x0002A0, "Member 'UCommandMenuBg_C::TitleHelpGrp' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, OnAnimInFinished) == 0x0002A8, "Member 'UCommandMenuBg_C::OnAnimInFinished' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, HelpId) == 0x0002B8, "Member 'UCommandMenuBg_C::HelpId' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, bVisible) == 0x0002BC, "Member 'UCommandMenuBg_C::bVisible' has a wrong offset!");
static_assert(offsetof(UCommandMenuBg_C, OnAnimTabInFinished) == 0x0002C0, "Member 'UCommandMenuBg_C::OnAnimTabInFinished' has a wrong offset!");

}

