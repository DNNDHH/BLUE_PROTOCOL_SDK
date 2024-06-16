#pragma once

 

// Package: LibraryMenu_List

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_List.LibraryMenu_List_C
// 0x0030 (0x02D8 - 0x02A8)
class ULibraryMenu_List_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimItemIn;                                        // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           ItemList;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_List;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CategoryChanged;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CategoryChanged__DelegateSignature(int32 ItemIndex);
	void ExecuteUbergraph_LibraryMenu_List(int32 EntryPoint);
	void Construct();
	void SetItemListSelected(int32 ListIndex, bool bSelected);
	void GetScrollOffset(float* Offset);
	void SetScrollOffset(float Offset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_List_C">();
	}
	static class ULibraryMenu_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_List_C>();
	}
};
static_assert(alignof(ULibraryMenu_List_C) == 0x000008, "Wrong alignment on ULibraryMenu_List_C");
static_assert(sizeof(ULibraryMenu_List_C) == 0x0002D8, "Wrong size on ULibraryMenu_List_C");
static_assert(offsetof(ULibraryMenu_List_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_List_C, AnimItemIn) == 0x0002B0, "Member 'ULibraryMenu_List_C::AnimItemIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_List_C, ItemList) == 0x0002B8, "Member 'ULibraryMenu_List_C::ItemList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_List_C, ScrollBox_List) == 0x0002C0, "Member 'ULibraryMenu_List_C::ScrollBox_List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_List_C, CategoryChanged) == 0x0002C8, "Member 'ULibraryMenu_List_C::CategoryChanged' has a wrong offset!");

}

