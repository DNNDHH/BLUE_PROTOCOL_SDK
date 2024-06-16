#pragma once

 

// Package: TokenSelectorListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TokenSelectorListItem.TokenSelectorListItem_C
// 0x00F0 (0x0368 - 0x0278)
class UTokenSelectorListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRadioBtnCmn01_C*                     CB_Radio;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_Select;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonInfoIcon_C*                      CommonInfoIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconTicket;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ContainNum;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NeedNum;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TokenName;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCraftMasterData                       Recepi_Data;                                       // 0x02C0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CraftCount;                                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B63[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TokenID;                                           // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelect__DelegateSignature(class UTokenSelectorListItem_C* Target);
	void ExecuteUbergraph_TokenSelectorListItem(int32 EntryPoint);
	void BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TokenSelectorListItem_CB_Select_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetTokenData(int32 Param_TokenID);
	void SetRecepiData(const struct FCraftMasterData& RecepiData);
	void Set_Select(bool bSelect);
	void SetCraftCount(int32 Param_CraftCount);
	void UpdateNeedNum();
	void SetUIScreen_();

	void GetTokenId(int32* Param_TokenID) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TokenSelectorListItem_C">();
	}
	static class UTokenSelectorListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTokenSelectorListItem_C>();
	}
};
static_assert(alignof(UTokenSelectorListItem_C) == 0x000008, "Wrong alignment on UTokenSelectorListItem_C");
static_assert(sizeof(UTokenSelectorListItem_C) == 0x000368, "Wrong size on UTokenSelectorListItem_C");
static_assert(offsetof(UTokenSelectorListItem_C, UberGraphFrame) == 0x000278, "Member 'UTokenSelectorListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, CB_Radio) == 0x000280, "Member 'UTokenSelectorListItem_C::CB_Radio' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, CB_Select) == 0x000288, "Member 'UTokenSelectorListItem_C::CB_Select' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, CommonInfoIcon) == 0x000290, "Member 'UTokenSelectorListItem_C::CommonInfoIcon' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, IconTicket) == 0x000298, "Member 'UTokenSelectorListItem_C::IconTicket' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, Txt_ContainNum) == 0x0002A0, "Member 'UTokenSelectorListItem_C::Txt_ContainNum' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, Txt_NeedNum) == 0x0002A8, "Member 'UTokenSelectorListItem_C::Txt_NeedNum' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, Txt_TokenName) == 0x0002B0, "Member 'UTokenSelectorListItem_C::Txt_TokenName' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, UIBlocker) == 0x0002B8, "Member 'UTokenSelectorListItem_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, Recepi_Data) == 0x0002C0, "Member 'UTokenSelectorListItem_C::Recepi_Data' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, CraftCount) == 0x000348, "Member 'UTokenSelectorListItem_C::CraftCount' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, OnSelect) == 0x000350, "Member 'UTokenSelectorListItem_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListItem_C, TokenID) == 0x000360, "Member 'UTokenSelectorListItem_C::TokenID' has a wrong offset!");

}

