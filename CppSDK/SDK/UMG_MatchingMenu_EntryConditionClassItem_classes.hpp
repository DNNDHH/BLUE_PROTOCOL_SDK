#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionClassItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C
// 0x0020 (0x0298 - 0x0278)
class UUMG_MatchingMenu_EntryConditionClassItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClassIcon_C*                           Icon_Class;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ClassName;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_EntryConditionClassItem_C">();
	}
	static class UUMG_MatchingMenu_EntryConditionClassItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_EntryConditionClassItem_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_EntryConditionClassItem_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_EntryConditionClassItem_C");
static_assert(sizeof(UUMG_MatchingMenu_EntryConditionClassItem_C) == 0x000298, "Wrong size on UUMG_MatchingMenu_EntryConditionClassItem_C");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClassItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_EntryConditionClassItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClassItem_C, Icon_Class) == 0x000280, "Member 'UUMG_MatchingMenu_EntryConditionClassItem_C::Icon_Class' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClassItem_C, Txt_ClassName) == 0x000288, "Member 'UUMG_MatchingMenu_EntryConditionClassItem_C::Txt_ClassName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClassItem_C, ClassType) == 0x000290, "Member 'UUMG_MatchingMenu_EntryConditionClassItem_C::ClassType' has a wrong offset!");

}

