#pragma once

 

// Package: LibraryMenu_Monster_SwitchWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C
// 0x0588 (0x0800 - 0x0278)
class ULibraryMenu_Monster_SwitchWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            DetailTabButton;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       DetailTabText;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ExplainTabButton;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       ExplainTabText;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             IDView;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DetailTabMenu_C*   LibraryMenu_Monster_DetailTabMenu;                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_ExplainTabMenu_C*  LibraryMenu_Monster_ExplainTabMenu;                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_66;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAreaListVisibleChange;                           // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   CountCheckEnemyId;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryEnemyData                    ViewEnemyData;                                     // 0x02D8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           NormalBtn;                                         // 0x0300(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           SelectedBtn;                                       // 0x0578(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnAreaListSelect;                                  // 0x07F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAreaListVisibleChange__DelegateSignature(bool Visible);
	void OnAreaListSelect__DelegateSignature(int32 Param_Index, class FName EnemyId);
	void ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow(int32 EntryPoint);
	void AreaListSelect(int32 Param_Index, class FName EnemyId);
	void Destruct();
	void AreaListVisibleChange(bool Visible);
	void BndEvt__LibraryMenu_Monster_SwitchWindow_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Monster_SwitchWindow_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void SetActiveTab(int32 Param_Index);
	void SetEnemyData(const struct FSBLibraryEnemyData& EnemyData);
	void ChangeEnemyType(int32 Type);
	void CloseAreaList();
	void UpdateReadMarkCount();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Monster_SwitchWindow_C">();
	}
	static class ULibraryMenu_Monster_SwitchWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Monster_SwitchWindow_C>();
	}
};
static_assert(alignof(ULibraryMenu_Monster_SwitchWindow_C) == 0x000008, "Wrong alignment on ULibraryMenu_Monster_SwitchWindow_C");
static_assert(sizeof(ULibraryMenu_Monster_SwitchWindow_C) == 0x000800, "Wrong size on ULibraryMenu_Monster_SwitchWindow_C");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_Monster_SwitchWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, DetailTabButton) == 0x000280, "Member 'ULibraryMenu_Monster_SwitchWindow_C::DetailTabButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, DetailTabText) == 0x000288, "Member 'ULibraryMenu_Monster_SwitchWindow_C::DetailTabText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, ExplainTabButton) == 0x000290, "Member 'ULibraryMenu_Monster_SwitchWindow_C::ExplainTabButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, ExplainTabText) == 0x000298, "Member 'ULibraryMenu_Monster_SwitchWindow_C::ExplainTabText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, IDView) == 0x0002A0, "Member 'ULibraryMenu_Monster_SwitchWindow_C::IDView' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, LibraryMenu_Monster_DetailTabMenu) == 0x0002A8, "Member 'ULibraryMenu_Monster_SwitchWindow_C::LibraryMenu_Monster_DetailTabMenu' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, LibraryMenu_Monster_ExplainTabMenu) == 0x0002B0, "Member 'ULibraryMenu_Monster_SwitchWindow_C::LibraryMenu_Monster_ExplainTabMenu' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, WidgetSwitcher_66) == 0x0002B8, "Member 'ULibraryMenu_Monster_SwitchWindow_C::WidgetSwitcher_66' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, OnAreaListVisibleChange) == 0x0002C0, "Member 'ULibraryMenu_Monster_SwitchWindow_C::OnAreaListVisibleChange' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, CountCheckEnemyId) == 0x0002D0, "Member 'ULibraryMenu_Monster_SwitchWindow_C::CountCheckEnemyId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, ViewEnemyData) == 0x0002D8, "Member 'ULibraryMenu_Monster_SwitchWindow_C::ViewEnemyData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, NormalBtn) == 0x000300, "Member 'ULibraryMenu_Monster_SwitchWindow_C::NormalBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, SelectedBtn) == 0x000578, "Member 'ULibraryMenu_Monster_SwitchWindow_C::SelectedBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_SwitchWindow_C, OnAreaListSelect) == 0x0007F0, "Member 'ULibraryMenu_Monster_SwitchWindow_C::OnAreaListSelect' has a wrong offset!");

}

