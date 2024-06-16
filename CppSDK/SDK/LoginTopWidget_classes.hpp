#pragma once

 

// Package: LoginTopWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginTopWidget.LoginTopWidget_C
// 0x0078 (0x02F0 - 0x0278)
class ULoginTopWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_BNIDLogin;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_BNOLauncherLogin;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_DevLogin;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Log;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Env;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Revision;                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TopGroup;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             DevLoginClicked;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             BNIDLoginClicked;                                  // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShow;                                             // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E1A[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             BNOLauncherLoginClicked;                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BNIDLoginClicked__DelegateSignature();
	void DevLoginClicked__DelegateSignature();
	void BNOLauncherLoginClicked__DelegateSignature();
	void ExecuteUbergraph_LoginTopWidget(int32 EntryPoint);
	void BndEvt__Button_DevLogin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_BNIDLogin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LoginTopWidget_Button_Log_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_BNOLauncherLogin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Show();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginTopWidget_C">();
	}
	static class ULoginTopWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginTopWidget_C>();
	}
};
static_assert(alignof(ULoginTopWidget_C) == 0x000008, "Wrong alignment on ULoginTopWidget_C");
static_assert(sizeof(ULoginTopWidget_C) == 0x0002F0, "Wrong size on ULoginTopWidget_C");
static_assert(offsetof(ULoginTopWidget_C, UberGraphFrame) == 0x000278, "Member 'ULoginTopWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, Button_BNIDLogin) == 0x000280, "Member 'ULoginTopWidget_C::Button_BNIDLogin' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, Button_BNOLauncherLogin) == 0x000288, "Member 'ULoginTopWidget_C::Button_BNOLauncherLogin' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, Button_DevLogin) == 0x000290, "Member 'ULoginTopWidget_C::Button_DevLogin' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, Button_Log) == 0x000298, "Member 'ULoginTopWidget_C::Button_Log' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, SBRuntimeTextBlock_Env) == 0x0002A0, "Member 'ULoginTopWidget_C::SBRuntimeTextBlock_Env' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, SBRuntimeTextBlock_Revision) == 0x0002A8, "Member 'ULoginTopWidget_C::SBRuntimeTextBlock_Revision' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, TopGroup) == 0x0002B0, "Member 'ULoginTopWidget_C::TopGroup' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, DevLoginClicked) == 0x0002B8, "Member 'ULoginTopWidget_C::DevLoginClicked' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, BNIDLoginClicked) == 0x0002C8, "Member 'ULoginTopWidget_C::BNIDLoginClicked' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, bShow) == 0x0002D8, "Member 'ULoginTopWidget_C::bShow' has a wrong offset!");
static_assert(offsetof(ULoginTopWidget_C, BNOLauncherLoginClicked) == 0x0002E0, "Member 'ULoginTopWidget_C::BNOLauncherLoginClicked' has a wrong offset!");

}

