#pragma once

 

// Package: UMG_StartMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_StartMenu.UMG_StartMenu_C
// 0x00D8 (0x0388 - 0x02B0)
class UUMG_StartMenu_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimArrowLoop;                                     // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn21_C*                            BtnEnd;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn21_C*                            BtnEnd_1;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn21_C*                            BtnOption;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn21_C*                            BtnOption_1;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn21_C*                            BtnStart;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn21_C*                            BtnStart_1;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_44;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_440;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_566;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SbTxtProjectVersion;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SbTxtProjectVersion_2;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_516;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPlayGame;                                        // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnExit;                                            // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPlayBattle;                                      // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnConfig;                                          // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsFirstPlay;                                       // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnPlayGame__DelegateSignature();
	void OnExit__DelegateSignature();
	void OnPlayBattle__DelegateSignature();
	void OnConfig__DelegateSignature();
	void ExecuteUbergraph_UMG_StartMenu(int32 EntryPoint);
	void BndEvt__UMG_StartMenu_BtnEnd_1_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__UMG_StartMenu_BtnOption_1_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__UMG_StartMenu_BtnStart_1_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn21_196_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn21_93_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn21_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void DisablePlayGameButton();
	void Start();
	void ShowWindow();
	void HideWindow();
	void SetButtonFocus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_StartMenu_C">();
	}
	static class UUMG_StartMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_StartMenu_C>();
	}
};
static_assert(alignof(UUMG_StartMenu_C) == 0x000008, "Wrong alignment on UUMG_StartMenu_C");
static_assert(sizeof(UUMG_StartMenu_C) == 0x000388, "Wrong size on UUMG_StartMenu_C");
static_assert(offsetof(UUMG_StartMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_StartMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, AnimArrowLoop) == 0x0002B8, "Member 'UUMG_StartMenu_C::AnimArrowLoop' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, BtnEnd) == 0x0002C0, "Member 'UUMG_StartMenu_C::BtnEnd' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, BtnEnd_1) == 0x0002C8, "Member 'UUMG_StartMenu_C::BtnEnd_1' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, BtnOption) == 0x0002D0, "Member 'UUMG_StartMenu_C::BtnOption' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, BtnOption_1) == 0x0002D8, "Member 'UUMG_StartMenu_C::BtnOption_1' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, BtnStart) == 0x0002E0, "Member 'UUMG_StartMenu_C::BtnStart' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, BtnStart_1) == 0x0002E8, "Member 'UUMG_StartMenu_C::BtnStart_1' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, Image) == 0x0002F0, "Member 'UUMG_StartMenu_C::Image' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, Image_1) == 0x0002F8, "Member 'UUMG_StartMenu_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, Image_2) == 0x000300, "Member 'UUMG_StartMenu_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, Image_3) == 0x000308, "Member 'UUMG_StartMenu_C::Image_3' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, Image_44) == 0x000310, "Member 'UUMG_StartMenu_C::Image_44' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, Image_440) == 0x000318, "Member 'UUMG_StartMenu_C::Image_440' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, Image_566) == 0x000320, "Member 'UUMG_StartMenu_C::Image_566' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, SbTxtProjectVersion) == 0x000328, "Member 'UUMG_StartMenu_C::SbTxtProjectVersion' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, SbTxtProjectVersion_2) == 0x000330, "Member 'UUMG_StartMenu_C::SbTxtProjectVersion_2' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, WidgetSwitcher_516) == 0x000338, "Member 'UUMG_StartMenu_C::WidgetSwitcher_516' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, OnPlayGame) == 0x000340, "Member 'UUMG_StartMenu_C::OnPlayGame' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, OnExit) == 0x000350, "Member 'UUMG_StartMenu_C::OnExit' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, OnPlayBattle) == 0x000360, "Member 'UUMG_StartMenu_C::OnPlayBattle' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, OnConfig) == 0x000370, "Member 'UUMG_StartMenu_C::OnConfig' has a wrong offset!");
static_assert(offsetof(UUMG_StartMenu_C, IsFirstPlay) == 0x000380, "Member 'UUMG_StartMenu_C::IsFirstPlay' has a wrong offset!");

}

