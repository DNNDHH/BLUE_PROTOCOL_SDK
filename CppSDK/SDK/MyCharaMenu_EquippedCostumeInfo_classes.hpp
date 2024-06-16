#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_MyCharaMenu_EquippedCostumeType_structs.hpp"
#include "UMG_classes.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C
// 0x0070 (0x02E8 - 0x0278)
class UMyCharaMenu_EquippedCostumeInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMyCharaMenu_CommonCostumeTypeHeading_C* CostumeHeading;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxForCostumeInfo;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         HeadingTitleTextId;                                // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_894E[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_MyCharaMenu_EquippedCostumeType, int32> EquippedCostumeInfoListItemMaxNumMap;              // 0x0298(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateEquippedCostumeInfo(E_MyCharaMenu_EquippedCostumeType InEquippedCostumeType, const struct FCharaEquipInfo& InCharaEquipInfo, TArray<ECharaPartsLocation>& InGrayOutCharaPartsLocations);
	void GetRingEquippedHand(ESBCharaEquipType InRingEquipType, bool* OutIsLeftFinger);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EquippedCostumeInfo_C">();
	}
	static class UMyCharaMenu_EquippedCostumeInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EquippedCostumeInfo_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EquippedCostumeInfo_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EquippedCostumeInfo_C");
static_assert(sizeof(UMyCharaMenu_EquippedCostumeInfo_C) == 0x0002E8, "Wrong size on UMyCharaMenu_EquippedCostumeInfo_C");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfo_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_EquippedCostumeInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfo_C, CostumeHeading) == 0x000280, "Member 'UMyCharaMenu_EquippedCostumeInfo_C::CostumeHeading' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfo_C, VerticalBoxForCostumeInfo) == 0x000288, "Member 'UMyCharaMenu_EquippedCostumeInfo_C::VerticalBoxForCostumeInfo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfo_C, HeadingTitleTextId) == 0x000290, "Member 'UMyCharaMenu_EquippedCostumeInfo_C::HeadingTitleTextId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfo_C, EquippedCostumeInfoListItemMaxNumMap) == 0x000298, "Member 'UMyCharaMenu_EquippedCostumeInfo_C::EquippedCostumeInfoListItemMaxNumMap' has a wrong offset!");

}

