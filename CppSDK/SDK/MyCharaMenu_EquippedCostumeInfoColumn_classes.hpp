#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfoColumn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_MyCharaMenu_EquippedCostumeType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C
// 0x0020 (0x0298 - 0x0278)
class UMyCharaMenu_EquippedCostumeInfoColumn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBoxForEquippedCostumeInfos;                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UMyCharaMenu_EquippedCostumeInfo_C*> EquippedCostumeInfos;                              // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateEquippedCostumeInfos(const struct FCharaEquipInfo& InCharaEquipInfo, ESBCharacterGender InCharacterGender);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EquippedCostumeInfoColumn_C">();
	}
	static class UMyCharaMenu_EquippedCostumeInfoColumn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EquippedCostumeInfoColumn_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EquippedCostumeInfoColumn_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EquippedCostumeInfoColumn_C");
static_assert(sizeof(UMyCharaMenu_EquippedCostumeInfoColumn_C) == 0x000298, "Wrong size on UMyCharaMenu_EquippedCostumeInfoColumn_C");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfoColumn_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_EquippedCostumeInfoColumn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfoColumn_C, VerticalBoxForEquippedCostumeInfos) == 0x000280, "Member 'UMyCharaMenu_EquippedCostumeInfoColumn_C::VerticalBoxForEquippedCostumeInfos' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfoColumn_C, EquippedCostumeInfos) == 0x000288, "Member 'UMyCharaMenu_EquippedCostumeInfoColumn_C::EquippedCostumeInfos' has a wrong offset!");

}

