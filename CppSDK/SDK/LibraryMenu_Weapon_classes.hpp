#pragma once

 

// Package: LibraryMenu_Weapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Weapon.LibraryMenu_Weapon_C
// 0x00E0 (0x0388 - 0x02A8)
class ULibraryMenu_Weapon_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCategoryList_Type1_C*                  CategoryList_Type1;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_List_C*                    LibraryMenu_List;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Search_C*                  LibraryMenu_Search;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_WeaponDetails_C*           LibraryMenu_WeaponDetails;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ListSelectTextOverlay;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim_1;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_356;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       SBRichTextBlock_142;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_Details;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextLine;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DetailsImagineBattleZoomIn_C*      UMG_DetailsImagineBattleZoomIn;                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectedItemListIndex;                             // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectCategoryId;                                  // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectCategoryListIndex;                           // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E45[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBWeaponMasterData>            List;                                              // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 CategoryIdList;                                    // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             AllReadWeapon;                                     // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBWeaponMasterData>            WeaponList;                                        // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSecret;                                          // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDbg;                                             // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E46[0x2];                                     // 0x036A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectWeaponId;                                    // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  ReadList;                                          // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsDbg_2;                                           // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AllReadWeapon__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_LibraryMenu_Weapon(int32 EntryPoint);
	void GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type);
	void BndEvt__LibraryMenu_Weapon_SBButton_C_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void OnParentTerm();
	void OnRMShopClosed();
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void ResetMouseCursorTypeToDefaultRequest();
	void Construct();
	void BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_4_OnRecipeTabRead__DelegateSignature();
	void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam);
	void BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnClickWeaponEvent(int32 ListIndex);
	void BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature();
	void BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature();
	void BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32 ItemIndex);
	void CreateCategoryList();
	void CreateWeaponList();
	void IsSecretItem(int32 WeaponID, bool* Result);
	void UpdateCategoryNewIcon(int32 InCategoryId, int32 InListIndex, bool IsCheckAllRead);
	void CreateData();
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Weapon_C">();
	}
	static class ULibraryMenu_Weapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Weapon_C>();
	}
};
static_assert(alignof(ULibraryMenu_Weapon_C) == 0x000008, "Wrong alignment on ULibraryMenu_Weapon_C");
static_assert(sizeof(ULibraryMenu_Weapon_C) == 0x000388, "Wrong size on ULibraryMenu_Weapon_C");
static_assert(offsetof(ULibraryMenu_Weapon_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_Weapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, CategoryList_Type1) == 0x0002B0, "Member 'ULibraryMenu_Weapon_C::CategoryList_Type1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, LibraryMenu_List) == 0x0002B8, "Member 'ULibraryMenu_Weapon_C::LibraryMenu_List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, LibraryMenu_Search) == 0x0002C0, "Member 'ULibraryMenu_Weapon_C::LibraryMenu_Search' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, LibraryMenu_WeaponDetails) == 0x0002C8, "Member 'ULibraryMenu_Weapon_C::LibraryMenu_WeaponDetails' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, ListSelectTextOverlay) == 0x0002D0, "Member 'ULibraryMenu_Weapon_C::ListSelectTextOverlay' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, MoveAnim_1) == 0x0002D8, "Member 'ULibraryMenu_Weapon_C::MoveAnim_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, SBButton_C) == 0x0002E0, "Member 'ULibraryMenu_Weapon_C::SBButton_C' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, SBButton_C_356) == 0x0002E8, "Member 'ULibraryMenu_Weapon_C::SBButton_C_356' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, SBRichTextBlock_142) == 0x0002F0, "Member 'ULibraryMenu_Weapon_C::SBRichTextBlock_142' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, Switch_Details) == 0x0002F8, "Member 'ULibraryMenu_Weapon_C::Switch_Details' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, TextLine) == 0x000300, "Member 'ULibraryMenu_Weapon_C::TextLine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, UIBlocker) == 0x000308, "Member 'ULibraryMenu_Weapon_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, UMG_DetailsImagineBattleZoomIn) == 0x000310, "Member 'ULibraryMenu_Weapon_C::UMG_DetailsImagineBattleZoomIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, SelectedItemListIndex) == 0x000318, "Member 'ULibraryMenu_Weapon_C::SelectedItemListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, SelectCategoryId) == 0x00031C, "Member 'ULibraryMenu_Weapon_C::SelectCategoryId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, SelectCategoryListIndex) == 0x000320, "Member 'ULibraryMenu_Weapon_C::SelectCategoryListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, List) == 0x000328, "Member 'ULibraryMenu_Weapon_C::List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, CategoryIdList) == 0x000338, "Member 'ULibraryMenu_Weapon_C::CategoryIdList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, AllReadWeapon) == 0x000348, "Member 'ULibraryMenu_Weapon_C::AllReadWeapon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, WeaponList) == 0x000358, "Member 'ULibraryMenu_Weapon_C::WeaponList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, IsSecret) == 0x000368, "Member 'ULibraryMenu_Weapon_C::IsSecret' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, IsDbg) == 0x000369, "Member 'ULibraryMenu_Weapon_C::IsDbg' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, SelectWeaponId) == 0x00036C, "Member 'ULibraryMenu_Weapon_C::SelectWeaponId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, ReadList) == 0x000370, "Member 'ULibraryMenu_Weapon_C::ReadList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Weapon_C, IsDbg_2) == 0x000380, "Member 'ULibraryMenu_Weapon_C::IsDbg_2' has a wrong offset!");

}

