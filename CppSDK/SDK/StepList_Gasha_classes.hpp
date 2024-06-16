#pragma once

 

// Package: StepList_Gasha

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepList_Gasha.StepList_Gasha_C
// 0x0098 (0x0310 - 0x0278)
class UStepList_Gasha_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Box_Tab;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            btn_page_next;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            btn_page_prev;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepListItem_Gasha_C*                  StepListItem_Gasha_1;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepListItem_Gasha_C*                  StepListItem_Gasha_2;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepListItem_Gasha_C*                  StepListItem_Gasha_3;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepListItem_Gasha_C*                  StepListItem_Gasha_4;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepListItem_Gasha_C*                  StepListItem_Gasha_5;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UGashaMenu_CategoryItem_C*>      BtnList;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnChangeStep;                                      // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         BtnDispNumMax;                                     // 0x02E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BtnScrollNum;                                      // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxStepNum;                                        // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedBtn;                                       // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCmnBtn16_C*>                    Btn_1;                                             // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UStepListItem_Gasha_C*>          StepList;                                          // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo);
	void ExecuteUbergraph_StepList_Gasha(int32 EntryPoint);
	void BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature(int32 BtnId);
	void BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature(int32 BtnId);
	void BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature(int32 BtnId);
	void BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature(int32 BtnId);
	void BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature(int32 BtnId);
	void CommonBtnClicked(int32 BtnId);
	void BndEvt__btn_page_prev_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_page_next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitSetStepInfo(int32 SelectStep, int32 StepMax);
	void CreateBtnList();
	void SetBtnVisivility(ESlateVisibility IsVisibility);
	void SetBtnSelected(int32 SelectedBtnID);
	void GetSelectStepNum(int32* OutSelectStepNum);
	void GetSelectBtn(int32* OutSelectBtnId);
	void UpdateBtnPage();
	void GetGashaInfo(int32 BtnId, struct FSBGashaInfo* OutGashaInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepList_Gasha_C">();
	}
	static class UStepList_Gasha_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepList_Gasha_C>();
	}
};
static_assert(alignof(UStepList_Gasha_C) == 0x000008, "Wrong alignment on UStepList_Gasha_C");
static_assert(sizeof(UStepList_Gasha_C) == 0x000310, "Wrong size on UStepList_Gasha_C");
static_assert(offsetof(UStepList_Gasha_C, UberGraphFrame) == 0x000278, "Member 'UStepList_Gasha_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, Box_Tab) == 0x000280, "Member 'UStepList_Gasha_C::Box_Tab' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, btn_page_next) == 0x000288, "Member 'UStepList_Gasha_C::btn_page_next' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, btn_page_prev) == 0x000290, "Member 'UStepList_Gasha_C::btn_page_prev' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, StepListItem_Gasha_1) == 0x000298, "Member 'UStepList_Gasha_C::StepListItem_Gasha_1' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, StepListItem_Gasha_2) == 0x0002A0, "Member 'UStepList_Gasha_C::StepListItem_Gasha_2' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, StepListItem_Gasha_3) == 0x0002A8, "Member 'UStepList_Gasha_C::StepListItem_Gasha_3' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, StepListItem_Gasha_4) == 0x0002B0, "Member 'UStepList_Gasha_C::StepListItem_Gasha_4' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, StepListItem_Gasha_5) == 0x0002B8, "Member 'UStepList_Gasha_C::StepListItem_Gasha_5' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, BtnList) == 0x0002C0, "Member 'UStepList_Gasha_C::BtnList' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, OnChangeStep) == 0x0002D0, "Member 'UStepList_Gasha_C::OnChangeStep' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, BtnDispNumMax) == 0x0002E0, "Member 'UStepList_Gasha_C::BtnDispNumMax' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, BtnScrollNum) == 0x0002E4, "Member 'UStepList_Gasha_C::BtnScrollNum' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, MaxStepNum) == 0x0002E8, "Member 'UStepList_Gasha_C::MaxStepNum' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, SelectedBtn) == 0x0002EC, "Member 'UStepList_Gasha_C::SelectedBtn' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, Btn_1) == 0x0002F0, "Member 'UStepList_Gasha_C::Btn_1' has a wrong offset!");
static_assert(offsetof(UStepList_Gasha_C, StepList) == 0x000300, "Member 'UStepList_Gasha_C::StepList' has a wrong offset!");

}

