#pragma once

 

// Package: OptionMenu

#include "Basic.hpp"

#include "EOptionMenuItemType_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionMenu.OptionMenu_C
// 0x00D0 (0x0378 - 0x02A8)
class UOptionMenu_C final : public USBCommandMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CmnBack_Bg;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionMenu_ConfigMenu_C*               ConfigMenu;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULicenseDisp_C*                         LicenseDisp;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNotifyWidget_C*                        NotifyWidget;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_0;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVOptionSubButtonList_C*                VOptionSubButtonList;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EOptionMenuItemType                           CurrOptionMenuItemType;                            // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOptionMenuItemType                           DefaultOptionMenuItemType;                         // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOptionMenuItemType                           NextOptionMenuItemType;                            // 0x031A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B2B[0x5];                                     // 0x031B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CommandMenuHUD;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsPressMainMenuButton;                            // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEditMode;                                         // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B2C[0x6];                                     // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TransitionMenu;                                    // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   BeforeTutorialHelpID;                              // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      DialogTextTable;                                   // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOptionMenuItemType                           BackOptionMenuItemType;                            // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B2D[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           DialogWidget;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCloseAnimationFinished;                          // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bResendSaves;                                      // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnCloseAnimationFinished__DelegateSignature();
	void ExecuteUbergraph_OptionMenu(int32 EntryPoint);
	void OnCloseEvent(class UObject* Sender, class UObject* Param);
	void OnCheckDead(float Damage, const struct FSBDamageEvent& DamageEvent, class AActor* DamageCauser, class AActor* Myself);
	void DemoPlayEvent();
	void UnbindForceCloseEvent();
	void TermCommandMenuEvent(bool bForce);
	void BindForceCloseEvent();
	void UpdateEscText();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void OnUICancel();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void UnbindGameOverDelegate();
	void ForceClose();
	void Press_On_MainMenu();
	void Pless_On_Cancel();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature();
	void ShowHint();
	void BndEvt__ConfigMenu_K2Node_ComponentBoundEvent_3_RequestParentFocus__DelegateSignature();
	void OnChangeEditMode(bool bisEditMode);
	void OnClickedOptionCategory(int32 ButtonId);
	void NoProblem();
	void HasProblem_();
	void CheckClose();
	void Changed();
	void CheckChanged();
	void Init();
	void Destruct();
	void OnCloseOptionMenu();
	void Construct();
	void OnPress_QuickAccess_1(ESBKeyConfigAction QuickAccess);
	void DialogClose(EDialogResult Result);
	void BrowserOpenCheck();
	void CloseOptionMenu();
	void SetSelectedItem(EOptionMenuItemType InSelectedItemType);
	void IsChangedItem(bool* bChanged);
	void IsClosable(bool* CanClose);
	void SetCloseState(bool Close);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionMenu_C">();
	}
	static class UOptionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionMenu_C>();
	}
};
static_assert(alignof(UOptionMenu_C) == 0x000008, "Wrong alignment on UOptionMenu_C");
static_assert(sizeof(UOptionMenu_C) == 0x000378, "Wrong size on UOptionMenu_C");
static_assert(offsetof(UOptionMenu_C, UberGraphFrame) == 0x0002A8, "Member 'UOptionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, AnimOut) == 0x0002B0, "Member 'UOptionMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, AnimIn) == 0x0002B8, "Member 'UOptionMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, Btn_ShowHint) == 0x0002C0, "Member 'UOptionMenu_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, CmnBack) == 0x0002C8, "Member 'UOptionMenu_C::CmnBack' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, CmnBack_Bg) == 0x0002D0, "Member 'UOptionMenu_C::CmnBack_Bg' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, ConfigMenu) == 0x0002D8, "Member 'UOptionMenu_C::ConfigMenu' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, Image_0) == 0x0002E0, "Member 'UOptionMenu_C::Image_0' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, Image_1) == 0x0002E8, "Member 'UOptionMenu_C::Image_1' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, LicenseDisp) == 0x0002F0, "Member 'UOptionMenu_C::LicenseDisp' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, NotifyWidget) == 0x0002F8, "Member 'UOptionMenu_C::NotifyWidget' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, UIBlocker) == 0x000300, "Member 'UOptionMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, UIBlocker_0) == 0x000308, "Member 'UOptionMenu_C::UIBlocker_0' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, VOptionSubButtonList) == 0x000310, "Member 'UOptionMenu_C::VOptionSubButtonList' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, CurrOptionMenuItemType) == 0x000318, "Member 'UOptionMenu_C::CurrOptionMenuItemType' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, DefaultOptionMenuItemType) == 0x000319, "Member 'UOptionMenu_C::DefaultOptionMenuItemType' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, NextOptionMenuItemType) == 0x00031A, "Member 'UOptionMenu_C::NextOptionMenuItemType' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, CommandMenuHUD) == 0x000320, "Member 'UOptionMenu_C::CommandMenuHUD' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, bIsPressMainMenuButton) == 0x000328, "Member 'UOptionMenu_C::bIsPressMainMenuButton' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, bEditMode) == 0x000329, "Member 'UOptionMenu_C::bEditMode' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, TransitionMenu) == 0x000330, "Member 'UOptionMenu_C::TransitionMenu' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, BeforeTutorialHelpID) == 0x000340, "Member 'UOptionMenu_C::BeforeTutorialHelpID' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, DialogTextTable) == 0x000348, "Member 'UOptionMenu_C::DialogTextTable' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, BackOptionMenuItemType) == 0x000350, "Member 'UOptionMenu_C::BackOptionMenuItemType' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, DialogWidget) == 0x000358, "Member 'UOptionMenu_C::DialogWidget' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, OnCloseAnimationFinished) == 0x000360, "Member 'UOptionMenu_C::OnCloseAnimationFinished' has a wrong offset!");
static_assert(offsetof(UOptionMenu_C, bResendSaves) == 0x000370, "Member 'UOptionMenu_C::bResendSaves' has a wrong offset!");

}

