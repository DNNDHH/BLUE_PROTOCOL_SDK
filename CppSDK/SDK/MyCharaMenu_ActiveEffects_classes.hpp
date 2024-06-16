#pragma once

 

// Package: MyCharaMenu_ActiveEffects

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C
// 0x0098 (0x0310 - 0x0278)
class UMyCharaMenu_ActiveEffects_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMyCharaMenu_EffectListItemHead_C*      Head_Liquid;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_EffectListItemHead_C*      Head_Other;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_EffectListItemHead_C*      HeadEffects;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_EffectListItemHead_C*      HeadPioneer;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Effect;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Liquid;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Other;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Pioneer;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<ESBCharaEquipType, class FString>        EquipUniqueIds;                                    // 0x02C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_MyCharaMenu_ActiveEffects(int32 EntryPoint);
	void Collect_PioneerAbility();
	void Collect_Other();
	void Collect_Liquid_Memory();
	void Generate_Lists();
	void Init_Head();
	void Construct();
	void Collect_Base_Effects();
	void Collect_Ability();
	void Collect_Imagine_Perks();
	void Collect_Weapon_Effects();
	void Collect_Passive_Effects();
	void Collect_Unique_Ids();
	void Add_Lists(class UVerticalBox* Target, bool IsShowTooltip, const class FString& Param_Name, int32 Value, const class FString& Param_ToolTipText, bool ValueVisible);
	void AddListsByFloatValue(class UVerticalBox* Target, const class FString& Param_Name, float Value, bool ValueVisible);
	void AddListsByDateTime(class UVerticalBox* Target, const class FString& Param_Name, const struct FDateTime& Value, bool bHideYear, bool ValueVisible);
	void GetFreeBuffText(ESBFreeBuffPointType Type, class FString* Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_ActiveEffects_C">();
	}
	static class UMyCharaMenu_ActiveEffects_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_ActiveEffects_C>();
	}
};
static_assert(alignof(UMyCharaMenu_ActiveEffects_C) == 0x000008, "Wrong alignment on UMyCharaMenu_ActiveEffects_C");
static_assert(sizeof(UMyCharaMenu_ActiveEffects_C) == 0x000310, "Wrong size on UMyCharaMenu_ActiveEffects_C");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_ActiveEffects_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, Head_Liquid) == 0x000280, "Member 'UMyCharaMenu_ActiveEffects_C::Head_Liquid' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, Head_Other) == 0x000288, "Member 'UMyCharaMenu_ActiveEffects_C::Head_Other' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, HeadEffects) == 0x000290, "Member 'UMyCharaMenu_ActiveEffects_C::HeadEffects' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, HeadPioneer) == 0x000298, "Member 'UMyCharaMenu_ActiveEffects_C::HeadPioneer' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, VB_Effect) == 0x0002A0, "Member 'UMyCharaMenu_ActiveEffects_C::VB_Effect' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, VB_Liquid) == 0x0002A8, "Member 'UMyCharaMenu_ActiveEffects_C::VB_Liquid' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, VB_Other) == 0x0002B0, "Member 'UMyCharaMenu_ActiveEffects_C::VB_Other' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, VB_Pioneer) == 0x0002B8, "Member 'UMyCharaMenu_ActiveEffects_C::VB_Pioneer' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ActiveEffects_C, EquipUniqueIds) == 0x0002C0, "Member 'UMyCharaMenu_ActiveEffects_C::EquipUniqueIds' has a wrong offset!");

}

