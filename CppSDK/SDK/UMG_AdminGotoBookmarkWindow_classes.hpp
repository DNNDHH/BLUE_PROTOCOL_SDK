#pragma once

 

// Package: UMG_AdminGotoBookmarkWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C
// 0x0078 (0x02F0 - 0x0278)
class UUMG_AdminGotoBookmarkWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Delete;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Down;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Edit;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Move;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Register;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Up;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              ListView_1;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ListViewSizeBox;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AdminWindowTemplate_C*             UMG_AdminWindowTemplate;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class USBAdminGotoBookmarkItem*>       BookmarkList;                                      // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMG_AdminGotoBookmarkRegistrationWindow_C* RegistrationWindow;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAdminGotoBookmarkItem*               SelectedData;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsIdWarp;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UMG_AdminGotoBookmarkWindow(int32 EntryPoint);
	void OnClickedItemMoveButton(class USBAdminGotoBookmarkItem* Data);
	void BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void Hide();
	void Show();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void OnConfirmDelete(const EYesNoDialogResult Result);
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void CloseRegistrationWindow();
	void BndEvt__Button_Edit_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void CreateRegistrationWindow(class USBAdminGotoBookmarkItem* EditingData);
	void SetSelectedData(class UObject* Param_SelectedData);
	void BndEvt__Button_Move_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void Reset();
	void Destruct();
	void AddItem(class USBAdminGotoBookmarkItem* NewData);
	void BndEvt__Button_Register_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AdminGotoBookmarkWindow_C">();
	}
	static class UUMG_AdminGotoBookmarkWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AdminGotoBookmarkWindow_C>();
	}
};
static_assert(alignof(UUMG_AdminGotoBookmarkWindow_C) == 0x000008, "Wrong alignment on UUMG_AdminGotoBookmarkWindow_C");
static_assert(sizeof(UUMG_AdminGotoBookmarkWindow_C) == 0x0002F0, "Wrong size on UUMG_AdminGotoBookmarkWindow_C");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, UberGraphFrame) == 0x000278, "Member 'UUMG_AdminGotoBookmarkWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, Button_Delete) == 0x000280, "Member 'UUMG_AdminGotoBookmarkWindow_C::Button_Delete' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, Button_Down) == 0x000288, "Member 'UUMG_AdminGotoBookmarkWindow_C::Button_Down' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, Button_Edit) == 0x000290, "Member 'UUMG_AdminGotoBookmarkWindow_C::Button_Edit' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, Button_Move) == 0x000298, "Member 'UUMG_AdminGotoBookmarkWindow_C::Button_Move' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, Button_Register) == 0x0002A0, "Member 'UUMG_AdminGotoBookmarkWindow_C::Button_Register' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, Button_Up) == 0x0002A8, "Member 'UUMG_AdminGotoBookmarkWindow_C::Button_Up' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, ListView_1) == 0x0002B0, "Member 'UUMG_AdminGotoBookmarkWindow_C::ListView_1' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, ListViewSizeBox) == 0x0002B8, "Member 'UUMG_AdminGotoBookmarkWindow_C::ListViewSizeBox' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, UMG_AdminWindowTemplate) == 0x0002C0, "Member 'UUMG_AdminGotoBookmarkWindow_C::UMG_AdminWindowTemplate' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, BookmarkList) == 0x0002C8, "Member 'UUMG_AdminGotoBookmarkWindow_C::BookmarkList' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, RegistrationWindow) == 0x0002D8, "Member 'UUMG_AdminGotoBookmarkWindow_C::RegistrationWindow' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, SelectedData) == 0x0002E0, "Member 'UUMG_AdminGotoBookmarkWindow_C::SelectedData' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindow_C, bIsIdWarp) == 0x0002E8, "Member 'UUMG_AdminGotoBookmarkWindow_C::bIsIdWarp' has a wrong offset!");

}

