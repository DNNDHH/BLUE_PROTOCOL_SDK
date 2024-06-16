#pragma once

 

// Package: DebugString

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugString.DebugString_C
// 0x0048 (0x02F8 - 0x02B0)
class UDebugString_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_String;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_String;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_String;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_String;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              MenuType;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5051[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            ParentMenu;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsInEditableTextBox;                               // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DebugString(int32 EntryPoint);
	void OnLostFocus();
	void OnGetFocus();
	void OnPressOk();
	void BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__Button_String_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature();
	void Set_Menu_Focus(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugString_C">();
	}
	static class UDebugString_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugString_C>();
	}
};
static_assert(alignof(UDebugString_C) == 0x000008, "Wrong alignment on UDebugString_C");
static_assert(sizeof(UDebugString_C) == 0x0002F8, "Wrong size on UDebugString_C");
static_assert(offsetof(UDebugString_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugString_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugString_C, Button_String) == 0x0002B8, "Member 'UDebugString_C::Button_String' has a wrong offset!");
static_assert(offsetof(UDebugString_C, EditableTextBox_String) == 0x0002C0, "Member 'UDebugString_C::EditableTextBox_String' has a wrong offset!");
static_assert(offsetof(UDebugString_C, Overlay_String) == 0x0002C8, "Member 'UDebugString_C::Overlay_String' has a wrong offset!");
static_assert(offsetof(UDebugString_C, TextBlock_String) == 0x0002D0, "Member 'UDebugString_C::TextBlock_String' has a wrong offset!");
static_assert(offsetof(UDebugString_C, RowName) == 0x0002D8, "Member 'UDebugString_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugString_C, MenuType) == 0x0002E0, "Member 'UDebugString_C::MenuType' has a wrong offset!");
static_assert(offsetof(UDebugString_C, ParentMenu) == 0x0002E8, "Member 'UDebugString_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugString_C, IsInEditableTextBox) == 0x0002F0, "Member 'UDebugString_C::IsInEditableTextBox' has a wrong offset!");

}

