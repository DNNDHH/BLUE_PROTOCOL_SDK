#pragma once

 

// Package: UsedCheck_CheckBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UsedCheck_CheckBox.UsedCheck_CheckBox_C
// 0x0050 (0x02C8 - 0x0278)
class UUsedCheck_CheckBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBoxCmnCheckBox01_C*             Chk_Enable;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeFlag;                                      // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBUseCheckDialogType                         UseCheckType;                                      // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6865[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x02A8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bInitialized;                                      // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Initialize();
	void Construct();
	void BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_UsedCheck_CheckBox(int32 EntryPoint);
	void OnChangeFlag__DelegateSignature(ESBUseCheckDialogType Type, bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UsedCheck_CheckBox_C">();
	}
	static class UUsedCheck_CheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUsedCheck_CheckBox_C>();
	}
};
static_assert(alignof(UUsedCheck_CheckBox_C) == 0x000008, "Wrong alignment on UUsedCheck_CheckBox_C");
static_assert(sizeof(UUsedCheck_CheckBox_C) == 0x0002C8, "Wrong size on UUsedCheck_CheckBox_C");
static_assert(offsetof(UUsedCheck_CheckBox_C, UberGraphFrame) == 0x000278, "Member 'UUsedCheck_CheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUsedCheck_CheckBox_C, Chk_Enable) == 0x000280, "Member 'UUsedCheck_CheckBox_C::Chk_Enable' has a wrong offset!");
static_assert(offsetof(UUsedCheck_CheckBox_C, Txt_Name) == 0x000288, "Member 'UUsedCheck_CheckBox_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UUsedCheck_CheckBox_C, OnChangeFlag) == 0x000290, "Member 'UUsedCheck_CheckBox_C::OnChangeFlag' has a wrong offset!");
static_assert(offsetof(UUsedCheck_CheckBox_C, UseCheckType) == 0x0002A0, "Member 'UUsedCheck_CheckBox_C::UseCheckType' has a wrong offset!");
static_assert(offsetof(UUsedCheck_CheckBox_C, Text) == 0x0002A8, "Member 'UUsedCheck_CheckBox_C::Text' has a wrong offset!");
static_assert(offsetof(UUsedCheck_CheckBox_C, bInitialized) == 0x0002C0, "Member 'UUsedCheck_CheckBox_C::bInitialized' has a wrong offset!");

}

