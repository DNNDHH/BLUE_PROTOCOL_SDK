#pragma once

 

// Package: UMG_LiquidMemoryAccumlulateList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C
// 0x0100 (0x03B0 - 0x02B0)
class UUMG_LiquidMemoryAccumlulateList_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Amount;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Image;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgShadow;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ButtonClose;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ButtonUse;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                TransParentButton;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryAccumlulateItem_C*     UMG_LiquidMemoryAccumlulateItem;                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryAccumlulateItem_C*     UMG_LiquidMemoryAccumlulateItem_1;                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryAccumlulateItem_C*     UMG_LiquidMemoryAccumlulateItem_2;                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryAccumlulateItem_C*     UMG_LiquidMemoryAccumlulateItem_3;                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryAccumlulateItem_C*     UMG_LiquidMemoryAccumlulateItem_436;               // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    UseButtonLabel;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Items;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectLiquidMemoryId;                              // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EEB[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUMG_LiquidMemoryAccumlulateItem_C*> TokenListItems;                                    // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<int32, int32>                            UseTokenMap;                                       // 0x0340(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnAccumulateCompleted;                             // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TotalUseNum;                                       // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LimitUseNum;                                       // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLimitOver;                                       // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnAccumulateCompleted__DelegateSignature();
	void ExecuteUbergraph_UMG_LiquidMemoryAccumlulateList(int32 EntryPoint);
	void BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UMG_LiquidMemoryAccumlulateList_TransParentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnUseTokenNumChanged();
	void OnUseDialogClosed(const EYesNoDialogResult Result);
	void SelfClose();
	void _________0(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos);
	void BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetAccumlulateList(int32 LiquidMemoryId, TArray<struct FSBLiquidMemoryAccumulateTokenInfo>& AccumlulateItemMaster, TArray<struct FSBTokenState>& InTokenList, bool IsFullCharge);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryAccumlulateList_C">();
	}
	static class UUMG_LiquidMemoryAccumlulateList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryAccumlulateList_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryAccumlulateList_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryAccumlulateList_C");
static_assert(sizeof(UUMG_LiquidMemoryAccumlulateList_C) == 0x0003B0, "Wrong size on UUMG_LiquidMemoryAccumlulateList_C");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, Amount) == 0x0002B8, "Member 'UUMG_LiquidMemoryAccumlulateList_C::Amount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, BG_Image) == 0x0002C0, "Member 'UUMG_LiquidMemoryAccumlulateList_C::BG_Image' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, BgShadow) == 0x0002C8, "Member 'UUMG_LiquidMemoryAccumlulateList_C::BgShadow' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, ButtonClose) == 0x0002D0, "Member 'UUMG_LiquidMemoryAccumlulateList_C::ButtonClose' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, ButtonUse) == 0x0002D8, "Member 'UUMG_LiquidMemoryAccumlulateList_C::ButtonUse' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, TransParentButton) == 0x0002E0, "Member 'UUMG_LiquidMemoryAccumlulateList_C::TransParentButton' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UIBlocker) == 0x0002E8, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UMG_LiquidMemoryAccumlulateItem) == 0x0002F0, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UMG_LiquidMemoryAccumlulateItem' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UMG_LiquidMemoryAccumlulateItem_1) == 0x0002F8, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UMG_LiquidMemoryAccumlulateItem_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UMG_LiquidMemoryAccumlulateItem_2) == 0x000300, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UMG_LiquidMemoryAccumlulateItem_2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UMG_LiquidMemoryAccumlulateItem_3) == 0x000308, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UMG_LiquidMemoryAccumlulateItem_3' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UMG_LiquidMemoryAccumlulateItem_436) == 0x000310, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UMG_LiquidMemoryAccumlulateItem_436' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UseButtonLabel) == 0x000318, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UseButtonLabel' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, VB_Items) == 0x000320, "Member 'UUMG_LiquidMemoryAccumlulateList_C::VB_Items' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, SelectLiquidMemoryId) == 0x000328, "Member 'UUMG_LiquidMemoryAccumlulateList_C::SelectLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, TokenListItems) == 0x000330, "Member 'UUMG_LiquidMemoryAccumlulateList_C::TokenListItems' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, UseTokenMap) == 0x000340, "Member 'UUMG_LiquidMemoryAccumlulateList_C::UseTokenMap' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, OnAccumulateCompleted) == 0x000390, "Member 'UUMG_LiquidMemoryAccumlulateList_C::OnAccumulateCompleted' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, TotalUseNum) == 0x0003A0, "Member 'UUMG_LiquidMemoryAccumlulateList_C::TotalUseNum' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, LimitUseNum) == 0x0003A4, "Member 'UUMG_LiquidMemoryAccumlulateList_C::LimitUseNum' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryAccumlulateList_C, IsLimitOver) == 0x0003A8, "Member 'UUMG_LiquidMemoryAccumlulateList_C::IsLimitOver' has a wrong offset!");

}

