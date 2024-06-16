#pragma once

 

// Package: UMG_MultipleSelectDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C
// 0x0060 (0x0330 - 0x02D0)
class UUMG_MultipleSelectDialog_C final : public USBMultipleSelectDialog
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageText;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SelectionList;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button;                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button_391;               // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button_392;               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CancelSelect;                                      // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWindowOpen;                                       // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C0C[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Select_Index;                                      // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_MultipleSelectDialog(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void SetDialogPosition(const struct FVector2D& InPosition);
	void SetCancelAction(const int32 SelectIndex);
	void CustomEvent_0();
	void Construct();
	void Destruct();
	void OnSelected_Event_0(int32 SelectIndex);
	void HandleInit(const class FText& Message, const TArray<class FText>& Selections);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MultipleSelectDialog_C">();
	}
	static class UUMG_MultipleSelectDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MultipleSelectDialog_C>();
	}
};
static_assert(alignof(UUMG_MultipleSelectDialog_C) == 0x000008, "Wrong alignment on UUMG_MultipleSelectDialog_C");
static_assert(sizeof(UUMG_MultipleSelectDialog_C) == 0x000330, "Wrong size on UUMG_MultipleSelectDialog_C");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, UberGraphFrame) == 0x0002D0, "Member 'UUMG_MultipleSelectDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, AnimOut) == 0x0002D8, "Member 'UUMG_MultipleSelectDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, AnimIn) == 0x0002E0, "Member 'UUMG_MultipleSelectDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, CanvasPanel_2) == 0x0002E8, "Member 'UUMG_MultipleSelectDialog_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, MessageText) == 0x0002F0, "Member 'UUMG_MultipleSelectDialog_C::MessageText' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, SelectionList) == 0x0002F8, "Member 'UUMG_MultipleSelectDialog_C::SelectionList' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, UIBlocker) == 0x000300, "Member 'UUMG_MultipleSelectDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, UMG_MultipleSelectDialog_Button) == 0x000308, "Member 'UUMG_MultipleSelectDialog_C::UMG_MultipleSelectDialog_Button' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, UMG_MultipleSelectDialog_Button_391) == 0x000310, "Member 'UUMG_MultipleSelectDialog_C::UMG_MultipleSelectDialog_Button_391' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, UMG_MultipleSelectDialog_Button_392) == 0x000318, "Member 'UUMG_MultipleSelectDialog_C::UMG_MultipleSelectDialog_Button_392' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, CancelSelect) == 0x000320, "Member 'UUMG_MultipleSelectDialog_C::CancelSelect' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, bWindowOpen) == 0x000324, "Member 'UUMG_MultipleSelectDialog_C::bWindowOpen' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_C, Select_Index) == 0x000328, "Member 'UUMG_MultipleSelectDialog_C::Select_Index' has a wrong offset!");

}

