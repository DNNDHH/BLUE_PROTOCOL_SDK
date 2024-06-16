#pragma once

 

// Package: WeaponStackBBaseView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "EnumStackBStep_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponStackBBaseView.WeaponStackBBaseView_C
// 0x0370 (0x05E8 - 0x0278)
class UWeaponStackBBaseView_C final : public USBStackBMainViewBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BtnAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Execute;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonus;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Base2;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Execute;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_203;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          LiquidMemory;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBFailedAnimation_C*               StackBFailedAnimation;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBNetworkLoadView_C*               StackBNetworkLoadView;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBSuccessAnimation_C*              StackBSuccessAnimation;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    StepBtn1;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    StepBtn2;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    StepBtn3;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    StepBtn4;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnExecute;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponStackBResult_C*                  WeaponStackBResult;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Animations;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           TargetWeapon;                                      // 0x0330(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UseTicket;                                         // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69D7[0x7];                                     // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStackBPerk>                  SelectedPerks;                                     // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TokenID;                                           // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69D8[0x4];                                     // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SpecialUID;                                        // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSBStackBUseTicket                     MaterialTickets;                                   // 0x0488(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UBP_Dialog_C*                           Dialog;                                            // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           AfterStackUpWeapon;                                // 0x0498(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x05B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWeaponInheritSelect_C*                 InhelitView;                                       // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USelectMaterial_C*                      MaterialSelect;                                    // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EnumStackBStep                                ButtonPhase;                                       // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockClose;                                        // 0x05D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69D9[0x6];                                     // 0x05D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTicketSelectWeapon_C*                  TicketSelect;                                      // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsResultSuccess;                                   // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_WeaponStackBBaseView(int32 EntryPoint);
	void Step4Open();
	void Step3Open();
	void Step2Open();
	void OnCloseEndDialog(EDialogResult Result);
	void OnCloseInhelit();
	void OnCloseTicket();
	void OnCloseMaterial();
	void OnCloseWeaponSelect();
	void Bind_Watchdog_UI_Esc();
	void Close();
	void BndEvt__WeaponStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WeaponStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_9_OnAnimPlayed__DelegateSignature();
	void BndEvt__WeaponStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_8_OnAnimPlayed__DelegateSignature();
	void BndEvt__WeaponStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void End_Dialog(EDialogResult Result);
	void OnCompleteWeaponStackB(int32 RetCode, const struct FOwnItemInfo& Weapon, bool bSuccess);
	void Term();
	void Init();
	void BndEvt__WeaponStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void ReselectBt4();
	void OnSelectedBtn4(int32 UseTokenId);
	void ReselectInherit();
	void OnInhelitSelected(const class FString& SpecialPerkUID, TArray<struct FSBStackBPerk>& Param_SelectedPerks);
	void BndEvt__WeaponStackBoostBaseView_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
	void BndEvt__WeaponStackBoostBaseView_StepBtn3_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature();
	void BndEvt__WeaponStackBoostBaseView_StepBtn4_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature();
	void ReselectMaterial();
	void OnMaterialSelected(TArray<struct FOwnItemInfo>& Uids, bool Param_UseTicket, const struct FSBStackBUseTicket& StackBTicket);
	void BndEvt__WeaponStackBoostBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature();
	void ReselectWeapon();
	void OnSelectedTarget(const struct FOwnItemInfo& ItemInfo);
	void BndEvt__WeaponStackBoostBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature();
	void Construct();
	void FindMaterialByUniqueId(const class FString& UniqueId, struct FOwnItemInfo* Array_Element);
	void GetStackBParams(class FString* UID, TArray<class FString>* Param_Materials, TArray<struct FSBStackBUseTicket>* Tickets, TArray<struct FSBStackBSelect>* Perks, struct FSBStackBSelect* Vital);
	void UpdateStackButton();
	void ResetAll();
	void InitializeButtonNumber();
	void InitializeStep();
	void UpdateLiquidMemory();
	void UpdateReward();
	void Result_Update_Steps();
	void RewindStep4();
	void StepResetSelectedData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponStackBBaseView_C">();
	}
	static class UWeaponStackBBaseView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponStackBBaseView_C>();
	}
};
static_assert(alignof(UWeaponStackBBaseView_C) == 0x000008, "Wrong alignment on UWeaponStackBBaseView_C");
static_assert(sizeof(UWeaponStackBBaseView_C) == 0x0005E8, "Wrong size on UWeaponStackBBaseView_C");
static_assert(offsetof(UWeaponStackBBaseView_C, UberGraphFrame) == 0x000278, "Member 'UWeaponStackBBaseView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, BtnAnim) == 0x000280, "Member 'UWeaponStackBBaseView_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, InAnim) == 0x000288, "Member 'UWeaponStackBBaseView_C::InAnim' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Btn_Execute) == 0x000290, "Member 'UWeaponStackBBaseView_C::Btn_Execute' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Btn_ShowHint) == 0x000298, "Member 'UWeaponStackBBaseView_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, CmnBack01) == 0x0002A0, "Member 'UWeaponStackBBaseView_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, CmnBonus) == 0x0002A8, "Member 'UWeaponStackBBaseView_C::CmnBonus' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Cvs_Base2) == 0x0002B0, "Member 'UWeaponStackBBaseView_C::Cvs_Base2' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Cvs_Execute) == 0x0002B8, "Member 'UWeaponStackBBaseView_C::Cvs_Execute' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Image_203) == 0x0002C0, "Member 'UWeaponStackBBaseView_C::Image_203' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Image_415) == 0x0002C8, "Member 'UWeaponStackBBaseView_C::Image_415' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, LiquidMemory) == 0x0002D0, "Member 'UWeaponStackBBaseView_C::LiquidMemory' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, MyWalletWidget) == 0x0002D8, "Member 'UWeaponStackBBaseView_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, StackBFailedAnimation) == 0x0002E0, "Member 'UWeaponStackBBaseView_C::StackBFailedAnimation' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, StackBNetworkLoadView) == 0x0002E8, "Member 'UWeaponStackBBaseView_C::StackBNetworkLoadView' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, StackBSuccessAnimation) == 0x0002F0, "Member 'UWeaponStackBBaseView_C::StackBSuccessAnimation' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, StepBtn1) == 0x0002F8, "Member 'UWeaponStackBBaseView_C::StepBtn1' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, StepBtn2) == 0x000300, "Member 'UWeaponStackBBaseView_C::StepBtn2' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, StepBtn3) == 0x000308, "Member 'UWeaponStackBBaseView_C::StepBtn3' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, StepBtn4) == 0x000310, "Member 'UWeaponStackBBaseView_C::StepBtn4' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Txt_BtnExecute) == 0x000318, "Member 'UWeaponStackBBaseView_C::Txt_BtnExecute' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, WeaponStackBResult) == 0x000320, "Member 'UWeaponStackBBaseView_C::WeaponStackBResult' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, WS_Animations) == 0x000328, "Member 'UWeaponStackBBaseView_C::WS_Animations' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, TargetWeapon) == 0x000330, "Member 'UWeaponStackBBaseView_C::TargetWeapon' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Materials) == 0x000448, "Member 'UWeaponStackBBaseView_C::Materials' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, UseTicket) == 0x000458, "Member 'UWeaponStackBBaseView_C::UseTicket' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, SelectedPerks) == 0x000460, "Member 'UWeaponStackBBaseView_C::SelectedPerks' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, TokenID) == 0x000470, "Member 'UWeaponStackBBaseView_C::TokenID' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, SpecialUID) == 0x000478, "Member 'UWeaponStackBBaseView_C::SpecialUID' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, MaterialTickets) == 0x000488, "Member 'UWeaponStackBBaseView_C::MaterialTickets' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, Dialog) == 0x000490, "Member 'UWeaponStackBBaseView_C::Dialog' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, AfterStackUpWeapon) == 0x000498, "Member 'UWeaponStackBBaseView_C::AfterStackUpWeapon' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, OnClose) == 0x0005B0, "Member 'UWeaponStackBBaseView_C::OnClose' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, InhelitView) == 0x0005C0, "Member 'UWeaponStackBBaseView_C::InhelitView' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, MaterialSelect) == 0x0005C8, "Member 'UWeaponStackBBaseView_C::MaterialSelect' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, ButtonPhase) == 0x0005D0, "Member 'UWeaponStackBBaseView_C::ButtonPhase' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, BlockClose) == 0x0005D1, "Member 'UWeaponStackBBaseView_C::BlockClose' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, TicketSelect) == 0x0005D8, "Member 'UWeaponStackBBaseView_C::TicketSelect' has a wrong offset!");
static_assert(offsetof(UWeaponStackBBaseView_C, IsResultSuccess) == 0x0005E0, "Member 'UWeaponStackBBaseView_C::IsResultSuccess' has a wrong offset!");

}

