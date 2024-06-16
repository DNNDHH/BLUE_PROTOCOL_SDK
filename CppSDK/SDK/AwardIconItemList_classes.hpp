#pragma once

 

// Package: AwardIconItemList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AwardIconItemList.AwardIconItemList_C
// 0x0088 (0x0300 - 0x0278)
class UAwardIconItemList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAwardIconItem_C*                       AwardIconItem;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAwardIconItem_C*                       AwardIconItem_1;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAwardIconItem_C*                       AwardIconItem_2;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_263;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_51;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ClickedBtnAwardItemIcon;                           // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickEvent;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Count;                                             // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5337[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TmpAwardIdList;                                    // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnHover;                                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhover;                                         // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ClickedBtnAwardItemIcon__DelegateSignature(int32 AwardId);
	void OnClickEvent__DelegateSignature();
	void OnHover__DelegateSignature();
	void OnUnhover__DelegateSignature();
	void ExecuteUbergraph_AwardIconItemList(int32 EntryPoint);
	void BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void SetBtnEnable(bool IsEnable);
	void SetData(const TArray<int32>& InAwardIdList);
	void BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature(int32 OutAwardId);
	void BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature(int32 OutAwardId);
	void BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature(int32 OutAwardId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AwardIconItemList_C">();
	}
	static class UAwardIconItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAwardIconItemList_C>();
	}
};
static_assert(alignof(UAwardIconItemList_C) == 0x000008, "Wrong alignment on UAwardIconItemList_C");
static_assert(sizeof(UAwardIconItemList_C) == 0x000300, "Wrong size on UAwardIconItemList_C");
static_assert(offsetof(UAwardIconItemList_C, UberGraphFrame) == 0x000278, "Member 'UAwardIconItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, AwardIconItem) == 0x000280, "Member 'UAwardIconItemList_C::AwardIconItem' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, AwardIconItem_1) == 0x000288, "Member 'UAwardIconItemList_C::AwardIconItem_1' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, AwardIconItem_2) == 0x000290, "Member 'UAwardIconItemList_C::AwardIconItem_2' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, Button_263) == 0x000298, "Member 'UAwardIconItemList_C::Button_263' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, CanvasPanel_51) == 0x0002A0, "Member 'UAwardIconItemList_C::CanvasPanel_51' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, ClickedBtnAwardItemIcon) == 0x0002A8, "Member 'UAwardIconItemList_C::ClickedBtnAwardItemIcon' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, OnClickEvent) == 0x0002B8, "Member 'UAwardIconItemList_C::OnClickEvent' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, Count) == 0x0002C8, "Member 'UAwardIconItemList_C::Count' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, TmpAwardIdList) == 0x0002D0, "Member 'UAwardIconItemList_C::TmpAwardIdList' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, OnHover) == 0x0002E0, "Member 'UAwardIconItemList_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAwardIconItemList_C, OnUnhover) == 0x0002F0, "Member 'UAwardIconItemList_C::OnUnhover' has a wrong offset!");

}

