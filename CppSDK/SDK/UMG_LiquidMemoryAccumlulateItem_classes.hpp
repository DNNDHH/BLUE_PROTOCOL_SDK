#pragma once

 

// Package: UMG_LiquidMemoryAccumlulateItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C
// 0x0070 (0x02E8 - 0x0278)
class UUMG_LiquidMemoryAccumlulateItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Amount;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_PurchaseCountGrp;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PurchaseCountGrp;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Minus;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Plus;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPurchaseCount;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenAmount;                                       // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RepeatMinus;                                       // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepeatPlus;                                        // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EE2[0x2];                                     // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UseTokenNum;                                       // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUseTokenNumChanged;                              // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsLimitOver;                                       // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFullCharge;                                      // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnUseTokenNumChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_LiquidMemoryAccumlulateItem(int32 EntryPoint);
	void BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature();
	void NumberPlus();
	void StartRepeatPlus();
	void BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature();
	void NumberMinus();
	void StartRepeatMinus();
	void BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	void SetData(const struct FSBTokenState& TokenState, bool Param_IsFullCharge);
	void GetUseToken(int32* Param_TokenID, int32* UseNum);
	void SetLimitOver(bool Param_IsLimitOver);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryAccumlulateItem_C">();
	}
	static class UUMG_LiquidMemoryAccumlulateItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryAccumlulateItem_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryAccumlulateItem_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryAccumlulateItem_C");
static_assert(sizeof(UUMG_LiquidMemoryAccumlulateItem_C) == 0x0002E8, "Wrong size on UUMG_LiquidMemoryAccumlulateItem_C");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, Amount) == 0x000280, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::Amount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, Bg_PurchaseCountGrp) == 0x000288, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::Bg_PurchaseCountGrp' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, Icon) == 0x000290, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::Icon' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, PurchaseCountGrp) == 0x000298, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::PurchaseCountGrp' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, SBButton_Minus) == 0x0002A0, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::SBButton_Minus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, SBButton_Plus) == 0x0002A8, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::SBButton_Plus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, Txt_Name) == 0x0002B0, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, TxtPurchaseCount) == 0x0002B8, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::TxtPurchaseCount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, TokenID) == 0x0002C0, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::TokenID' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, TokenAmount) == 0x0002C4, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::TokenAmount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, RepeatMinus) == 0x0002C8, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::RepeatMinus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, RepeatPlus) == 0x0002C9, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::RepeatPlus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, UseTokenNum) == 0x0002CC, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::UseTokenNum' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, OnUseTokenNumChanged) == 0x0002D0, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::OnUseTokenNumChanged' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, IsLimitOver) == 0x0002E0, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::IsLimitOver' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateItem_C, IsFullCharge) == 0x0002E1, "Member 'UUMG_LiquidMemoryAccumlulateItem_C::IsFullCharge' has a wrong offset!");

}

