#pragma once

 

// Package: CategoryList_Type1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CategoryList_Type1.CategoryList_Type1_C
// 0x0140 (0x03F0 - 0x02B0)
class UCategoryList_Type1_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           CategoryList;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCategoryList_Type1_Group_C*            CategoryList_Type1_Group;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_List;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                 IDList;                                            // 0x02D8(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         NameList;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible)
	int32                                         SelectedCategoryListIndex;                         // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1B[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             CategoryChanged;                                   // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FString, class UCategoryList_Type1_Group_C*> GroupMap;                                          // 0x0310(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FString, class FString>            GroupNameList;                                     // 0x0360(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         GroupList;                                         // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UCategoryList_Type1_Item_C*>     ItemWidgetList;                                    // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          AlwaysShowScrollbar;                               // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1C[0x3];                                     // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              FrameSize;                                         // 0x03D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsColorChange;                                     // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1D[0x3];                                     // 0x03DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ColorChangeIndexList;                              // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void CategoryChanged__DelegateSignature(int32 ItemIndex);
	void ExecuteUbergraph_CategoryList_Type1(int32 EntryPoint);
	void UnSelectListItem();
	void UpdateClickListItem(int32 ListIndex);
	void ClickListItem(int32 ListIndex);
	void CreateList();
	void PreConstruct(bool IsDesignTime);
	void SetCategoryListSelected(int32 InListIndex, bool bSelected);
	void GetSelectedID(int32* Output);
	void GetSelectedCategoryListIndex(int32* Param_SelectedCategoryListIndex);
	void AddCategoryList(const int32& ID, const class FString& Param_Name);
	void SetNewIcon(int32 CategoryIndex, bool IsActive);
	void SetNewIconAll(bool IsActive);
	int32 GetIndex(const int32& ID);
	void Check_List_New_Icon_Visible(bool* Result);
	void GetScrollOffset(float* Offset);
	void SetScrollOffset(float Offset);
	void AddGroup(const class FString& GroupName, const class FString& Text);
	void AddGroupList(const class FString& Group, int32 ID, const class FString& Param_Name);
	void MakeGroupWidget(const class FString& GroupName, const class FString& Text, int32 Param_Index);
	void SetNewIconEx(bool InIsActive, int32 LargeCategoryId, int32 MediumCategoryId);
	void SetEnableAllNewIconEx(bool InIsActive);
	void SetColorChange(bool Param_IsColorChange);
	void SetScrollBottomOffset(float Offset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CategoryList_Type1_C">();
	}
	static class UCategoryList_Type1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCategoryList_Type1_C>();
	}
};
static_assert(alignof(UCategoryList_Type1_C) == 0x000008, "Wrong alignment on UCategoryList_Type1_C");
static_assert(sizeof(UCategoryList_Type1_C) == 0x0003F0, "Wrong size on UCategoryList_Type1_C");
static_assert(offsetof(UCategoryList_Type1_C, UberGraphFrame) == 0x0002B0, "Member 'UCategoryList_Type1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, CategoryList) == 0x0002B8, "Member 'UCategoryList_Type1_C::CategoryList' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, CategoryList_Type1_Group) == 0x0002C0, "Member 'UCategoryList_Type1_C::CategoryList_Type1_Group' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, Frame) == 0x0002C8, "Member 'UCategoryList_Type1_C::Frame' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, ScrollBox_List) == 0x0002D0, "Member 'UCategoryList_Type1_C::ScrollBox_List' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, IDList) == 0x0002D8, "Member 'UCategoryList_Type1_C::IDList' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, NameList) == 0x0002E8, "Member 'UCategoryList_Type1_C::NameList' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, SelectedCategoryListIndex) == 0x0002F8, "Member 'UCategoryList_Type1_C::SelectedCategoryListIndex' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, CategoryChanged) == 0x000300, "Member 'UCategoryList_Type1_C::CategoryChanged' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, GroupMap) == 0x000310, "Member 'UCategoryList_Type1_C::GroupMap' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, GroupNameList) == 0x000360, "Member 'UCategoryList_Type1_C::GroupNameList' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, GroupList) == 0x0003B0, "Member 'UCategoryList_Type1_C::GroupList' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, ItemWidgetList) == 0x0003C0, "Member 'UCategoryList_Type1_C::ItemWidgetList' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, AlwaysShowScrollbar) == 0x0003D0, "Member 'UCategoryList_Type1_C::AlwaysShowScrollbar' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, FrameSize) == 0x0003D4, "Member 'UCategoryList_Type1_C::FrameSize' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, IsColorChange) == 0x0003DC, "Member 'UCategoryList_Type1_C::IsColorChange' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_C, ColorChangeIndexList) == 0x0003E0, "Member 'UCategoryList_Type1_C::ColorChangeIndexList' has a wrong offset!");

}

