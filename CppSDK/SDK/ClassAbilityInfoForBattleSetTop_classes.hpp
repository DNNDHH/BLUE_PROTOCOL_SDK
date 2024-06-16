#pragma once

 

// Package: ClassAbilityInfoForBattleSetTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ClassAbilityInfoForBattleSetTop.ClassAbilityInfoForBattleSetTop_C
// 0x0070 (0x02E8 - 0x0278)
class UClassAbilityInfoForBattleSetTop_C final : public UUserWidget
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
	class UImage*                                 HLine_ClassCommonbilityInfo;                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_ClassUniqueAbilityInfo;                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*> ClassAbilityIconBtnArray;                          // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClassAbilityIconClicked;                         // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClassAbilityIconClicked__DelegateSignature(int32 InSkillSlotId, int32 InSkillId);
	void ExecuteUbergraph_ClassAbilityInfoForBattleSetTop(int32 EntryPoint);
	void BndEvt__MyCharaMenu_ClassAbilityInfoForBattleSet_ClassCommonAbilityIcon2_K2Node_ComponentBoundEvent_4_OnIconClicked__DelegateSignature(int32 InClassAbilityId);
	void BndEvt__MyCharaMenu_ClassAbilityInfoForBattleSet_ClassCommonAbilityIcon1_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature(int32 InClassAbilityId);
	void BndEvt__MyCharaMenu_ClassAbilityInfoForBattleSet_ClassUniqueAbilityIcon2_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature(int32 InClassAbilityId);
	void BndEvt__MyCharaMenu_ClassAbilityInfoForBattleSet_ClassUniqueAbilityIcon1_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature(int32 InClassAbilityId);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void Const();
	void Dest();
	void SetupClassAbilityInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClassAbilityInfoForBattleSetTop_C">();
	}
	static class UClassAbilityInfoForBattleSetTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassAbilityInfoForBattleSetTop_C>();
	}
};
static_assert(alignof(UClassAbilityInfoForBattleSetTop_C) == 0x000008, "Wrong alignment on UClassAbilityInfoForBattleSetTop_C");
static_assert(sizeof(UClassAbilityInfoForBattleSetTop_C) == 0x0002E8, "Wrong size on UClassAbilityInfoForBattleSetTop_C");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, UberGraphFrame) == 0x000278, "Member 'UClassAbilityInfoForBattleSetTop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, Bg01) == 0x000280, "Member 'UClassAbilityInfoForBattleSetTop_C::Bg01' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, ClassCommonAbilityIcon1) == 0x000288, "Member 'UClassAbilityInfoForBattleSetTop_C::ClassCommonAbilityIcon1' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, ClassCommonAbilityIcon2) == 0x000290, "Member 'UClassAbilityInfoForBattleSetTop_C::ClassCommonAbilityIcon2' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, ClassUniqueAbilityIcon1) == 0x000298, "Member 'UClassAbilityInfoForBattleSetTop_C::ClassUniqueAbilityIcon1' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, ClassUniqueAbilityIcon2) == 0x0002A0, "Member 'UClassAbilityInfoForBattleSetTop_C::ClassUniqueAbilityIcon2' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, HBoxForClassCommonAbilityIcon) == 0x0002A8, "Member 'UClassAbilityInfoForBattleSetTop_C::HBoxForClassCommonAbilityIcon' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, HBoxForClassUniqueAbilityIcon) == 0x0002B0, "Member 'UClassAbilityInfoForBattleSetTop_C::HBoxForClassUniqueAbilityIcon' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, HLine_ClassCommonbilityInfo) == 0x0002B8, "Member 'UClassAbilityInfoForBattleSetTop_C::HLine_ClassCommonbilityInfo' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, HLine_ClassUniqueAbilityInfo) == 0x0002C0, "Member 'UClassAbilityInfoForBattleSetTop_C::HLine_ClassUniqueAbilityInfo' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, ClassAbilityIconBtnArray) == 0x0002C8, "Member 'UClassAbilityInfoForBattleSetTop_C::ClassAbilityIconBtnArray' has a wrong offset!");
static_assert(offsetof(UClassAbilityInfoForBattleSetTop_C, OnClassAbilityIconClicked) == 0x0002D8, "Member 'UClassAbilityInfoForBattleSetTop_C::OnClassAbilityIconClicked' has a wrong offset!");

}

