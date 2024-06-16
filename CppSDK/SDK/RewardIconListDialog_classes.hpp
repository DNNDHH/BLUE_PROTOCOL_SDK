#pragma once

 

// Package: RewardIconListDialog

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RewardIconListDialog.RewardIconListDialog_C
// 0x00A0 (0x0318 - 0x0278)
class URewardIconListDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BgBlur;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         BonusIconList;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_BackClose;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            ButtonOk;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardIconItem_C*                      IconListItem;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardIconItem_C*                      IconListItem_1;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_51;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Letter;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtMessage;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClose;                                           // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90CE[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBGashaBonus>                  BonusList;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SwitchType;                                        // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_RewardIconListDialog(int32 EntryPoint);
	void BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Close_Event();
	void Destruct();
	void Construct();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void SetMessage(const class FText& Message, bool IsIconVisible);
	void SetMasterRewardList(TArray<struct FSBMasterReward>& MasterRewards);
	void SetMasterRewardIDList(TArray<class FName>& IDList);
	void SetBgBlurVisible(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardIconListDialog_C">();
	}
	static class URewardIconListDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardIconListDialog_C>();
	}
};
static_assert(alignof(URewardIconListDialog_C) == 0x000008, "Wrong alignment on URewardIconListDialog_C");
static_assert(sizeof(URewardIconListDialog_C) == 0x000318, "Wrong size on URewardIconListDialog_C");
static_assert(offsetof(URewardIconListDialog_C, UberGraphFrame) == 0x000278, "Member 'URewardIconListDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, AnimOut) == 0x000280, "Member 'URewardIconListDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, AnimIn) == 0x000288, "Member 'URewardIconListDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, BgBlur) == 0x000290, "Member 'URewardIconListDialog_C::BgBlur' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, BonusIconList) == 0x000298, "Member 'URewardIconListDialog_C::BonusIconList' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, Btn_BackClose) == 0x0002A0, "Member 'URewardIconListDialog_C::Btn_BackClose' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, ButtonOk) == 0x0002A8, "Member 'URewardIconListDialog_C::ButtonOk' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, Icon) == 0x0002B0, "Member 'URewardIconListDialog_C::Icon' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, IconListItem) == 0x0002B8, "Member 'URewardIconListDialog_C::IconListItem' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, IconListItem_1) == 0x0002C0, "Member 'URewardIconListDialog_C::IconListItem_1' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, Image_51) == 0x0002C8, "Member 'URewardIconListDialog_C::Image_51' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, ScaleBox_Letter) == 0x0002D0, "Member 'URewardIconListDialog_C::ScaleBox_Letter' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, TxtMessage) == 0x0002D8, "Member 'URewardIconListDialog_C::TxtMessage' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, UIBlocker) == 0x0002E0, "Member 'URewardIconListDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, OnClose) == 0x0002E8, "Member 'URewardIconListDialog_C::OnClose' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, IsClose) == 0x0002F8, "Member 'URewardIconListDialog_C::IsClose' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, BonusList) == 0x000300, "Member 'URewardIconListDialog_C::BonusList' has a wrong offset!");
static_assert(offsetof(URewardIconListDialog_C, SwitchType) == 0x000310, "Member 'URewardIconListDialog_C::SwitchType' has a wrong offset!");

}

