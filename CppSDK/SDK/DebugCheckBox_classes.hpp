#pragma once

 

// Package: DebugCheckBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugCheckBox.DebugCheckBox_C
// 0x0048 (0x02F8 - 0x02B0)
class UDebugCheckBox_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CheckBox;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_CheckBox;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_CheckBox;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              MenuType;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_513C[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BattleHUD_C*                        BattleHUD;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            ParentMenu;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DebugCheckBox(int32 EntryPoint);
	void OnChangedFlag(ESBDebugMenuType Param_MenuType, class FName Param_RowName);
	void Destruct();
	void Construct();
	void ChangeCheckBoxState(bool IsChecked);
	void OnLostFocus();
	void OnGetFocus();
	void OnPressOk();
	void BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void GetBattleHUD(bool* IsSuccess);
	void Set_Menu_Focus(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugCheckBox_C">();
	}
	static class UDebugCheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugCheckBox_C>();
	}
};
static_assert(alignof(UDebugCheckBox_C) == 0x000008, "Wrong alignment on UDebugCheckBox_C");
static_assert(sizeof(UDebugCheckBox_C) == 0x0002F8, "Wrong size on UDebugCheckBox_C");
static_assert(offsetof(UDebugCheckBox_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugCheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugCheckBox_C, Button) == 0x0002B8, "Member 'UDebugCheckBox_C::Button' has a wrong offset!");
static_assert(offsetof(UDebugCheckBox_C, CheckBox) == 0x0002C0, "Member 'UDebugCheckBox_C::CheckBox' has a wrong offset!");
static_assert(offsetof(UDebugCheckBox_C, Overlay_CheckBox) == 0x0002C8, "Member 'UDebugCheckBox_C::Overlay_CheckBox' has a wrong offset!");
static_assert(offsetof(UDebugCheckBox_C, TextBlock_CheckBox) == 0x0002D0, "Member 'UDebugCheckBox_C::TextBlock_CheckBox' has a wrong offset!");
static_assert(offsetof(UDebugCheckBox_C, RowName) == 0x0002D8, "Member 'UDebugCheckBox_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugCheckBox_C, MenuType) == 0x0002E0, "Member 'UDebugCheckBox_C::MenuType' has a wrong offset!");
static_assert(offsetof(UDebugCheckBox_C, BattleHUD) == 0x0002E8, "Member 'UDebugCheckBox_C::BattleHUD' has a wrong offset!");
static_assert(offsetof(UDebugCheckBox_C, ParentMenu) == 0x0002F0, "Member 'UDebugCheckBox_C::ParentMenu' has a wrong offset!");

}

