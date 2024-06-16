#pragma once

 

// Package: BattleCordeList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCordeList.BattleCordeList_C
// 0x00A8 (0x0320 - 0x0278)
class UBattleCordeList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBattleCordeListItem_C*                 CurrEquippedCordeInfoItem;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DeleteBtn;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForListItemDeleteOrRenameBtn;                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForListItemReplaceUpDownBtn;                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            RenameBtn;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ReplaceDownBtn;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ReplaceUpBtn;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollCordeList;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCordeListItemPresssed;                           // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectedCordeId;                                   // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefaultEquippedCordeId;                            // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeListItem_C*                 SelectedCordeListItem;                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCordeReplaceBtnPressed;                          // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCordeDeleteBtnPressed;                           // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCordeRenameBtnPressed;                           // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCordeDataLoaded;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCordeListItemPresssed__DelegateSignature(class UBattleCordeListItem_C* InListItem);
	void OnCordeReplaceBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSrcCordeListItem, class UBattleCordeListItem_C* InDstCordListItem);
	void OnCordeDeleteBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem);
	void OnCordeRenameBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem);
	void OnCordeDataLoaded__DelegateSignature(bool InIsDataLoadSuccessed);
	void ExecuteUbergraph_BattleCordeList(int32 EntryPoint);
	void BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UBattleCordeListItem_C* InSelf);
	void OnCordeListItemClickedEvent(class UBattleCordeListItem_C* InSelf);
	void Destruct();
	void OnLoadPresetEquipmentList(const int32 RetCode);
	void Construct();
	void Init();
	void CreateCordeList();
	void AddCordeListItem(const struct FSBPlayerPresetEquipList& InCordeData);
	void SetupCurrEquippedBattleSetInfo();
	void GetCurrEquippedBattleCordeName(class FString* OutCordeName);
	void GetCurrEquippedCordeData(struct FSBPlayerPresetEquipList* OutCordeData);
	void UpdateCordeListSelectedItem(class UBattleCordeListItem_C* InSelectedCordeListItem);
	void GetDefaultEquippedCordeId(int32* OutCordeId);
	void GetCordeListItemByCordeId(int32 InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem);
	void ResetSelectedCordeToDefault();
	void SetCordeListItemReplaceUpBtnEnable(bool InIsEnabled);
	void SetCordeListItemReplaceDownBtnEnable(bool InIsEnabled);
	void SetCordeListItemReplaceBtnsEnable(bool InIsEnabled);
	void SetCordeListItemEditBtnsEnable(bool InIsEnabled);
	void GetCordeListItemOneUpByCordeId(int32 InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem);
	void GetCordeListItemOneDownByCordeId(int32 InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem);
	void RequestLoadCordeData(bool* OutRequestSuccessed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCordeList_C">();
	}
	static class UBattleCordeList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleCordeList_C>();
	}
};
static_assert(alignof(UBattleCordeList_C) == 0x000008, "Wrong alignment on UBattleCordeList_C");
static_assert(sizeof(UBattleCordeList_C) == 0x000320, "Wrong size on UBattleCordeList_C");
static_assert(offsetof(UBattleCordeList_C, UberGraphFrame) == 0x000278, "Member 'UBattleCordeList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, CurrEquippedCordeInfoItem) == 0x000280, "Member 'UBattleCordeList_C::CurrEquippedCordeInfoItem' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, DeleteBtn) == 0x000288, "Member 'UBattleCordeList_C::DeleteBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, HBoxForListItemDeleteOrRenameBtn) == 0x000290, "Member 'UBattleCordeList_C::HBoxForListItemDeleteOrRenameBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, HBoxForListItemReplaceUpDownBtn) == 0x000298, "Member 'UBattleCordeList_C::HBoxForListItemReplaceUpDownBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, RenameBtn) == 0x0002A0, "Member 'UBattleCordeList_C::RenameBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, ReplaceDownBtn) == 0x0002A8, "Member 'UBattleCordeList_C::ReplaceDownBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, ReplaceUpBtn) == 0x0002B0, "Member 'UBattleCordeList_C::ReplaceUpBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, ScrollCordeList) == 0x0002B8, "Member 'UBattleCordeList_C::ScrollCordeList' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, OnCordeListItemPresssed) == 0x0002C0, "Member 'UBattleCordeList_C::OnCordeListItemPresssed' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, SelectedCordeId) == 0x0002D0, "Member 'UBattleCordeList_C::SelectedCordeId' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, DefaultEquippedCordeId) == 0x0002D4, "Member 'UBattleCordeList_C::DefaultEquippedCordeId' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, SelectedCordeListItem) == 0x0002D8, "Member 'UBattleCordeList_C::SelectedCordeListItem' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, OnCordeReplaceBtnPressed) == 0x0002E0, "Member 'UBattleCordeList_C::OnCordeReplaceBtnPressed' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, OnCordeDeleteBtnPressed) == 0x0002F0, "Member 'UBattleCordeList_C::OnCordeDeleteBtnPressed' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, OnCordeRenameBtnPressed) == 0x000300, "Member 'UBattleCordeList_C::OnCordeRenameBtnPressed' has a wrong offset!");
static_assert(offsetof(UBattleCordeList_C, OnCordeDataLoaded) == 0x000310, "Member 'UBattleCordeList_C::OnCordeDataLoaded' has a wrong offset!");

}

