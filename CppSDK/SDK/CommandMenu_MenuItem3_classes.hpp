#pragma once

 

// Package: CommandMenu_MenuItem3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_MenuItem3.CommandMenu_MenuItem3_C
// 0x0048 (0x02C0 - 0x0278)
class UCommandMenu_MenuItem3_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     InPressedSound;                                    // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8B3C[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Infontsize;                                        // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8B3D[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventClicked;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSelected;                                         // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventClicked__DelegateSignature();
	void ExecuteUbergraph_CommandMenu_MenuItem3(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetTextId(int32 TextId);
	void SetSoundID(ESystemSE SoundId);
	void SetBtnSelected(bool Param_bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_MenuItem3_C">();
	}
	static class UCommandMenu_MenuItem3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_MenuItem3_C>();
	}
};
static_assert(alignof(UCommandMenu_MenuItem3_C) == 0x000008, "Wrong alignment on UCommandMenu_MenuItem3_C");
static_assert(sizeof(UCommandMenu_MenuItem3_C) == 0x0002C0, "Wrong size on UCommandMenu_MenuItem3_C");
static_assert(offsetof(UCommandMenu_MenuItem3_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_MenuItem3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem3_C, Btn1) == 0x000280, "Member 'UCommandMenu_MenuItem3_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem3_C, Txt1) == 0x000288, "Member 'UCommandMenu_MenuItem3_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem3_C, InTextTable) == 0x000290, "Member 'UCommandMenu_MenuItem3_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem3_C, InTextID) == 0x000298, "Member 'UCommandMenu_MenuItem3_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem3_C, InPressedSound) == 0x00029C, "Member 'UCommandMenu_MenuItem3_C::InPressedSound' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem3_C, Infontsize) == 0x0002A0, "Member 'UCommandMenu_MenuItem3_C::Infontsize' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem3_C, EventClicked) == 0x0002A8, "Member 'UCommandMenu_MenuItem3_C::EventClicked' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem3_C, bSelected) == 0x0002B8, "Member 'UCommandMenu_MenuItem3_C::bSelected' has a wrong offset!");

}

