#pragma once

 

// Package: ImagineStackBBaseView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "EnumStackBStep_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineStackBBaseView.ImagineStackBBaseView_C
// 0x0388 (0x0600 - 0x0278)
class UImagineStackBBaseView_C final : public USBStackBMainViewBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BtnAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Execute;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01_1;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonus;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Dialogs;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Execute;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_203;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_267;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_417;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineStackBResult_C*                 ImagineStackBResult;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_HeaderTitle_Battle;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_HeaderTitle_Enhance;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          LiquidMemory;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBFailedAnimation_C*               StackBFailedAnimation;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBNetworkLoadView_C*               StackBNetworkLoadView;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBSuccessAnimation_C*              StackBSuccessAnimation;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    StepBtn1;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    StepBtn2;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    StepBtn3;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBStepButton_C*                    StepBtn4;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnExecute;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_HeaderTitle;                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Animation;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           TargetImagine;                                     // 0x0360(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USelectMaterial_C*                      MaterialSelect;                                    // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   SelectMatrials;                                    // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBStackBUseTicket                     MaterialTickets;                                   // 0x0490(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          UseMaterialTicket;                                 // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_563B[0x7];                                     // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineInheritSelect_C*                InheritSelect;                                     // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           SpecialImagine;                                    // 0x04B8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTicketSelectImagine_C*                 TicketSelect;                                      // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EnumStackBStep                                Step;                                              // 0x05DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_563C[0x3];                                     // 0x05DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           YnDialog;                                          // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ResultDialogText;                                  // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          ResultStackBMax;                                   // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBImagineCategoryType                        ImagineType;                                       // 0x05F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          BlockClose;                                        // 0x05FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsResultSuccess;                                   // 0x05FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_ImagineStackBBaseView(int32 EntryPoint);
	void BndEvt__ImagineStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnCloseEndDialog(EDialogResult Result);
	void Destruct();
	void RequestClose();
	void BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImagineStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
	void OnDialog_Closed(EDialogResult Result);
	void BndEvt__ImagineStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature();
	void BndEvt__ImagineStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature();
	void OnComplete_Imagine_Stack_B(int32 RetCode, const struct FOwnItemInfo& Imagine, bool bSuccess);
	void Unbind_StackB_Completed();
	void Bind_Imagine_Stacked();
	void Term();
	void Init();
	void Construct();
	void OpenStep4();
	void OpenStep3();
	void OpenStep2();
	void BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void ReselectTicket();
	void OnTicketSelected(int32 Ticket);
	void BndEvt__ImagineStackBBaseView_StepBtn4_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature();
	void OnReInit();
	void OnSelectedPerk(const struct FOwnItemInfo& SelectedPerk);
	void BndEvt__ImagineStackBBaseView_StepBtn3_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature();
	void ReselectMaterial();
	void OnSelectedMaterials(TArray<struct FOwnItemInfo>& Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket);
	void BndEvt__ImagineStackBBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature();
	void ReselectImagine();
	void OnSelectTargetImagine(const struct FOwnItemInfo& ItemInfo);
	void BndEvt__ImagineStackBBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature();
	void InitializeButtons();
	void InitializeStep();
	void UpdateExecuteView();
	void OnCloseModal();
	void UpdateLiquidMemoryView();
	void UpdateRewardView();
	void InitializeHeader();
	void ResetStepSendData();

	void GetMaterialUIDs(TArray<class FString>* Uids) const;
	void GenerateTicketData(TArray<struct FSBStackBUseTicket>* Tickets) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineStackBBaseView_C">();
	}
	static class UImagineStackBBaseView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineStackBBaseView_C>();
	}
};
static_assert(alignof(UImagineStackBBaseView_C) == 0x000008, "Wrong alignment on UImagineStackBBaseView_C");
static_assert(sizeof(UImagineStackBBaseView_C) == 0x000600, "Wrong size on UImagineStackBBaseView_C");
static_assert(offsetof(UImagineStackBBaseView_C, UberGraphFrame) == 0x000278, "Member 'UImagineStackBBaseView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, BtnAnim) == 0x000280, "Member 'UImagineStackBBaseView_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, InAnim) == 0x000288, "Member 'UImagineStackBBaseView_C::InAnim' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Btn_Execute) == 0x000290, "Member 'UImagineStackBBaseView_C::Btn_Execute' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Btn_ShowHint) == 0x000298, "Member 'UImagineStackBBaseView_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, CmnBack01_1) == 0x0002A0, "Member 'UImagineStackBBaseView_C::CmnBack01_1' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, CmnBonus) == 0x0002A8, "Member 'UImagineStackBBaseView_C::CmnBonus' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Cvs_Dialogs) == 0x0002B0, "Member 'UImagineStackBBaseView_C::Cvs_Dialogs' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Cvs_Execute) == 0x0002B8, "Member 'UImagineStackBBaseView_C::Cvs_Execute' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Image) == 0x0002C0, "Member 'UImagineStackBBaseView_C::Image' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Image_203) == 0x0002C8, "Member 'UImagineStackBBaseView_C::Image_203' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Image_267) == 0x0002D0, "Member 'UImagineStackBBaseView_C::Image_267' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Image_415) == 0x0002D8, "Member 'UImagineStackBBaseView_C::Image_415' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Image_417) == 0x0002E0, "Member 'UImagineStackBBaseView_C::Image_417' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, ImagineStackBResult) == 0x0002E8, "Member 'UImagineStackBBaseView_C::ImagineStackBResult' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Img_HeaderTitle_Battle) == 0x0002F0, "Member 'UImagineStackBBaseView_C::Img_HeaderTitle_Battle' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Img_HeaderTitle_Enhance) == 0x0002F8, "Member 'UImagineStackBBaseView_C::Img_HeaderTitle_Enhance' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, LiquidMemory) == 0x000300, "Member 'UImagineStackBBaseView_C::LiquidMemory' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, MyWalletWidget) == 0x000308, "Member 'UImagineStackBBaseView_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, StackBFailedAnimation) == 0x000310, "Member 'UImagineStackBBaseView_C::StackBFailedAnimation' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, StackBNetworkLoadView) == 0x000318, "Member 'UImagineStackBBaseView_C::StackBNetworkLoadView' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, StackBSuccessAnimation) == 0x000320, "Member 'UImagineStackBBaseView_C::StackBSuccessAnimation' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, StepBtn1) == 0x000328, "Member 'UImagineStackBBaseView_C::StepBtn1' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, StepBtn2) == 0x000330, "Member 'UImagineStackBBaseView_C::StepBtn2' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, StepBtn3) == 0x000338, "Member 'UImagineStackBBaseView_C::StepBtn3' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, StepBtn4) == 0x000340, "Member 'UImagineStackBBaseView_C::StepBtn4' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Txt_BtnExecute) == 0x000348, "Member 'UImagineStackBBaseView_C::Txt_BtnExecute' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, WidgetSwitcher_HeaderTitle) == 0x000350, "Member 'UImagineStackBBaseView_C::WidgetSwitcher_HeaderTitle' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, WS_Animation) == 0x000358, "Member 'UImagineStackBBaseView_C::WS_Animation' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, TargetImagine) == 0x000360, "Member 'UImagineStackBBaseView_C::TargetImagine' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, MaterialSelect) == 0x000478, "Member 'UImagineStackBBaseView_C::MaterialSelect' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, SelectMatrials) == 0x000480, "Member 'UImagineStackBBaseView_C::SelectMatrials' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, MaterialTickets) == 0x000490, "Member 'UImagineStackBBaseView_C::MaterialTickets' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, UseMaterialTicket) == 0x000498, "Member 'UImagineStackBBaseView_C::UseMaterialTicket' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, InheritSelect) == 0x0004A0, "Member 'UImagineStackBBaseView_C::InheritSelect' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, OnClose) == 0x0004A8, "Member 'UImagineStackBBaseView_C::OnClose' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, SpecialImagine) == 0x0004B8, "Member 'UImagineStackBBaseView_C::SpecialImagine' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, TicketSelect) == 0x0005D0, "Member 'UImagineStackBBaseView_C::TicketSelect' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, TokenID) == 0x0005D8, "Member 'UImagineStackBBaseView_C::TokenID' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, Step) == 0x0005DC, "Member 'UImagineStackBBaseView_C::Step' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, YnDialog) == 0x0005E0, "Member 'UImagineStackBBaseView_C::YnDialog' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, ResultDialogText) == 0x0005E8, "Member 'UImagineStackBBaseView_C::ResultDialogText' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, ResultStackBMax) == 0x0005F8, "Member 'UImagineStackBBaseView_C::ResultStackBMax' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, ImagineType) == 0x0005F9, "Member 'UImagineStackBBaseView_C::ImagineType' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, BlockClose) == 0x0005FA, "Member 'UImagineStackBBaseView_C::BlockClose' has a wrong offset!");
static_assert(offsetof(UImagineStackBBaseView_C, IsResultSuccess) == 0x0005FB, "Member 'UImagineStackBBaseView_C::IsResultSuccess' has a wrong offset!");

}

