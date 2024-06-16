#pragma once

 

// Package: Fishing_Wait

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fishing_Wait.Fishing_Wait_C
// 0x0080 (0x02F8 - 0x0278)
class UFishing_Wait_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnShowHint;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_01;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_02;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fishing_BG01;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fishing_Line01;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_441;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ExitFinshing;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_Dialog_C*                           BP_Dialog;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x02D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                    Data_Table_Row_Handle;                             // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExitFinshing__DelegateSignature();
	void ExecuteUbergraph_Fishing_Wait(int32 EntryPoint);
	void BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void Warning_BackPackIsFull();
	void DialogAction(EDialogResult Result);
	void Construct();
	void CheckBackPack(bool* Ret);
	void Init();
	void CheckFirstOpen(bool* Ret);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fishing_Wait_C">();
	}
	static class UFishing_Wait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFishing_Wait_C>();
	}
};
static_assert(alignof(UFishing_Wait_C) == 0x000008, "Wrong alignment on UFishing_Wait_C");
static_assert(sizeof(UFishing_Wait_C) == 0x0002F8, "Wrong size on UFishing_Wait_C");
static_assert(offsetof(UFishing_Wait_C, UberGraphFrame) == 0x000278, "Member 'UFishing_Wait_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, BtnShowHint) == 0x000280, "Member 'UFishing_Wait_C::BtnShowHint' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, EditableTextBox_01) == 0x000288, "Member 'UFishing_Wait_C::EditableTextBox_01' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, EditableTextBox_02) == 0x000290, "Member 'UFishing_Wait_C::EditableTextBox_02' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, Fishing_BG01) == 0x000298, "Member 'UFishing_Wait_C::Fishing_BG01' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, Fishing_Line01) == 0x0002A0, "Member 'UFishing_Wait_C::Fishing_Line01' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, SBRuntimeTextBlock) == 0x0002A8, "Member 'UFishing_Wait_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, SBRuntimeTextBlock_441) == 0x0002B0, "Member 'UFishing_Wait_C::SBRuntimeTextBlock_441' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, ExitFinshing) == 0x0002B8, "Member 'UFishing_Wait_C::ExitFinshing' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, BP_Dialog) == 0x0002C8, "Member 'UFishing_Wait_C::BP_Dialog' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, Message) == 0x0002D0, "Member 'UFishing_Wait_C::Message' has a wrong offset!");
static_assert(offsetof(UFishing_Wait_C, Data_Table_Row_Handle) == 0x0002E8, "Member 'UFishing_Wait_C::Data_Table_Row_Handle' has a wrong offset!");

}

