#pragma once

 

// Package: CommunicateSettingMenu_ClassData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C
// 0x0068 (0x02E0 - 0x0278)
class UCommunicateSettingMenu_ClassData_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAwardIconItemList_C*                   AwardIconItemList;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_395;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtClassLevel;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtClassName;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ClickedBtnAwardIconItemList;                       // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickEvent;                                      // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHover;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhver;                                          // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ClickedBtnAwardIconItemList__DelegateSignature(int32 AwardId);
	void OnClickEvent__DelegateSignature();
	void OnHover__DelegateSignature();
	void OnUnhver__DelegateSignature();
	void ExecuteUbergraph_CommunicateSettingMenu_ClassData(int32 EntryPoint);
	void BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetBtnEnable(bool IsEnable);
	void SetAwardId(const TArray<int32>& InAwardId);
	void BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature(int32 AwardId);
	void ErrorDataSet();
	void SetClassIconAndName(ESBClassType InClassType, const TArray<int32>& InAwardIdList);
	void SetData(ESBClassType InClassType, int32 InClassLevel, const TArray<int32>& InAwardIdList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommunicateSettingMenu_ClassData_C">();
	}
	static class UCommunicateSettingMenu_ClassData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommunicateSettingMenu_ClassData_C>();
	}
};
static_assert(alignof(UCommunicateSettingMenu_ClassData_C) == 0x000008, "Wrong alignment on UCommunicateSettingMenu_ClassData_C");
static_assert(sizeof(UCommunicateSettingMenu_ClassData_C) == 0x0002E0, "Wrong size on UCommunicateSettingMenu_ClassData_C");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, UberGraphFrame) == 0x000278, "Member 'UCommunicateSettingMenu_ClassData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, AwardIconItemList) == 0x000280, "Member 'UCommunicateSettingMenu_ClassData_C::AwardIconItemList' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, Button_395) == 0x000288, "Member 'UCommunicateSettingMenu_ClassData_C::Button_395' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, TxtClassLevel) == 0x000290, "Member 'UCommunicateSettingMenu_ClassData_C::TxtClassLevel' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, TxtClassName) == 0x000298, "Member 'UCommunicateSettingMenu_ClassData_C::TxtClassName' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, ClickedBtnAwardIconItemList) == 0x0002A0, "Member 'UCommunicateSettingMenu_ClassData_C::ClickedBtnAwardIconItemList' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, OnClickEvent) == 0x0002B0, "Member 'UCommunicateSettingMenu_ClassData_C::OnClickEvent' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, OnHover) == 0x0002C0, "Member 'UCommunicateSettingMenu_ClassData_C::OnHover' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ClassData_C, OnUnhver) == 0x0002D0, "Member 'UCommunicateSettingMenu_ClassData_C::OnUnhver' has a wrong offset!");

}

