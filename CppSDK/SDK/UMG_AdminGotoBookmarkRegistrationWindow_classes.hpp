#pragma once

 

// Package: UMG_AdminGotoBookmarkRegistrationWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C
// 0x0060 (0x02D8 - 0x0278)
class UUMG_AdminGotoBookmarkRegistrationWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_CurrPos;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Register;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AdminGotoBookmarkRegistrationWindowItem_C* Item_Description;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AdminGotoBookmarkRegistrationWindowItem_C* Item_MapId;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AdminGotoBookmarkRegistrationWindowItem_C* Item_X;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AdminGotoBookmarkRegistrationWindowItem_C* Item_Y;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AdminGotoBookmarkRegistrationWindowItem_C* Item_Z;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_IndexValue;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SaveOrRegister;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AdminWindowTemplate_C*             UMG_AdminWindowTemplate;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBAdminGotoBookmarkItem*               EditingData;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow(int32 EntryPoint);
	void OnUpdate(class USBAdminGotoBookmarkItem* Sender);
	void ApplyEditingData();
	void ChangeEditingData(class USBAdminGotoBookmarkItem* Param_EditingData);
	void SetDataText(const class FString& MapId, const struct FVector& Positon);
	void BndEvt__Button_CurrPos_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Register_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AdminGotoBookmarkRegistrationWindow_C">();
	}
	static class UUMG_AdminGotoBookmarkRegistrationWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AdminGotoBookmarkRegistrationWindow_C>();
	}
};
static_assert(alignof(UUMG_AdminGotoBookmarkRegistrationWindow_C) == 0x000008, "Wrong alignment on UUMG_AdminGotoBookmarkRegistrationWindow_C");
static_assert(sizeof(UUMG_AdminGotoBookmarkRegistrationWindow_C) == 0x0002D8, "Wrong size on UUMG_AdminGotoBookmarkRegistrationWindow_C");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, UberGraphFrame) == 0x000278, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, Button_CurrPos) == 0x000280, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::Button_CurrPos' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, Button_Register) == 0x000288, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::Button_Register' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, Item_Description) == 0x000290, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::Item_Description' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, Item_MapId) == 0x000298, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::Item_MapId' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, Item_X) == 0x0002A0, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::Item_X' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, Item_Y) == 0x0002A8, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::Item_Y' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, Item_Z) == 0x0002B0, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::Item_Z' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, TextBlock_IndexValue) == 0x0002B8, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::TextBlock_IndexValue' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, TextBlock_SaveOrRegister) == 0x0002C0, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::TextBlock_SaveOrRegister' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, UMG_AdminWindowTemplate) == 0x0002C8, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::UMG_AdminWindowTemplate' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindow_C, EditingData) == 0x0002D0, "Member 'UUMG_AdminGotoBookmarkRegistrationWindow_C::EditingData' has a wrong offset!");

}

