#pragma once

 

// Package: MountStackBBaseView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "EnumStackBStep_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MountStackBBaseView.MountStackBBaseView_C
// 0x0338 (0x05B0 - 0x0278)
class UMountStackBBaseView_C final : public USBStackBMainViewBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BtnAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Execute;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01_1;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonus;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Dialog;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Execute;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_228;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          LiquidMemory;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMountStackBResult_C*                   MountStackBResult;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBFailedAnimation_C*               StackBFailedAnimation;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBNetworkLoadView_C*               StackBNetworkLoadView;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBSuccessAnimation_C*              StackBSuccessAnimation;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    Step1;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    Step2;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    Step3;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SW_Animation;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnExecute;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMountSelect_C*                         Selector;                                          // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           TargetMount;                                       // 0x0330(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USelectMaterial_C*                      MaterialSelect;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBStackBUseTicket                     Ticket;                                            // 0x0460(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          UseTicket;                                         // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EnumStackBStep                                Step;                                              // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E8B[0x6];                                     // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           YnDialog;                                          // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockClose;                                        // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E8C[0x7];                                     // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           ResultMount;                                       // 0x0480(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ResultSuccess;                                     // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E8D[0x7];                                     // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x05A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_MountStackBBaseView(int32 EntryPoint);
	void Force_Close();
	void OnResultDialogClose(EDialogResult Result);
	void UnbindMountStackB();
	void OnCloseDialog(EDialogResult Result);
	void BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature();
	void BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature();
	void OnComplete_StackB(int32 RetCode, const struct FOwnItemInfo& Imagine, bool bSuccess);
	void BindMountStackB();
	void Close();
	void OnPushedCancelKey();
	void Term();
	void Init();
	void Construct();
	void OpenStep2();
	void BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ReselectStap1();
	void Btn2Close();
	void Btn1Closed();
	void ReselectStep2();
	void OnReselectStep2();
	void OnReselectStep1();
	void BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature();
	void BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnSelectMaterial(TArray<struct FOwnItemInfo>& Uids, bool Param_UseTicket, const struct FSBStackBUseTicket& StackBTicket);
	void BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature();
	void OnSelect_Mount(const struct FOwnItemInfo& ItemInfo);
	void BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature();
	void InitializeButtons();
	void UpdateLiquidMemory();
	void UpdateStep();
	void HideResult();
	void ShowResult();
	void RewindResultAfterStep1();
	void RewindResultAfterBeginStep();

	void GetTickets(TArray<struct FSBStackBUseTicket>* Tickets) const;
	void GetMaterialUIDs(TArray<class FString>* Uids) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MountStackBBaseView_C">();
	}
	static class UMountStackBBaseView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMountStackBBaseView_C>();
	}
};
static_assert(alignof(UMountStackBBaseView_C) == 0x000008, "Wrong alignment on UMountStackBBaseView_C");
static_assert(sizeof(UMountStackBBaseView_C) == 0x0005B0, "Wrong size on UMountStackBBaseView_C");
static_assert(offsetof(UMountStackBBaseView_C, UberGraphFrame) == 0x000278, "Member 'UMountStackBBaseView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, BtnAnim) == 0x000280, "Member 'UMountStackBBaseView_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, InAnim) == 0x000288, "Member 'UMountStackBBaseView_C::InAnim' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Btn_Execute) == 0x000290, "Member 'UMountStackBBaseView_C::Btn_Execute' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Btn_ShowHint) == 0x000298, "Member 'UMountStackBBaseView_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, CmnBack01_1) == 0x0002A0, "Member 'UMountStackBBaseView_C::CmnBack01_1' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, CmnBonus) == 0x0002A8, "Member 'UMountStackBBaseView_C::CmnBonus' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Cvs_Dialog) == 0x0002B0, "Member 'UMountStackBBaseView_C::Cvs_Dialog' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Cvs_Execute) == 0x0002B8, "Member 'UMountStackBBaseView_C::Cvs_Execute' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Image_228) == 0x0002C0, "Member 'UMountStackBBaseView_C::Image_228' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Image_415) == 0x0002C8, "Member 'UMountStackBBaseView_C::Image_415' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, LiquidMemory) == 0x0002D0, "Member 'UMountStackBBaseView_C::LiquidMemory' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, MountStackBResult) == 0x0002D8, "Member 'UMountStackBBaseView_C::MountStackBResult' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, MyWalletWidget) == 0x0002E0, "Member 'UMountStackBBaseView_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, StackBFailedAnimation) == 0x0002E8, "Member 'UMountStackBBaseView_C::StackBFailedAnimation' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, StackBNetworkLoadView) == 0x0002F0, "Member 'UMountStackBBaseView_C::StackBNetworkLoadView' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, StackBSuccessAnimation) == 0x0002F8, "Member 'UMountStackBBaseView_C::StackBSuccessAnimation' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Step1) == 0x000300, "Member 'UMountStackBBaseView_C::Step1' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Step2) == 0x000308, "Member 'UMountStackBBaseView_C::Step2' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Step3) == 0x000310, "Member 'UMountStackBBaseView_C::Step3' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, SW_Animation) == 0x000318, "Member 'UMountStackBBaseView_C::SW_Animation' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Txt_BtnExecute) == 0x000320, "Member 'UMountStackBBaseView_C::Txt_BtnExecute' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Selector) == 0x000328, "Member 'UMountStackBBaseView_C::Selector' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, TargetMount) == 0x000330, "Member 'UMountStackBBaseView_C::TargetMount' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, MaterialSelect) == 0x000448, "Member 'UMountStackBBaseView_C::MaterialSelect' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Materials) == 0x000450, "Member 'UMountStackBBaseView_C::Materials' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Ticket) == 0x000460, "Member 'UMountStackBBaseView_C::Ticket' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, UseTicket) == 0x000468, "Member 'UMountStackBBaseView_C::UseTicket' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, Step) == 0x000469, "Member 'UMountStackBBaseView_C::Step' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, YnDialog) == 0x000470, "Member 'UMountStackBBaseView_C::YnDialog' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, BlockClose) == 0x000478, "Member 'UMountStackBBaseView_C::BlockClose' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, ResultMount) == 0x000480, "Member 'UMountStackBBaseView_C::ResultMount' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, ResultSuccess) == 0x000598, "Member 'UMountStackBBaseView_C::ResultSuccess' has a wrong offset!");
static_assert(offsetof(UMountStackBBaseView_C, OnClose) == 0x0005A0, "Member 'UMountStackBBaseView_C::OnClose' has a wrong offset!");

}

