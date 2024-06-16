#pragma once

 

// Package: LibraryMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "ELibraryMenuType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu.LibraryMenu_C
// 0x0158 (0x0400 - 0x02A8)
class ULibraryMenu_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPageIn;                                        // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut2;                                          // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_Line_C*                    CommandMenu_Line;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_SubMenuLine_C*             CommandMenu_SubMenuLine;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuBg_C*                       CommandMenuBg;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LibraryMenuBg03_1;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LibraryMenuBg03_2;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LibraryMenuBg03_3;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      MenuButtonList;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvas;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      SubButtonList;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SubMenu_Library;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ELibraryMenuType                              CurrMenueType;                                     // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E03[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CurrSelectedMenuWidget;                            // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HelpId;                                            // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E04[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  IsReadCategoryList;                                // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         BookmarkTypeList;                                  // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ELibraryMenuType                              SelectMenuType;                                    // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoadAchievement;                                 // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ELibraryMenuType                              SetupMenuButtonId;                                 // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E05[0x5];                                     // 0x035B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ViewedDemoIdList;                                  // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         Dummy_ViewedDemoList;                              // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ELibraryMenuType>         BookmarkToLibraryMenuTypeMap;                      // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SubMenuType;                                       // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E06[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             Achievement_List;                                  // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsLoginBonusBtnEnable;                             // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E07[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ReadDemoIdList;                                    // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_LibraryMenu(int32 EntryPoint);
	void OnLoadAchievementDataDelegate_Event(const bool Result, const int32 RetCode);
	void ButtonRefreshAchievement();
	void BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 ButtonId);
	void Library_SubMenu_Open();
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void SetupTheater_Event();
	void SetupAchievement_Event();
	void OnLoadAchivementDelegate_event(const bool Result, const TArray<struct FSBAchievementInfo>& AchievementList);
	void UpdateBookmarkStatusButton();
	void BookmarkUpdateRequest();
	void SelectTab(ELibraryMenuType InputPin);
	void BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 ButtonId);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void ResetMouseCursorTypeToDefaultRequest();
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnRMShopClosed();
	void OnParentTerm();
	void GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type);
	void Setup_Selected_Menu(ELibraryMenuType InSelectedMenuType);
	void SetupMenuButtonExcrametion(int32 Selection);
	void SetupAchievementButtonExcrametion();
	void SetupTheaterButtonExcrametion();
	void RefleshNewIcon(int32 Param_Index);
	void Set_Title_And_Help_Text_Id(ELibraryMenuType InSelectedMenuType, int32 InSubIndex);
	ELibraryMenuType BookmarkTypeToMenueType(const class FString& Key);
	void SetupSelectedSubMenu(int32 Param_Index);
	void GetCharacterAchievementData(int32 InputPin, struct FSBAchievementInfo* Output);
	void Setup_Library_Button_Excrametion();
	void CheckReadDemoIdList(TArray<class FName>& In);
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_C">();
	}
	static class ULibraryMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_C>();
	}
};
static_assert(alignof(ULibraryMenu_C) == 0x000008, "Wrong alignment on ULibraryMenu_C");
static_assert(sizeof(ULibraryMenu_C) == 0x000400, "Wrong size on ULibraryMenu_C");
static_assert(offsetof(ULibraryMenu_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, AnimPageIn) == 0x0002B0, "Member 'ULibraryMenu_C::AnimPageIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, AnimOut2) == 0x0002B8, "Member 'ULibraryMenu_C::AnimOut2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, AnimOut) == 0x0002C0, "Member 'ULibraryMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, CommandMenu_Line) == 0x0002C8, "Member 'ULibraryMenu_C::CommandMenu_Line' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, CommandMenu_SubMenuLine) == 0x0002D0, "Member 'ULibraryMenu_C::CommandMenu_SubMenuLine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, CommandMenuBg) == 0x0002D8, "Member 'ULibraryMenu_C::CommandMenuBg' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, LibraryMenuBg03_1) == 0x0002E0, "Member 'ULibraryMenu_C::LibraryMenuBg03_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, LibraryMenuBg03_2) == 0x0002E8, "Member 'ULibraryMenu_C::LibraryMenuBg03_2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, LibraryMenuBg03_3) == 0x0002F0, "Member 'ULibraryMenu_C::LibraryMenuBg03_3' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, MenuButtonList) == 0x0002F8, "Member 'ULibraryMenu_C::MenuButtonList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, MenuCanvas) == 0x000300, "Member 'ULibraryMenu_C::MenuCanvas' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, SubButtonList) == 0x000308, "Member 'ULibraryMenu_C::SubButtonList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, SubMenu_Library) == 0x000310, "Member 'ULibraryMenu_C::SubMenu_Library' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, UIBlocker) == 0x000318, "Member 'ULibraryMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, CurrMenueType) == 0x000320, "Member 'ULibraryMenu_C::CurrMenueType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, CurrSelectedMenuWidget) == 0x000328, "Member 'ULibraryMenu_C::CurrSelectedMenuWidget' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, HelpId) == 0x000330, "Member 'ULibraryMenu_C::HelpId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, IsReadCategoryList) == 0x000338, "Member 'ULibraryMenu_C::IsReadCategoryList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, BookmarkTypeList) == 0x000348, "Member 'ULibraryMenu_C::BookmarkTypeList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, SelectMenuType) == 0x000358, "Member 'ULibraryMenu_C::SelectMenuType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, IsLoadAchievement) == 0x000359, "Member 'ULibraryMenu_C::IsLoadAchievement' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, SetupMenuButtonId) == 0x00035A, "Member 'ULibraryMenu_C::SetupMenuButtonId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, ViewedDemoIdList) == 0x000360, "Member 'ULibraryMenu_C::ViewedDemoIdList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, Dummy_ViewedDemoList) == 0x000370, "Member 'ULibraryMenu_C::Dummy_ViewedDemoList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, BookmarkToLibraryMenuTypeMap) == 0x000380, "Member 'ULibraryMenu_C::BookmarkToLibraryMenuTypeMap' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, SubMenuType) == 0x0003D0, "Member 'ULibraryMenu_C::SubMenuType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, Achievement_List) == 0x0003D8, "Member 'ULibraryMenu_C::Achievement_List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, IsLoginBonusBtnEnable) == 0x0003E8, "Member 'ULibraryMenu_C::IsLoginBonusBtnEnable' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_C, ReadDemoIdList) == 0x0003F0, "Member 'ULibraryMenu_C::ReadDemoIdList' has a wrong offset!");

}

