#pragma once

 

// Package: DhcBattleTopClassTypeList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C
// 0x0040 (0x02B8 - 0x0278)
class UDhcBattleTopClassTypeList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ListScroll;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<ESBClassType>                          PlayerClassTypeList;                               // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBClassType                                  PlayerCurrClassType;                               // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_633B[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       CurrSelectedListItem;                              // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClassTypeListItemSelected;                       // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClassTypeListItemSelected__DelegateSignature(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty);
	void ExecuteUbergraph_DhcBattleTopClassTypeList(int32 EntryPoint);
	void Destruct();
	void OnListItemClicked(class UDhcBattleTopClassTypeListItem_C* InSelf);
	void PreConstruct(bool IsDesignTime);
	void CreateList();
	void SetPlayerCurrClassType(ESBClassType InClassType);
	void SetupList(TArray<struct FSBDhcBattleHighScoreInfo>& InScoreInfos);
	void UpdateListSelectedItem(class UDhcBattleTopClassTypeListItem_C* InListItem);
	void SetSelectedListItemTop();
	void GetCurrSelectedListItem(class UDhcBattleTopClassTypeListItem_C** OutListItem);
	void GetListItemByClassType(ESBClassType InClassType, class UDhcBattleTopClassTypeListItem_C** OutListItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTopClassTypeList_C">();
	}
	static class UDhcBattleTopClassTypeList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTopClassTypeList_C>();
	}
};
static_assert(alignof(UDhcBattleTopClassTypeList_C) == 0x000008, "Wrong alignment on UDhcBattleTopClassTypeList_C");
static_assert(sizeof(UDhcBattleTopClassTypeList_C) == 0x0002B8, "Wrong size on UDhcBattleTopClassTypeList_C");
static_assert(offsetof(UDhcBattleTopClassTypeList_C, UberGraphFrame) == 0x000278, "Member 'UDhcBattleTopClassTypeList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeList_C, ListScroll) == 0x000280, "Member 'UDhcBattleTopClassTypeList_C::ListScroll' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeList_C, PlayerClassTypeList) == 0x000288, "Member 'UDhcBattleTopClassTypeList_C::PlayerClassTypeList' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeList_C, PlayerCurrClassType) == 0x000298, "Member 'UDhcBattleTopClassTypeList_C::PlayerCurrClassType' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeList_C, CurrSelectedListItem) == 0x0002A0, "Member 'UDhcBattleTopClassTypeList_C::CurrSelectedListItem' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeList_C, OnClassTypeListItemSelected) == 0x0002A8, "Member 'UDhcBattleTopClassTypeList_C::OnClassTypeListItemSelected' has a wrong offset!");

}

