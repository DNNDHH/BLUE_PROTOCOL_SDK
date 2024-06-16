#pragma once

 

// Package: DebugCommand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugCommand.DebugCommand_C
// 0x0068 (0x0318 - 0x02B0)
class UDebugCommand_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Command;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Command;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Command;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Command;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              MenuType;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511E[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Command;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnExecutedConsoleCommand;                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUserWidget*                            ParentMenu;                                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bInEditableTextBox;                                // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnExecutedConsoleCommand__DelegateSignature();
	void ExecuteUbergraph_DebugCommand(int32 EntryPoint);
	void BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void OnLostFocus();
	void OnGetFocus();
	void OnPressOk();
	void ExecCommand();
	void BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Set_Menu_Focus(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugCommand_C">();
	}
	static class UDebugCommand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugCommand_C>();
	}
};
static_assert(alignof(UDebugCommand_C) == 0x000008, "Wrong alignment on UDebugCommand_C");
static_assert(sizeof(UDebugCommand_C) == 0x000318, "Wrong size on UDebugCommand_C");
static_assert(offsetof(UDebugCommand_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugCommand_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, Button_Command) == 0x0002B8, "Member 'UDebugCommand_C::Button_Command' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, EditableTextBox_Command) == 0x0002C0, "Member 'UDebugCommand_C::EditableTextBox_Command' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, Overlay_Command) == 0x0002C8, "Member 'UDebugCommand_C::Overlay_Command' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, TextBlock_Command) == 0x0002D0, "Member 'UDebugCommand_C::TextBlock_Command' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, RowName) == 0x0002D8, "Member 'UDebugCommand_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, MenuType) == 0x0002E0, "Member 'UDebugCommand_C::MenuType' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, Command) == 0x0002E8, "Member 'UDebugCommand_C::Command' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, OnExecutedConsoleCommand) == 0x0002F8, "Member 'UDebugCommand_C::OnExecutedConsoleCommand' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, ParentMenu) == 0x000308, "Member 'UDebugCommand_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugCommand_C, bInEditableTextBox) == 0x000310, "Member 'UDebugCommand_C::bInEditableTextBox' has a wrong offset!");

}

