#pragma once

 

// Package: StackTokenSelectorListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackTokenSelectorListItem.StackTokenSelectorListItem_C
// 0x0070 (0x02E8 - 0x0278)
class UStackTokenSelectorListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRadioBtnCmn01_C*                     CB_Radio;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonInfoIcon_C*                      CommonInfoIcon;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconTicket;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ContainNum;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NeedNum;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TokenName;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TokenID;                                           // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    StackBTicketData;                                  // 0x02CC(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnSelect__DelegateSignature(class UStackTokenSelectorListItem_C* Target);
	void ExecuteUbergraph_StackTokenSelectorListItem(int32 EntryPoint);
	void BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetTokenData(const struct FSBStackBTicketData& Param_TokenID);
	void Set_Select(bool bSelect);
	void UpdateNeedNum();
	void SetUIScreen_();

	void GetTokenId(int32* Param_TokenID) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackTokenSelectorListItem_C">();
	}
	static class UStackTokenSelectorListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackTokenSelectorListItem_C>();
	}
};
static_assert(alignof(UStackTokenSelectorListItem_C) == 0x000008, "Wrong alignment on UStackTokenSelectorListItem_C");
static_assert(sizeof(UStackTokenSelectorListItem_C) == 0x0002E8, "Wrong size on UStackTokenSelectorListItem_C");
static_assert(offsetof(UStackTokenSelectorListItem_C, UberGraphFrame) == 0x000278, "Member 'UStackTokenSelectorListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, CB_Radio) == 0x000280, "Member 'UStackTokenSelectorListItem_C::CB_Radio' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, CommonInfoIcon) == 0x000288, "Member 'UStackTokenSelectorListItem_C::CommonInfoIcon' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, IconTicket) == 0x000290, "Member 'UStackTokenSelectorListItem_C::IconTicket' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, Txt_ContainNum) == 0x000298, "Member 'UStackTokenSelectorListItem_C::Txt_ContainNum' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, Txt_NeedNum) == 0x0002A0, "Member 'UStackTokenSelectorListItem_C::Txt_NeedNum' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, Txt_TokenName) == 0x0002A8, "Member 'UStackTokenSelectorListItem_C::Txt_TokenName' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, UIBlocker) == 0x0002B0, "Member 'UStackTokenSelectorListItem_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, OnSelect) == 0x0002B8, "Member 'UStackTokenSelectorListItem_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, TokenID) == 0x0002C8, "Member 'UStackTokenSelectorListItem_C::TokenID' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListItem_C, StackBTicketData) == 0x0002CC, "Member 'UStackTokenSelectorListItem_C::StackBTicketData' has a wrong offset!");

}

