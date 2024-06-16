#pragma once

 

// Package: MyCharaMenu_DetailedStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C
// 0x0048 (0x02C0 - 0x0278)
class UMyCharaMenu_DetailedStatus_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DurabilityVBox;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_709F[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBAttribute>                          AttributeOrderList;                                // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             CloseEvent;                                        // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CloseEvent__DelegateSignature();
	void ExecuteUbergraph_MyCharaMenu_DetailedStatus(int32 EntryPoint);
	void BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void PlayInAnim();
	void PlayOutAnim();
	void SetupStatus();
	void ImmediateClose();
	void CreateAttributeDurabilityList();
	void GetAttributeDurabilityListItemObj(ESBAttribute InAttribute, class UMyCharaMenu_AttributeDurabilityListItem_C** OutObj);
	void SetupStatusPresetEquip(TArray<struct FSBPlayerPresetEquipItem>& InPresetEquipItemList);
	void SetupStatusParam(TArray<int32>& InValueList);
	void PlayInAnimBase(bool InDoStatusUpdate);
	void PlayInAnimPresetEquip(TArray<struct FSBPlayerPresetEquipItem>& InPresetEquipItemList);
	void PlayInAnimForDhcBattleTopMenu(TArray<struct FSBDhcBattleAttributeResistanceInfo>& InDhcBattleScoreAttrResistInfos);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_DetailedStatus_C">();
	}
	static class UMyCharaMenu_DetailedStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_DetailedStatus_C>();
	}
};
static_assert(alignof(UMyCharaMenu_DetailedStatus_C) == 0x000008, "Wrong alignment on UMyCharaMenu_DetailedStatus_C");
static_assert(sizeof(UMyCharaMenu_DetailedStatus_C) == 0x0002C0, "Wrong size on UMyCharaMenu_DetailedStatus_C");
static_assert(offsetof(UMyCharaMenu_DetailedStatus_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_DetailedStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_DetailedStatus_C, AnimInOut) == 0x000280, "Member 'UMyCharaMenu_DetailedStatus_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_DetailedStatus_C, CmnClose02) == 0x000288, "Member 'UMyCharaMenu_DetailedStatus_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_DetailedStatus_C, DurabilityVBox) == 0x000290, "Member 'UMyCharaMenu_DetailedStatus_C::DurabilityVBox' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_DetailedStatus_C, bVisible) == 0x000298, "Member 'UMyCharaMenu_DetailedStatus_C::bVisible' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_DetailedStatus_C, AttributeOrderList) == 0x0002A0, "Member 'UMyCharaMenu_DetailedStatus_C::AttributeOrderList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_DetailedStatus_C, CloseEvent) == 0x0002B0, "Member 'UMyCharaMenu_DetailedStatus_C::CloseEvent' has a wrong offset!");

}

