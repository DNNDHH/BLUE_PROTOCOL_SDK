#pragma once

 

// Package: DhcBattleTopClassTypeListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C
// 0x0150 (0x03C8 - 0x0278)
class UDhcBattleTopClassTypeListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn01;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassTypeTxt;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleTopCurrClassMark_C*           CurrClassMark;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         InfoHB;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MarkBlank;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ScoreTxt;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ScoreUnitTxt;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchCurrClassMark;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSelected;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsSelected;                                       // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D54[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              ScoreInfo;                                         // 0x02E8(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsScoreInfoEmpty;                                 // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCurrPlayerClassType;                            // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  ClassType;                                         // 0x03C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(class UDhcBattleTopClassTypeListItem_C* InSelf);
	void ExecuteUbergraph_DhcBattleTopClassTypeListItem(int32 EntryPoint);
	void BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Setup(const struct FSBDhcBattleHighScoreInfo& InScoreInfo);
	void SetupAsEmpty(ESBClassType InClassType);
	void SetIsCurrPlayerClassType(bool InIsCurrPlayerClassType);
	void SetSelected(bool InIsSelected);
	void SetTextAndClassTypeIconColor(bool InIsHovered);
	void GetScoreInfo(struct FSBDhcBattleHighScoreInfo* OutScoreInfo);
	void IsScoreInfoEmpty(bool* OutIsScoreInfoEmpty);
	void GetClassType(ESBClassType* OutClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTopClassTypeListItem_C">();
	}
	static class UDhcBattleTopClassTypeListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTopClassTypeListItem_C>();
	}
};
static_assert(alignof(UDhcBattleTopClassTypeListItem_C) == 0x000008, "Wrong alignment on UDhcBattleTopClassTypeListItem_C");
static_assert(sizeof(UDhcBattleTopClassTypeListItem_C) == 0x0003C8, "Wrong size on UDhcBattleTopClassTypeListItem_C");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, UberGraphFrame) == 0x000278, "Member 'UDhcBattleTopClassTypeListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, Btn01) == 0x000280, "Member 'UDhcBattleTopClassTypeListItem_C::Btn01' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, ClassIcon) == 0x000288, "Member 'UDhcBattleTopClassTypeListItem_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, ClassTypeTxt) == 0x000290, "Member 'UDhcBattleTopClassTypeListItem_C::ClassTypeTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, CurrClassMark) == 0x000298, "Member 'UDhcBattleTopClassTypeListItem_C::CurrClassMark' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, InfoHB) == 0x0002A0, "Member 'UDhcBattleTopClassTypeListItem_C::InfoHB' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, MarkBlank) == 0x0002A8, "Member 'UDhcBattleTopClassTypeListItem_C::MarkBlank' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, ScoreTxt) == 0x0002B0, "Member 'UDhcBattleTopClassTypeListItem_C::ScoreTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, ScoreUnitTxt) == 0x0002B8, "Member 'UDhcBattleTopClassTypeListItem_C::ScoreUnitTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, SwitchCurrClassMark) == 0x0002C0, "Member 'UDhcBattleTopClassTypeListItem_C::SwitchCurrClassMark' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, SwitchSelected) == 0x0002C8, "Member 'UDhcBattleTopClassTypeListItem_C::SwitchSelected' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, OnClicked) == 0x0002D0, "Member 'UDhcBattleTopClassTypeListItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, bIsSelected) == 0x0002E0, "Member 'UDhcBattleTopClassTypeListItem_C::bIsSelected' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, ScoreInfo) == 0x0002E8, "Member 'UDhcBattleTopClassTypeListItem_C::ScoreInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, bIsScoreInfoEmpty) == 0x0003C0, "Member 'UDhcBattleTopClassTypeListItem_C::bIsScoreInfoEmpty' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, bIsCurrPlayerClassType) == 0x0003C1, "Member 'UDhcBattleTopClassTypeListItem_C::bIsCurrPlayerClassType' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassTypeListItem_C, ClassType) == 0x0003C2, "Member 'UDhcBattleTopClassTypeListItem_C::ClassType' has a wrong offset!");

}

