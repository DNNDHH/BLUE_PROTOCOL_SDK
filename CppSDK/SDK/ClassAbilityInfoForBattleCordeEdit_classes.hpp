#pragma once

 

// Package: ClassAbilityInfoForBattleCordeEdit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C
// 0x0070 (0x02E8 - 0x0278)
class UClassAbilityInfoForBattleCordeEdit_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg01;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* ClassCommonAbilityIcon1;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* ClassCommonAbilityIcon2;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* ClassUniqueAbilityIcon1;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* ClassUniqueAbilityIcon2;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForClassCommonAbilityIcon;                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForClassUniqueAbilityIcon;                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*> ClassAbilityIconBtnArray;                          // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClassAbilityIconClicked;                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 ClassAbilitySkillIds;                              // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClassAbilityIconClicked__DelegateSignature(int32 InSkillSlotId, int32 InSkillId);
	void ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit(int32 EntryPoint);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void Const();
	void Dest();
	void Setup(TArray<int32>& InClassAbilitySkillIds, bool InSetupByCurrEquip, ESBClassType InClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClassAbilityInfoForBattleCordeEdit_C">();
	}
	static class UClassAbilityInfoForBattleCordeEdit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassAbilityInfoForBattleCordeEdit_C>();
	}
};
static_assert(alignof(UClassAbilityInfoForBattleCordeEdit_C) == 0x000008, "Wrong alignment on UClassAbilityInfoForBattleCordeEdit_C");
static_assert(sizeof(UClassAbilityInfoForBattleCordeEdit_C) == 0x0002E8, "Wrong size on UClassAbilityInfoForBattleCordeEdit_C");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, UberGraphFrame) == 0x000278, "Member 'UClassAbilityInfoForBattleCordeEdit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, Bg01) == 0x000280, "Member 'UClassAbilityInfoForBattleCordeEdit_C::Bg01' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, ClassCommonAbilityIcon1) == 0x000288, "Member 'UClassAbilityInfoForBattleCordeEdit_C::ClassCommonAbilityIcon1' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, ClassCommonAbilityIcon2) == 0x000290, "Member 'UClassAbilityInfoForBattleCordeEdit_C::ClassCommonAbilityIcon2' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, ClassUniqueAbilityIcon1) == 0x000298, "Member 'UClassAbilityInfoForBattleCordeEdit_C::ClassUniqueAbilityIcon1' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, ClassUniqueAbilityIcon2) == 0x0002A0, "Member 'UClassAbilityInfoForBattleCordeEdit_C::ClassUniqueAbilityIcon2' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, HBoxForClassCommonAbilityIcon) == 0x0002A8, "Member 'UClassAbilityInfoForBattleCordeEdit_C::HBoxForClassCommonAbilityIcon' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, HBoxForClassUniqueAbilityIcon) == 0x0002B0, "Member 'UClassAbilityInfoForBattleCordeEdit_C::HBoxForClassUniqueAbilityIcon' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, ClassAbilityIconBtnArray) == 0x0002B8, "Member 'UClassAbilityInfoForBattleCordeEdit_C::ClassAbilityIconBtnArray' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, OnClassAbilityIconClicked) == 0x0002C8, "Member 'UClassAbilityInfoForBattleCordeEdit_C::OnClassAbilityIconClicked' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleCordeEdit_C, ClassAbilitySkillIds) == 0x0002D8, "Member 'UClassAbilityInfoForBattleCordeEdit_C::ClassAbilitySkillIds' has a wrong offset!");

}

