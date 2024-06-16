#pragma once

 

// Package: CommandMenu_MenuItem2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_MenuItem2.CommandMenu_MenuItem2_C
// 0x0030 (0x02A8 - 0x0278)
class UCommandMenu_MenuItem2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBCommandMenuType                            MenuType;                                          // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E62[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelect__DelegateSignature(ESBCommandMenuType Param_MenuType);
	void ExecuteUbergraph_CommandMenu_MenuItem2(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_MenuItem2_C">();
	}
	static class UCommandMenu_MenuItem2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_MenuItem2_C>();
	}
};
static_assert(alignof(UCommandMenu_MenuItem2_C) == 0x000008, "Wrong alignment on UCommandMenu_MenuItem2_C");
static_assert(sizeof(UCommandMenu_MenuItem2_C) == 0x0002A8, "Wrong size on UCommandMenu_MenuItem2_C");
static_assert(offsetof(UCommandMenu_MenuItem2_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_MenuItem2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem2_C, Btn1) == 0x000280, "Member 'UCommandMenu_MenuItem2_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem2_C, Txt1) == 0x000288, "Member 'UCommandMenu_MenuItem2_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem2_C, MenuType) == 0x000290, "Member 'UCommandMenu_MenuItem2_C::MenuType' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem2_C, OnSelect) == 0x000298, "Member 'UCommandMenu_MenuItem2_C::OnSelect' has a wrong offset!");

}

