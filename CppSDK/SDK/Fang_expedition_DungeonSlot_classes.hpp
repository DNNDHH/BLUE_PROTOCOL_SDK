#pragma once

 

// Package: Fang_expedition_DungeonSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C
// 0x0220 (0x0498 - 0x0278)
class UFang_expedition_DungeonSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButtonFullScreen_C*                  DungeonListOpenButton;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoItemImage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Standby;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        View_Execute;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ViewTypeSwitcher;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x02A8(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSelect_Expedition;                               // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelect_Standby;                                  // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_Fang_expedition_DungeonSlot_C;               // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DC9[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0378(0x0120)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnSelect_Expedition__DelegateSignature(int32 Param_Index, const struct FSBFang_expeditionPlayData& Param_PlayData);
	void OnSelect_Standby__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_Fang_expedition_DungeonSlot(int32 EntryPoint);
	void BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void CB_ExpeditionSlotSelect(int32 SlotIndex);
	void Construct();
	void SetAreaData(const struct FSBFang_expeditionAreaData& AreaData_, int32 SlotIndex);
	void Initialize();
	void Finish();
	void SetSlotType(int32 Type);
	void SetPlayData(const struct FSBFang_expeditionPlayData& PlayData_, int32 SlotIndex);
	void SetBtn_Selected(bool BtnSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DungeonSlot_C">();
	}
	static class UFang_expedition_DungeonSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DungeonSlot_C>();
	}
};
static_assert(alignof(UFang_expedition_DungeonSlot_C) == 0x000008, "Wrong alignment on UFang_expedition_DungeonSlot_C");
static_assert(sizeof(UFang_expedition_DungeonSlot_C) == 0x000498, "Wrong size on UFang_expedition_DungeonSlot_C");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DungeonSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, DungeonListOpenButton) == 0x000280, "Member 'UFang_expedition_DungeonSlot_C::DungeonListOpenButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, NoItemImage) == 0x000288, "Member 'UFang_expedition_DungeonSlot_C::NoItemImage' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, Text_Standby) == 0x000290, "Member 'UFang_expedition_DungeonSlot_C::Text_Standby' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, View_Execute) == 0x000298, "Member 'UFang_expedition_DungeonSlot_C::View_Execute' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, ViewTypeSwitcher) == 0x0002A0, "Member 'UFang_expedition_DungeonSlot_C::ViewTypeSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, AreaData) == 0x0002A8, "Member 'UFang_expedition_DungeonSlot_C::AreaData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, OnSelect_Expedition) == 0x000350, "Member 'UFang_expedition_DungeonSlot_C::OnSelect_Expedition' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, OnSelect_Standby) == 0x000360, "Member 'UFang_expedition_DungeonSlot_C::OnSelect_Standby' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, Index_Fang_expedition_DungeonSlot_C) == 0x000370, "Member 'UFang_expedition_DungeonSlot_C::Index_Fang_expedition_DungeonSlot_C' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonSlot_C, PlayData) == 0x000378, "Member 'UFang_expedition_DungeonSlot_C::PlayData' has a wrong offset!");

}

