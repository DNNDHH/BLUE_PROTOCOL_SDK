#pragma once

 

// Package: LibraryMenu_AchievementList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_AchievementList.LibraryMenu_AchievementList_C
// 0x0038 (0x02E0 - 0x02A8)
class ULibraryMenu_AchievementList_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimItemIn;                                        // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           ItemList;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementListItem_C*     LibraryMenu_AchievementListItem;                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementListItem_C*     LibraryMenu_AchievementListItem_120;               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CategoryChanged;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CategoryChanged__DelegateSignature(int32 ItemIndex);
	void ExecuteUbergraph_LibraryMenu_AchievementList(int32 EntryPoint);
	void Construct();
	void SetItemListSelected(int32 ListIndex, bool bSelected);
	void CheckItemListNewIcon(bool* Result);
	void SetAchievementTitle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_AchievementList_C">();
	}
	static class ULibraryMenu_AchievementList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_AchievementList_C>();
	}
};
static_assert(alignof(ULibraryMenu_AchievementList_C) == 0x000008, "Wrong alignment on ULibraryMenu_AchievementList_C");
static_assert(sizeof(ULibraryMenu_AchievementList_C) == 0x0002E0, "Wrong size on ULibraryMenu_AchievementList_C");
static_assert(offsetof(ULibraryMenu_AchievementList_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_AchievementList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementList_C, AnimItemIn) == 0x0002B0, "Member 'ULibraryMenu_AchievementList_C::AnimItemIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementList_C, ItemList) == 0x0002B8, "Member 'ULibraryMenu_AchievementList_C::ItemList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementList_C, LibraryMenu_AchievementListItem) == 0x0002C0, "Member 'ULibraryMenu_AchievementList_C::LibraryMenu_AchievementListItem' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementList_C, LibraryMenu_AchievementListItem_120) == 0x0002C8, "Member 'ULibraryMenu_AchievementList_C::LibraryMenu_AchievementListItem_120' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementList_C, CategoryChanged) == 0x0002D0, "Member 'ULibraryMenu_AchievementList_C::CategoryChanged' has a wrong offset!");

}

