#pragma once

 

// Package: FixedPhrase_Menu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FixedPhrase_Menu.FixedPhrase_Menu_C
// 0x0048 (0x02C0 - 0x0278)
class UFixedPhrase_Menu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn23_C*                            Btn0;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn23_C*                            Btn1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn23_C*                            Btn2;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn23_C*                            Btn3;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ChatWindow_C*                      ChatWindow;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn23_C*                            SelectedBtn;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectFixedPhraseId;                               // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FixedPhrase_Menu(int32 EntryPoint);
	void BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void OnClick(int32 InIndex, class UFixedPhrase_Item_C* InItem);
	void Construct();
	void CreateFixedPhrase();
	void SetDragable(bool InDragable);
	void SelectFixedPhrase(int32 InFixedPhraseId, class UFixedPhrase_Item_C* InFixedPhraseItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FixedPhrase_Menu_C">();
	}
	static class UFixedPhrase_Menu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFixedPhrase_Menu_C>();
	}
};
static_assert(alignof(UFixedPhrase_Menu_C) == 0x000008, "Wrong alignment on UFixedPhrase_Menu_C");
static_assert(sizeof(UFixedPhrase_Menu_C) == 0x0002C0, "Wrong size on UFixedPhrase_Menu_C");
static_assert(offsetof(UFixedPhrase_Menu_C, UberGraphFrame) == 0x000278, "Member 'UFixedPhrase_Menu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Menu_C, Btn0) == 0x000280, "Member 'UFixedPhrase_Menu_C::Btn0' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Menu_C, Btn1) == 0x000288, "Member 'UFixedPhrase_Menu_C::Btn1' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Menu_C, Btn2) == 0x000290, "Member 'UFixedPhrase_Menu_C::Btn2' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Menu_C, Btn3) == 0x000298, "Member 'UFixedPhrase_Menu_C::Btn3' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Menu_C, GridPanel) == 0x0002A0, "Member 'UFixedPhrase_Menu_C::GridPanel' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Menu_C, ChatWindow) == 0x0002A8, "Member 'UFixedPhrase_Menu_C::ChatWindow' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Menu_C, SelectedBtn) == 0x0002B0, "Member 'UFixedPhrase_Menu_C::SelectedBtn' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Menu_C, SelectFixedPhraseId) == 0x0002B8, "Member 'UFixedPhrase_Menu_C::SelectFixedPhraseId' has a wrong offset!");

}

