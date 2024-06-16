#pragma once

 

// Package: LibraryMenu_Bookmark

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Bookmark.LibraryMenu_Bookmark_C
// 0x0168 (0x0418 - 0x02B0)
class ULibraryMenu_Bookmark_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BookmarkGraffiti;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BookmarkLogo;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCategoryList_Type1_C*                  CategoryList_Type1;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_BookmarkDetails_C*         LibraryMenu_BookmarkDetails;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_List_C*                    LibraryMenu_List;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Search_C*                  LibraryMenu_Search;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTableAsset;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      CategoryTextTableAsset;                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedCategoryListIndex;                         // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A2[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FName>                RowNameMap;                                        // 0x0300(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectCategoryId;                                  // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedListIndex;                                 // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_0;                                          // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           DefaultOpenHelp;                                   // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClickDetail;                                     // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<bool>                                  IsReadCategoryList;                                // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AllRead;                                           // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46A3[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           AllActiveIdList;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 CategoryIdList;                                    // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, int32>                            NewVar_1;                                          // 0x03B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBTutorialHelpData>            HelpDataList;                                      // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClickDetail__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_LibraryMenu_Bookmark(int32 EntryPoint);
	void BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature(int32 ItemIndex);
	void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature(const class FText& NewParam);
	void ClickListItem(int32 ListIndex);
	void CreateList();
	void Construct();
	void ResetMouseCursorTypeToDefaultRequest();
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnRMShopClosed();
	void OnParentTerm();
	void CreateCategoryList();
	bool IsAllReadCategory(int32 CategoryIndex);
	bool IsReadListItem(class FName ItemName);
	void UpdateNewIcon(int32 Dimension_1);
	void IsReadCategory(int32 ID, int32 CategoryType, int32* ReadId, bool* IsRead);
	bool IsAllRead();
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Bookmark_C">();
	}
	static class ULibraryMenu_Bookmark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Bookmark_C>();
	}
};
static_assert(alignof(ULibraryMenu_Bookmark_C) == 0x000008, "Wrong alignment on ULibraryMenu_Bookmark_C");
static_assert(sizeof(ULibraryMenu_Bookmark_C) == 0x000418, "Wrong size on ULibraryMenu_Bookmark_C");
static_assert(offsetof(ULibraryMenu_Bookmark_C, UberGraphFrame) == 0x0002B0, "Member 'ULibraryMenu_Bookmark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, BookmarkGraffiti) == 0x0002B8, "Member 'ULibraryMenu_Bookmark_C::BookmarkGraffiti' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, BookmarkLogo) == 0x0002C0, "Member 'ULibraryMenu_Bookmark_C::BookmarkLogo' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, CategoryList_Type1) == 0x0002C8, "Member 'ULibraryMenu_Bookmark_C::CategoryList_Type1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, LibraryMenu_BookmarkDetails) == 0x0002D0, "Member 'ULibraryMenu_Bookmark_C::LibraryMenu_BookmarkDetails' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, LibraryMenu_List) == 0x0002D8, "Member 'ULibraryMenu_Bookmark_C::LibraryMenu_List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, LibraryMenu_Search) == 0x0002E0, "Member 'ULibraryMenu_Bookmark_C::LibraryMenu_Search' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, TextTableAsset) == 0x0002E8, "Member 'ULibraryMenu_Bookmark_C::TextTableAsset' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, CategoryTextTableAsset) == 0x0002F0, "Member 'ULibraryMenu_Bookmark_C::CategoryTextTableAsset' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, SelectedCategoryListIndex) == 0x0002F8, "Member 'ULibraryMenu_Bookmark_C::SelectedCategoryListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, RowNameMap) == 0x000300, "Member 'ULibraryMenu_Bookmark_C::RowNameMap' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, SelectCategoryId) == 0x000350, "Member 'ULibraryMenu_Bookmark_C::SelectCategoryId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, SelectedListIndex) == 0x000354, "Member 'ULibraryMenu_Bookmark_C::SelectedListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, NewVar_0) == 0x000358, "Member 'ULibraryMenu_Bookmark_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, DefaultOpenHelp) == 0x000360, "Member 'ULibraryMenu_Bookmark_C::DefaultOpenHelp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, OnClickDetail) == 0x000370, "Member 'ULibraryMenu_Bookmark_C::OnClickDetail' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, IsReadCategoryList) == 0x000380, "Member 'ULibraryMenu_Bookmark_C::IsReadCategoryList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, AllRead) == 0x000390, "Member 'ULibraryMenu_Bookmark_C::AllRead' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, AllActiveIdList) == 0x000398, "Member 'ULibraryMenu_Bookmark_C::AllActiveIdList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, CategoryIdList) == 0x0003A8, "Member 'ULibraryMenu_Bookmark_C::CategoryIdList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, NewVar_1) == 0x0003B8, "Member 'ULibraryMenu_Bookmark_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Bookmark_C, HelpDataList) == 0x000408, "Member 'ULibraryMenu_Bookmark_C::HelpDataList' has a wrong offset!");

}

