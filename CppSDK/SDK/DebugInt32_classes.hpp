#pragma once

 

// Package: DebugInt32

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugInt32.DebugInt32_C
// 0x0048 (0x02F8 - 0x02B0)
class UDebugInt32_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Int32;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Int32;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Int32;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Int32;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              MenuType;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C05[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            ParentMenu;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsInEditableTextBox;                               // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DebugInt32(int32 EntryPoint);
	void OnLostFocus();
	void OnGetFocus();
	void OnPressOk();
	void BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature();
	void Set_Menu_Focus(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugInt32_C">();
	}
	static class UDebugInt32_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugInt32_C>();
	}
};
static_assert(alignof(UDebugInt32_C) == 0x000008, "Wrong alignment on UDebugInt32_C");
static_assert(sizeof(UDebugInt32_C) == 0x0002F8, "Wrong size on UDebugInt32_C");
static_assert(offsetof(UDebugInt32_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugInt32_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugInt32_C, Button_Int32) == 0x0002B8, "Member 'UDebugInt32_C::Button_Int32' has a wrong offset!");
static_assert(offsetof(UDebugInt32_C, EditableTextBox_Int32) == 0x0002C0, "Member 'UDebugInt32_C::EditableTextBox_Int32' has a wrong offset!");
static_assert(offsetof(UDebugInt32_C, Overlay_Int32) == 0x0002C8, "Member 'UDebugInt32_C::Overlay_Int32' has a wrong offset!");
static_assert(offsetof(UDebugInt32_C, TextBlock_Int32) == 0x0002D0, "Member 'UDebugInt32_C::TextBlock_Int32' has a wrong offset!");
static_assert(offsetof(UDebugInt32_C, RowName) == 0x0002D8, "Member 'UDebugInt32_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugInt32_C, MenuType) == 0x0002E0, "Member 'UDebugInt32_C::MenuType' has a wrong offset!");
static_assert(offsetof(UDebugInt32_C, ParentMenu) == 0x0002E8, "Member 'UDebugInt32_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugInt32_C, IsInEditableTextBox) == 0x0002F0, "Member 'UDebugInt32_C::IsInEditableTextBox' has a wrong offset!");

}

