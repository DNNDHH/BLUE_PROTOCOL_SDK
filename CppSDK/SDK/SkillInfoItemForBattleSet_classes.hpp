#pragma once

 

// Package: SkillInfoItemForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C
// 0x0118 (0x0390 - 0x0278)
class USkillInfoItemForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyChara_AbilityIcon_C*                 ClassAbilityIcon;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconEquipment;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForIcon;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_TacticalSkillIcon_C*       TacticalSkillIcon;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSkillInfoItemPressed;                            // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SkillId;                                           // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  SkillClassType;                                    // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsClassAbility;                                   // 0x02C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8488[0x2];                                     // 0x02C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillLevel;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsItemSelected;                                   // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8489[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESkillActionPosition>                  AllTacticalSkillActionPositions;                   // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ESBSkillIconBgType, class UTexture2D*>   IconBgImageList;                                   // 0x02E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ESBSkillElementIconType, class UTexture2D*> ElementIconList;                                   // 0x0330(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         EquipSkillId;                                      // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_848A[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CachedToolTipWidget;                               // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSkillInfoItemPressed__DelegateSignature(class USkillInfoItemForBattleSet_C* InInfoItem);
	void ExecuteUbergraph_SkillInfoItemForBattleSet(int32 EntryPoint);
	void BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetSKill(int32 InSkillId, ESBClassType InSkillClassType, bool InIsClassAbility);
	void SetSkillIconEquippedMarkVisibility(bool InIsVisible);
	void SetSkillName(const class FString& InSkillName, int32 InSkillLevel);
	void CreateTooltip(bool InNotUseTooltip, int32 InSkillId, int32 InSkillLevel);
	void SetInfoItemSelected(bool InIsSelected);
	void GetSkillID(int32* OutSkillId);
	void GetSkillClassType(ESBClassType* OutSkillClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoItemForBattleSet_C">();
	}
	static class USkillInfoItemForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoItemForBattleSet_C>();
	}
};
static_assert(alignof(USkillInfoItemForBattleSet_C) == 0x000008, "Wrong alignment on USkillInfoItemForBattleSet_C");
static_assert(sizeof(USkillInfoItemForBattleSet_C) == 0x000390, "Wrong size on USkillInfoItemForBattleSet_C");
static_assert(offsetof(USkillInfoItemForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoItemForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, Btn) == 0x000280, "Member 'USkillInfoItemForBattleSet_C::Btn' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, ClassAbilityIcon) == 0x000288, "Member 'USkillInfoItemForBattleSet_C::ClassAbilityIcon' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, IconEquipment) == 0x000290, "Member 'USkillInfoItemForBattleSet_C::IconEquipment' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, SwitcherForIcon) == 0x000298, "Member 'USkillInfoItemForBattleSet_C::SwitcherForIcon' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, TacticalSkillIcon) == 0x0002A0, "Member 'USkillInfoItemForBattleSet_C::TacticalSkillIcon' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, TxtName) == 0x0002A8, "Member 'USkillInfoItemForBattleSet_C::TxtName' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, OnSkillInfoItemPressed) == 0x0002B0, "Member 'USkillInfoItemForBattleSet_C::OnSkillInfoItemPressed' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, SkillId) == 0x0002C0, "Member 'USkillInfoItemForBattleSet_C::SkillId' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, SkillClassType) == 0x0002C4, "Member 'USkillInfoItemForBattleSet_C::SkillClassType' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, bIsClassAbility) == 0x0002C5, "Member 'USkillInfoItemForBattleSet_C::bIsClassAbility' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, SkillLevel) == 0x0002C8, "Member 'USkillInfoItemForBattleSet_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, bIsItemSelected) == 0x0002CC, "Member 'USkillInfoItemForBattleSet_C::bIsItemSelected' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, AllTacticalSkillActionPositions) == 0x0002D0, "Member 'USkillInfoItemForBattleSet_C::AllTacticalSkillActionPositions' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, IconBgImageList) == 0x0002E0, "Member 'USkillInfoItemForBattleSet_C::IconBgImageList' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, ElementIconList) == 0x000330, "Member 'USkillInfoItemForBattleSet_C::ElementIconList' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, EquipSkillId) == 0x000380, "Member 'USkillInfoItemForBattleSet_C::EquipSkillId' has a wrong offset!");
static_assert(offsetof(USkillInfoItemForBattleSet_C, CachedToolTipWidget) == 0x000388, "Member 'USkillInfoItemForBattleSet_C::CachedToolTipWidget' has a wrong offset!");

}

