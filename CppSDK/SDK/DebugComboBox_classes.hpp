#pragma once

 

// Package: DebugComboBox

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugComboBox.DebugComboBox_C
// 0x0078 (0x0328 - 0x02B0)
class UDebugComboBox_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_ComboBox;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        ComboBoxString;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ComboBox;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_0;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ComboBox;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              MenuType;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_512A[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            ParentMenu;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsInComboBox;                                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_512B[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            ComboBoxDefaultColor;                              // 0x0300(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_DebugComboBox(int32 EntryPoint);
	void BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature();
	void Construct();
	void OnLostFocus();
	void OnGetFocus();
	void OnPressOk();
	void BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature();
	void Set_Menu_Focus(bool bFocus);
	void SetSpacerWidthFromStringLength(int32 Length);
	void SetComboBoxStringFocus(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugComboBox_C">();
	}
	static class UDebugComboBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugComboBox_C>();
	}
};
static_assert(alignof(UDebugComboBox_C) == 0x000008, "Wrong alignment on UDebugComboBox_C");
static_assert(sizeof(UDebugComboBox_C) == 0x000328, "Wrong size on UDebugComboBox_C");
static_assert(offsetof(UDebugComboBox_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugComboBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, Button_ComboBox) == 0x0002B8, "Member 'UDebugComboBox_C::Button_ComboBox' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, ComboBoxString) == 0x0002C0, "Member 'UDebugComboBox_C::ComboBoxString' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, Overlay_ComboBox) == 0x0002C8, "Member 'UDebugComboBox_C::Overlay_ComboBox' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, Spacer_0) == 0x0002D0, "Member 'UDebugComboBox_C::Spacer_0' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, TextBlock_ComboBox) == 0x0002D8, "Member 'UDebugComboBox_C::TextBlock_ComboBox' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, RowName) == 0x0002E0, "Member 'UDebugComboBox_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, MenuType) == 0x0002E8, "Member 'UDebugComboBox_C::MenuType' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, ParentMenu) == 0x0002F0, "Member 'UDebugComboBox_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, IsInComboBox) == 0x0002F8, "Member 'UDebugComboBox_C::IsInComboBox' has a wrong offset!");
static_assert(offsetof(UDebugComboBox_C, ComboBoxDefaultColor) == 0x000300, "Member 'UDebugComboBox_C::ComboBoxDefaultColor' has a wrong offset!");

}

