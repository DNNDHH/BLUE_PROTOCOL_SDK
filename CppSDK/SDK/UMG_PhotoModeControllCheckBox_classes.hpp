#pragma once

 

// Package: UMG_PhotoModeControllCheckBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C
// 0x0048 (0x02C0 - 0x0278)
class UUMG_PhotoModeControllCheckBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBoxCmnCheckBox01_C*             SBCheckBoxCmnCheckBox01;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Text;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_CmnNew1;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCheckStateChanged;                               // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   TextId;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowDefNotify;                                    // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bShowDisableDofNotify;                             // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDefaultValue;                                     // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bValue;                                            // 0x02B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CDF[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      NotifyTooltip;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_UMG_PhotoModeControllCheckBox(int32 EntryPoint);
	void SetEnableDOF(bool Param_bValue);
	void SetDof(float Def);
	void Construct();
	void UpdateShowNotify();
	void SetValue(bool Param_bValue, bool bOnlyDisplay);
	void Reset();
	void BndEvt__SBCheckBoxCmnCheckBox01_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModeControllCheckBox_C">();
	}
	static class UUMG_PhotoModeControllCheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModeControllCheckBox_C>();
	}
};
static_assert(alignof(UUMG_PhotoModeControllCheckBox_C) == 0x000008, "Wrong alignment on UUMG_PhotoModeControllCheckBox_C");
static_assert(sizeof(UUMG_PhotoModeControllCheckBox_C) == 0x0002C0, "Wrong size on UUMG_PhotoModeControllCheckBox_C");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PhotoModeControllCheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, SBCheckBoxCmnCheckBox01) == 0x000280, "Member 'UUMG_PhotoModeControllCheckBox_C::SBCheckBoxCmnCheckBox01' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, SBRuntimeTextBlock_Text) == 0x000288, "Member 'UUMG_PhotoModeControllCheckBox_C::SBRuntimeTextBlock_Text' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, UI_CmnNew1) == 0x000290, "Member 'UUMG_PhotoModeControllCheckBox_C::UI_CmnNew1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, OnCheckStateChanged) == 0x000298, "Member 'UUMG_PhotoModeControllCheckBox_C::OnCheckStateChanged' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, TextId) == 0x0002A8, "Member 'UUMG_PhotoModeControllCheckBox_C::TextId' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, bShowDefNotify) == 0x0002B0, "Member 'UUMG_PhotoModeControllCheckBox_C::bShowDefNotify' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, bShowDisableDofNotify) == 0x0002B1, "Member 'UUMG_PhotoModeControllCheckBox_C::bShowDisableDofNotify' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, bDefaultValue) == 0x0002B2, "Member 'UUMG_PhotoModeControllCheckBox_C::bDefaultValue' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, bValue) == 0x0002B3, "Member 'UUMG_PhotoModeControllCheckBox_C::bValue' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllCheckBox_C, NotifyTooltip) == 0x0002B8, "Member 'UUMG_PhotoModeControllCheckBox_C::NotifyTooltip' has a wrong offset!");

}

