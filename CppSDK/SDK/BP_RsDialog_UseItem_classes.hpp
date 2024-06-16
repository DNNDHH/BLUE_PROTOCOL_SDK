#pragma once

 

// Package: BP_RsDialog_UseItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogProductTitleType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_UseItem.BP_RsDialog_UseItem_C
// 0x0048 (0x02C0 - 0x0278)
class UBP_RsDialog_UseItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_RsDialog_ProductTitle_C*            BP_ProductTitle;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_01;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_02;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_03;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRmShopMenuType                             CurrentShopType;                                   // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5531[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_UseItem(int32 EntryPoint);
	void BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetDialogInfo(ERsDialogProductTitleType ProductTitleType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, const class FText& EffectDescription);
	void BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_UseItem_C">();
	}
	static class UBP_RsDialog_UseItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_UseItem_C>();
	}
};
static_assert(alignof(UBP_RsDialog_UseItem_C) == 0x000008, "Wrong alignment on UBP_RsDialog_UseItem_C");
static_assert(sizeof(UBP_RsDialog_UseItem_C) == 0x0002C0, "Wrong size on UBP_RsDialog_UseItem_C");
static_assert(offsetof(UBP_RsDialog_UseItem_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_UseItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_UseItem_C, BP_ProductTitle) == 0x000280, "Member 'UBP_RsDialog_UseItem_C::BP_ProductTitle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_UseItem_C, Btn_01) == 0x000288, "Member 'UBP_RsDialog_UseItem_C::Btn_01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_UseItem_C, Btn_02) == 0x000290, "Member 'UBP_RsDialog_UseItem_C::Btn_02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_UseItem_C, Txt_03) == 0x000298, "Member 'UBP_RsDialog_UseItem_C::Txt_03' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_UseItem_C, UIBlocker) == 0x0002A0, "Member 'UBP_RsDialog_UseItem_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_UseItem_C, CurrentShopType) == 0x0002A8, "Member 'UBP_RsDialog_UseItem_C::CurrentShopType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_UseItem_C, OnButtonClicked) == 0x0002B0, "Member 'UBP_RsDialog_UseItem_C::OnButtonClicked' has a wrong offset!");

}

