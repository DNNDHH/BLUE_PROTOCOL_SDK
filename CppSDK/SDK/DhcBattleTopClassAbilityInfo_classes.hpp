#pragma once

 

// Package: DhcBattleTopClassAbilityInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C
// 0x0080 (0x02F8 - 0x0278)
class UDhcBattleTopClassAbilityInfo_C final : public UUserWidget
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
	TArray<int32>                                 ClassAbilitySkillIds;                              // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClassAbilityIconClicked__DelegateSignature(int32 InSkillSlotId, int32 InSkillId);
	void ExecuteUbergraph_DhcBattleTopClassAbilityInfo(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Setup(TArray<struct FSBDhcBattlePlayerEquipArtsInfo>& InEquipArtsInfo, ESBClassType InClassType, int32 InClassLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTopClassAbilityInfo_C">();
	}
	static class UDhcBattleTopClassAbilityInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTopClassAbilityInfo_C>();
	}
};
static_assert(alignof(UDhcBattleTopClassAbilityInfo_C) == 0x000008, "Wrong alignment on UDhcBattleTopClassAbilityInfo_C");
static_assert(sizeof(UDhcBattleTopClassAbilityInfo_C) == 0x0002F8, "Wrong size on UDhcBattleTopClassAbilityInfo_C");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, UberGraphFrame) == 0x000278, "Member 'UDhcBattleTopClassAbilityInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, Bg01) == 0x000280, "Member 'UDhcBattleTopClassAbilityInfo_C::Bg01' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, ClassCommonAbilityIcon1) == 0x000288, "Member 'UDhcBattleTopClassAbilityInfo_C::ClassCommonAbilityIcon1' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, ClassCommonAbilityIcon2) == 0x000290, "Member 'UDhcBattleTopClassAbilityInfo_C::ClassCommonAbilityIcon2' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, ClassUniqueAbilityIcon1) == 0x000298, "Member 'UDhcBattleTopClassAbilityInfo_C::ClassUniqueAbilityIcon1' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, ClassUniqueAbilityIcon2) == 0x0002A0, "Member 'UDhcBattleTopClassAbilityInfo_C::ClassUniqueAbilityIcon2' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, HBoxForClassCommonAbilityIcon) == 0x0002A8, "Member 'UDhcBattleTopClassAbilityInfo_C::HBoxForClassCommonAbilityIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, HBoxForClassUniqueAbilityIcon) == 0x0002B0, "Member 'UDhcBattleTopClassAbilityInfo_C::HBoxForClassUniqueAbilityIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, HLine_ClassCommonbilityInfo) == 0x0002B8, "Member 'UDhcBattleTopClassAbilityInfo_C::HLine_ClassCommonbilityInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, HLine_ClassUniqueAbilityInfo) == 0x0002C0, "Member 'UDhcBattleTopClassAbilityInfo_C::HLine_ClassUniqueAbilityInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, ClassAbilityIconBtnArray) == 0x0002C8, "Member 'UDhcBattleTopClassAbilityInfo_C::ClassAbilityIconBtnArray' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, OnClassAbilityIconClicked) == 0x0002D8, "Member 'UDhcBattleTopClassAbilityInfo_C::OnClassAbilityIconClicked' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopClassAbilityInfo_C, ClassAbilitySkillIds) == 0x0002E8, "Member 'UDhcBattleTopClassAbilityInfo_C::ClassAbilitySkillIds' has a wrong offset!");

}

