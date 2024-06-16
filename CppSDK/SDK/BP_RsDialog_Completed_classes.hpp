#pragma once

 

// Package: BP_RsDialog_Completed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogProductTitleType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_Completed.BP_RsDialog_Completed_C
// 0x0058 (0x02D0 - 0x0278)
class UBP_RsDialog_Completed_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Box_Amount;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Box_Message02;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ProductTitle_C*            BP_ProductTitle;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_Check;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoX_Line;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_01;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Amount;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRmShopMenuType                             CurrentShopType;                                   // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_556D[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_Completed(int32 EntryPoint);
	void SetCurrentShopType(ESBRmShopMenuType ShopType);
	void SetDialogInfo(ERsDialogProductTitleType ProductTitleType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, bool ShowMsgStoreLetter);
	void BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_Completed_C">();
	}
	static class UBP_RsDialog_Completed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_Completed_C>();
	}
};
static_assert(alignof(UBP_RsDialog_Completed_C) == 0x000008, "Wrong alignment on UBP_RsDialog_Completed_C");
static_assert(sizeof(UBP_RsDialog_Completed_C) == 0x0002D0, "Wrong size on UBP_RsDialog_Completed_C");
static_assert(offsetof(UBP_RsDialog_Completed_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_Completed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, Box_Amount) == 0x000280, "Member 'UBP_RsDialog_Completed_C::Box_Amount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, Box_Message02) == 0x000288, "Member 'UBP_RsDialog_Completed_C::Box_Message02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, BP_ProductTitle) == 0x000290, "Member 'UBP_RsDialog_Completed_C::BP_ProductTitle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, Btn_Check) == 0x000298, "Member 'UBP_RsDialog_Completed_C::Btn_Check' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, SizeBoX_Line) == 0x0002A0, "Member 'UBP_RsDialog_Completed_C::SizeBoX_Line' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, Txt_01) == 0x0002A8, "Member 'UBP_RsDialog_Completed_C::Txt_01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, Txt_Amount) == 0x0002B0, "Member 'UBP_RsDialog_Completed_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, CurrentShopType) == 0x0002B8, "Member 'UBP_RsDialog_Completed_C::CurrentShopType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Completed_C, OnButtonClicked) == 0x0002C0, "Member 'UBP_RsDialog_Completed_C::OnButtonClicked' has a wrong offset!");

}

