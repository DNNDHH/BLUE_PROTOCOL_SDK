#pragma once

 

// Package: NotifyWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NotifyWidget.NotifyWidget_C
// 0x0038 (0x02E8 - 0x02B0)
class UNotifyWidget_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             Press_MainMenu;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Press_Ok;                                          // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Press_Cancel;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPress_MainMenu();
	void OnPress_Ok();
	void OnPress_Cancel();
	void ExecuteUbergraph_NotifyWidget(int32 EntryPoint);
	void Press_Cancel__DelegateSignature();
	void Press_Ok__DelegateSignature();
	void Press_MainMenu__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NotifyWidget_C">();
	}
	static class UNotifyWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotifyWidget_C>();
	}
};
static_assert(alignof(UNotifyWidget_C) == 0x000008, "Wrong alignment on UNotifyWidget_C");
static_assert(sizeof(UNotifyWidget_C) == 0x0002E8, "Wrong size on UNotifyWidget_C");
static_assert(offsetof(UNotifyWidget_C, UberGraphFrame) == 0x0002B0, "Member 'UNotifyWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNotifyWidget_C, Press_MainMenu) == 0x0002B8, "Member 'UNotifyWidget_C::Press_MainMenu' has a wrong offset!");
static_assert(offsetof(UNotifyWidget_C, Press_Ok) == 0x0002C8, "Member 'UNotifyWidget_C::Press_Ok' has a wrong offset!");
static_assert(offsetof(UNotifyWidget_C, Press_Cancel) == 0x0002D8, "Member 'UNotifyWidget_C::Press_Cancel' has a wrong offset!");

}

