#pragma once

 

// Package: MyCharaMenu_CommonCostumeTypeHeading

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C
// 0x0020 (0x0298 - 0x0278)
class UMyCharaMenu_CommonCostumeTypeHeading_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    TxtHeadingTitle;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      HeadingTitleTextTable;                             // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         HeadingTitleTextId;                                // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetHeadingTitleTextTable(class USBTextTableAsset* InTextTable);
	void SetHeadingTitleTextId(int32 InTextID);
	void SetHeadingTitleText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_CommonCostumeTypeHeading_C">();
	}
	static class UMyCharaMenu_CommonCostumeTypeHeading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_CommonCostumeTypeHeading_C>();
	}
};
static_assert(alignof(UMyCharaMenu_CommonCostumeTypeHeading_C) == 0x000008, "Wrong alignment on UMyCharaMenu_CommonCostumeTypeHeading_C");
static_assert(sizeof(UMyCharaMenu_CommonCostumeTypeHeading_C) == 0x000298, "Wrong size on UMyCharaMenu_CommonCostumeTypeHeading_C");
static_assert(offsetof(UMyCharaMenu_CommonCostumeTypeHeading_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_CommonCostumeTypeHeading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CommonCostumeTypeHeading_C, TxtHeadingTitle) == 0x000280, "Member 'UMyCharaMenu_CommonCostumeTypeHeading_C::TxtHeadingTitle' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CommonCostumeTypeHeading_C, HeadingTitleTextTable) == 0x000288, "Member 'UMyCharaMenu_CommonCostumeTypeHeading_C::HeadingTitleTextTable' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CommonCostumeTypeHeading_C, HeadingTitleTextId) == 0x000290, "Member 'UMyCharaMenu_CommonCostumeTypeHeading_C::HeadingTitleTextId' has a wrong offset!");

}

