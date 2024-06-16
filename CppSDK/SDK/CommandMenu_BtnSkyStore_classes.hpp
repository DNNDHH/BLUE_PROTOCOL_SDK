#pragma once

 

// Package: CommandMenu_BtnSkyStore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_BtnSkyStore.CommandMenu_BtnSkyStore_C
// 0x0050 (0x02C8 - 0x0278)
class UCommandMenu_BtnSkyStore_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBlink;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimClicked;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHovered;                                       // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgGrd;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn1;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect1_2;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect2;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CommandMenu_BtnSkyStore(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_BtnSkyStore_C">();
	}
	static class UCommandMenu_BtnSkyStore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_BtnSkyStore_C>();
	}
};
static_assert(alignof(UCommandMenu_BtnSkyStore_C) == 0x000008, "Wrong alignment on UCommandMenu_BtnSkyStore_C");
static_assert(sizeof(UCommandMenu_BtnSkyStore_C) == 0x0002C8, "Wrong size on UCommandMenu_BtnSkyStore_C");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_BtnSkyStore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, AnimBlink) == 0x000280, "Member 'UCommandMenu_BtnSkyStore_C::AnimBlink' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, AnimClicked) == 0x000288, "Member 'UCommandMenu_BtnSkyStore_C::AnimClicked' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, AnimHovered) == 0x000290, "Member 'UCommandMenu_BtnSkyStore_C::AnimHovered' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, BgGrd) == 0x000298, "Member 'UCommandMenu_BtnSkyStore_C::BgGrd' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, Btn1) == 0x0002A0, "Member 'UCommandMenu_BtnSkyStore_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, Effect1_2) == 0x0002A8, "Member 'UCommandMenu_BtnSkyStore_C::Effect1_2' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, Effect2) == 0x0002B0, "Member 'UCommandMenu_BtnSkyStore_C::Effect2' has a wrong offset!");
static_assert(offsetof(UCommandMenu_BtnSkyStore_C, EventOnClicked) == 0x0002B8, "Member 'UCommandMenu_BtnSkyStore_C::EventOnClicked' has a wrong offset!");

}

