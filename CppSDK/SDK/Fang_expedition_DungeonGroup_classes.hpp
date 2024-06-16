#pragma once

 

// Package: Fang_expedition_DungeonGroup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C
// 0x00A0 (0x0318 - 0x0278)
class UFang_expedition_DungeonGroup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ListBase;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DungeonSlot_C*         Slot1Data;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DungeonStatus_C*       Slot1Gauge;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DungeonSlot_C*         Slot2Data;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DungeonStatus_C*       Slot2Gauge;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SlotSwitcher1;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SlotSwitcher2;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTicketButtonClick;                               // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressExpedition;                                 // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressStandby;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonIconToolTipContent_MultiLine_C*  InfoTooltip;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimationFinish;                                 // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTicketButtonClick__DelegateSignature(int32 Param_Index);
	void OnPressExpedition__DelegateSignature(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData);
	void OnPressStandby__DelegateSignature(int32 Param_Index);
	void OnAnimationFinish__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_DungeonGroup(int32 EntryPoint);
	void CB_SlotAnimationFinish();
	void CB_PressStandbyButton(int32 Param_Index);
	void CB_PressExpeditionButton(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData);
	void Destruct();
	void CB_TicketButtonClick(class UObject* Object);
	void SetPlayData(int32 SlotIndex, const struct FSBFang_expeditionPlayData& PlayData);
	void SetGauge(int32 Param_Index, int32 NowPoint, int32 MaxPoint);
	void Initialize();
	void Finish();
	void SetSlotType(int32 Param_Index, int32 SlotType);
	void SetBtn_Selected(int32 Param_Index);
	void PlaySlotAnimation(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DungeonGroup_C">();
	}
	static class UFang_expedition_DungeonGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DungeonGroup_C>();
	}
};
static_assert(alignof(UFang_expedition_DungeonGroup_C) == 0x000008, "Wrong alignment on UFang_expedition_DungeonGroup_C");
static_assert(sizeof(UFang_expedition_DungeonGroup_C) == 0x000318, "Wrong size on UFang_expedition_DungeonGroup_C");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DungeonGroup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, BG) == 0x000280, "Member 'UFang_expedition_DungeonGroup_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, HeaderIcon) == 0x000288, "Member 'UFang_expedition_DungeonGroup_C::HeaderIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, InfoIcon) == 0x000290, "Member 'UFang_expedition_DungeonGroup_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, ListBase) == 0x000298, "Member 'UFang_expedition_DungeonGroup_C::ListBase' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, Slot1Data) == 0x0002A0, "Member 'UFang_expedition_DungeonGroup_C::Slot1Data' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, Slot1Gauge) == 0x0002A8, "Member 'UFang_expedition_DungeonGroup_C::Slot1Gauge' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, Slot2Data) == 0x0002B0, "Member 'UFang_expedition_DungeonGroup_C::Slot2Data' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, Slot2Gauge) == 0x0002B8, "Member 'UFang_expedition_DungeonGroup_C::Slot2Gauge' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, SlotSwitcher1) == 0x0002C0, "Member 'UFang_expedition_DungeonGroup_C::SlotSwitcher1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, SlotSwitcher2) == 0x0002C8, "Member 'UFang_expedition_DungeonGroup_C::SlotSwitcher2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, OnTicketButtonClick) == 0x0002D0, "Member 'UFang_expedition_DungeonGroup_C::OnTicketButtonClick' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, OnPressExpedition) == 0x0002E0, "Member 'UFang_expedition_DungeonGroup_C::OnPressExpedition' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, OnPressStandby) == 0x0002F0, "Member 'UFang_expedition_DungeonGroup_C::OnPressStandby' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, InfoTooltip) == 0x000300, "Member 'UFang_expedition_DungeonGroup_C::InfoTooltip' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonGroup_C, OnAnimationFinish) == 0x000308, "Member 'UFang_expedition_DungeonGroup_C::OnAnimationFinish' has a wrong offset!");

}

