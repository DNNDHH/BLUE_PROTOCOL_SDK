#pragma once

 

// Package: DebugFloat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugFloat.DebugFloat_C
// 0x0048 (0x02F8 - 0x02B0)
class UDebugFloat_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Float;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Float;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Float;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Float;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              MenuType;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5114[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            ParentMenu;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsInEditableTextBox;                               // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DebugFloat(int32 EntryPoint);
	void OnLostFocus();
	void OnGetFocus();
	void OnPressOk();
	void BndEvt__Button_Float_K2Node_ComponentBoundEvent_378_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void Set_Menu_Focus(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugFloat_C">();
	}
	static class UDebugFloat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugFloat_C>();
	}
};
static_assert(alignof(UDebugFloat_C) == 0x000008, "Wrong alignment on UDebugFloat_C");
static_assert(sizeof(UDebugFloat_C) == 0x0002F8, "Wrong size on UDebugFloat_C");
static_assert(offsetof(UDebugFloat_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugFloat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugFloat_C, Button_Float) == 0x0002B8, "Member 'UDebugFloat_C::Button_Float' has a wrong offset!");
static_assert(offsetof(UDebugFloat_C, EditableTextBox_Float) == 0x0002C0, "Member 'UDebugFloat_C::EditableTextBox_Float' has a wrong offset!");
static_assert(offsetof(UDebugFloat_C, Overlay_Float) == 0x0002C8, "Member 'UDebugFloat_C::Overlay_Float' has a wrong offset!");
static_assert(offsetof(UDebugFloat_C, TextBlock_Float) == 0x0002D0, "Member 'UDebugFloat_C::TextBlock_Float' has a wrong offset!");
static_assert(offsetof(UDebugFloat_C, RowName) == 0x0002D8, "Member 'UDebugFloat_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugFloat_C, MenuType) == 0x0002E0, "Member 'UDebugFloat_C::MenuType' has a wrong offset!");
static_assert(offsetof(UDebugFloat_C, ParentMenu) == 0x0002E8, "Member 'UDebugFloat_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugFloat_C, IsInEditableTextBox) == 0x0002F0, "Member 'UDebugFloat_C::IsInEditableTextBox' has a wrong offset!");

}

