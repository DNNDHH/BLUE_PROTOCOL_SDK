#pragma once

 

// Package: LibraryMenu_Theater

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "ELibraryMenuType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Theater.LibraryMenu_Theater_C
// 0x0160 (0x0408 - 0x02A8)
class ULibraryMenu_Theater_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULibraryMenuBtn3_C*                     BtnPlay;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCategoryList_Type1_C*                  CategoryList_Type1;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_List_C*                    LibraryMenu_List;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Search_C*                  LibraryMenu_Search;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_TheaterDetails_C*          LibraryMenu_TheaterDetails;                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TheateGraffiti;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TheateLogo;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CategoryListMax;                                   // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedItemListIndex;                             // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectCategoryId;                                  // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectCategoryListId;                              // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DemoChapter;                                       // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDemoType                                   DemoType;                                          // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCty;                                             // 0x0305(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseCurrentMap;                                     // 0x0306(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66D2[0x1];                                     // 0x0307(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrentMapName;                                    // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           ViewedDemoList;                                    // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBTheaterData>                 DemoList;                                          // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           DemoAllList;                                       // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBCommandMenu*                         CommandMenu;                                       // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USBTheaterComponent*                    TheaterComponent;                                  // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    PlayerController;                                  // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCreatedAllList;                                  // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66D3[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Dummy_nllptr;                                      // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         Dummy_ViewedDemoList;                              // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, int32>                            CategoryListMap;                                   // 0x0388(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 CategoryList;                                      // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             UpdateNewIcon;                                     // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsNotViewdDemoList;                                // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66D4[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           AllBlocker;                                        // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateNewIcon__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_LibraryMenu_Theater(int32 EntryPoint);
	void ReleaseUIBlocker();
	void BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32 ItemIndex);
	void BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void SaveTheaterSelectedInfo(int32 CategoryId, int32 ListId, float CategoryOffset, float ListOffset);
	void Request_SaveDemo(class FName DemoId);
	void LoadThumbnail(TSoftObjectPtr<class UTexture2D> Thumbail);
	void Initialize();
	void OnEndDialog(const EYesNoDialogResult Result);
	void Destruct();
	void OnParentTerm();
	void OnRMShopClosed();
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnClickEvent(int32 ListIndex);
	void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam);
	void Construct();
	void ResetMouseCursorTypeToDefaultRequest();
	void OnLoaded_56ABDCA943F8CB39C0C21897E8372530(class UObject* Loaded);
	void CreateCategoryList();
	void GetDemoTypeName(ESBDemoType Type);
	void CheckLevelName(class FName Param_Name, bool IsScript, bool* IsDemo);
	void CreateItemList();
	void CreateItemDetail(int32 Param_Index);
	void CreteGameContentId(class FName LevelName, class FName* GameContentId);
	void SaveLibSaveData();
	void Load_Lib_Save_Data(class USBLibrarySaveManager** LibSaveData);
	void CheckViewedDemoId(class FName DemoId, bool* IsOk);
	void AddDemoAllList(class FName DemoName);
	void IsReadCategory(int32 CategoryId);
	void IsReadAllCategory();
	void ExtractCategory(class FName Category, int32 ID, bool* Ret);
	void InitExclamationIcon();
	void Check_Read_Demo_Id_List(TArray<class FName>& In);
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Theater_C">();
	}
	static class ULibraryMenu_Theater_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Theater_C>();
	}
};
static_assert(alignof(ULibraryMenu_Theater_C) == 0x000008, "Wrong alignment on ULibraryMenu_Theater_C");
static_assert(sizeof(ULibraryMenu_Theater_C) == 0x000408, "Wrong size on ULibraryMenu_Theater_C");
static_assert(offsetof(ULibraryMenu_Theater_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_Theater_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, BtnPlay) == 0x0002B0, "Member 'ULibraryMenu_Theater_C::BtnPlay' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, CategoryList_Type1) == 0x0002B8, "Member 'ULibraryMenu_Theater_C::CategoryList_Type1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, LibraryMenu_List) == 0x0002C0, "Member 'ULibraryMenu_Theater_C::LibraryMenu_List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, LibraryMenu_Search) == 0x0002C8, "Member 'ULibraryMenu_Theater_C::LibraryMenu_Search' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, LibraryMenu_TheaterDetails) == 0x0002D0, "Member 'ULibraryMenu_Theater_C::LibraryMenu_TheaterDetails' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, MoveAnim) == 0x0002D8, "Member 'ULibraryMenu_Theater_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, TheateGraffiti) == 0x0002E0, "Member 'ULibraryMenu_Theater_C::TheateGraffiti' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, TheateLogo) == 0x0002E8, "Member 'ULibraryMenu_Theater_C::TheateLogo' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, CategoryListMax) == 0x0002F0, "Member 'ULibraryMenu_Theater_C::CategoryListMax' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, SelectedItemListIndex) == 0x0002F4, "Member 'ULibraryMenu_Theater_C::SelectedItemListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, SelectCategoryId) == 0x0002F8, "Member 'ULibraryMenu_Theater_C::SelectCategoryId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, SelectCategoryListId) == 0x0002FC, "Member 'ULibraryMenu_Theater_C::SelectCategoryListId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, DemoChapter) == 0x000300, "Member 'ULibraryMenu_Theater_C::DemoChapter' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, DemoType) == 0x000304, "Member 'ULibraryMenu_Theater_C::DemoType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, IsCty) == 0x000305, "Member 'ULibraryMenu_Theater_C::IsCty' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, UseCurrentMap) == 0x000306, "Member 'ULibraryMenu_Theater_C::UseCurrentMap' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, CurrentMapName) == 0x000308, "Member 'ULibraryMenu_Theater_C::CurrentMapName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, ViewedDemoList) == 0x000318, "Member 'ULibraryMenu_Theater_C::ViewedDemoList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, DemoList) == 0x000328, "Member 'ULibraryMenu_Theater_C::DemoList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, DemoAllList) == 0x000338, "Member 'ULibraryMenu_Theater_C::DemoAllList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, CommandMenu) == 0x000348, "Member 'ULibraryMenu_Theater_C::CommandMenu' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, TheaterComponent) == 0x000350, "Member 'ULibraryMenu_Theater_C::TheaterComponent' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, PlayerController) == 0x000358, "Member 'ULibraryMenu_Theater_C::PlayerController' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, IsCreatedAllList) == 0x000360, "Member 'ULibraryMenu_Theater_C::IsCreatedAllList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, Dummy_nllptr) == 0x000368, "Member 'ULibraryMenu_Theater_C::Dummy_nllptr' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, Dummy_ViewedDemoList) == 0x000378, "Member 'ULibraryMenu_Theater_C::Dummy_ViewedDemoList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, CategoryListMap) == 0x000388, "Member 'ULibraryMenu_Theater_C::CategoryListMap' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, CategoryList) == 0x0003D8, "Member 'ULibraryMenu_Theater_C::CategoryList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, UpdateNewIcon) == 0x0003E8, "Member 'ULibraryMenu_Theater_C::UpdateNewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, IsNotViewdDemoList) == 0x0003F8, "Member 'ULibraryMenu_Theater_C::IsNotViewdDemoList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Theater_C, AllBlocker) == 0x000400, "Member 'ULibraryMenu_Theater_C::AllBlocker' has a wrong offset!");

}

