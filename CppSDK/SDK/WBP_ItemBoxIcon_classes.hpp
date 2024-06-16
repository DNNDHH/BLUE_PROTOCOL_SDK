#pragma once

 

// Package: WBP_ItemBoxIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemBoxIcon.WBP_ItemBoxIcon_C
// 0x0108 (0x0380 - 0x0278)
class UWBP_ItemBoxIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_408;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NumCanvas;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSelectNum;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x02A8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAppraisalFinish;                                 // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBItemBoxContentParam                 ItemBoxData;                                       // 0x0318(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBItemBoxResultItemData               ItemBoxResultData;                                 // 0x0338(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	EItemType                                     ItemType;                                          // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_773F[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSelected;                                         // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7740[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             RewardItemType;                                    // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7741[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SwapNum;                                           // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SwapMaxAcq;                                        // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SwapMinAcq;                                        // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnAppraisalFinish__DelegateSignature();
	void OnClick__DelegateSignature(class UWBP_ItemBoxIcon_C* Button);
	void ExecuteUbergraph_WBP_ItemBoxIcon(int32 EntryPoint);
	void BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetItem(int32 Param_Index, EItemType Type, bool IsUnidentified);
	void Set_Icon_Selected(bool Param_IsSelected);
	void IsSelected(bool* Param_bSelected);
	void Set_Select_Num(int32 NuM, bool Visible);
	void Set_Reward_Item(ESBRewardItemType Param_RewardItemType);
	void SetItemBox(const struct FSBItemBoxContentParam& SBItemBoxContentParam);
	void SetIItemBoxToolTip(struct FST_ToolTipInfo& InToolTipInfo);
	void SetItemBoxResult(const struct FSBItemBoxResultItemData& ItemBoxResultItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemBoxIcon_C">();
	}
	static class UWBP_ItemBoxIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemBoxIcon_C>();
	}
};
static_assert(alignof(UWBP_ItemBoxIcon_C) == 0x000008, "Wrong alignment on UWBP_ItemBoxIcon_C");
static_assert(sizeof(UWBP_ItemBoxIcon_C) == 0x000380, "Wrong size on UWBP_ItemBoxIcon_C");
static_assert(offsetof(UWBP_ItemBoxIcon_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ItemBoxIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, CommonIcon) == 0x000280, "Member 'UWBP_ItemBoxIcon_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, Image_408) == 0x000288, "Member 'UWBP_ItemBoxIcon_C::Image_408' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, NumCanvas) == 0x000290, "Member 'UWBP_ItemBoxIcon_C::NumCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, SBButton) == 0x000298, "Member 'UWBP_ItemBoxIcon_C::SBButton' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, TextSelectNum) == 0x0002A0, "Member 'UWBP_ItemBoxIcon_C::TextSelectNum' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, InventoryItemData) == 0x0002A8, "Member 'UWBP_ItemBoxIcon_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, OnAppraisalFinish) == 0x000308, "Member 'UWBP_ItemBoxIcon_C::OnAppraisalFinish' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, ItemBoxData) == 0x000318, "Member 'UWBP_ItemBoxIcon_C::ItemBoxData' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, ItemBoxResultData) == 0x000338, "Member 'UWBP_ItemBoxIcon_C::ItemBoxResultData' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, ItemType) == 0x000350, "Member 'UWBP_ItemBoxIcon_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, OnClick) == 0x000358, "Member 'UWBP_ItemBoxIcon_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, bSelected) == 0x000368, "Member 'UWBP_ItemBoxIcon_C::bSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, ItemId) == 0x00036C, "Member 'UWBP_ItemBoxIcon_C::ItemId' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, RewardItemType) == 0x000370, "Member 'UWBP_ItemBoxIcon_C::RewardItemType' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, SwapNum) == 0x000374, "Member 'UWBP_ItemBoxIcon_C::SwapNum' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, SwapMaxAcq) == 0x000378, "Member 'UWBP_ItemBoxIcon_C::SwapMaxAcq' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxIcon_C, SwapMinAcq) == 0x00037C, "Member 'UWBP_ItemBoxIcon_C::SwapMinAcq' has a wrong offset!");

}

