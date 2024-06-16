#pragma once

 

// Package: UMG_AdminWindowTemplate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C
// 0x0050 (0x02C8 - 0x0278)
class UUMG_AdminWindowTemplate_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChatHudMovableWidget_C*                ChatHudMovableWidget;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             MainContents;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             OtherContents;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_WidowTitle;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   WindowTitle;                                       // 0x02A8(0x0018)(Edit, BlueprintVisible)
	class UUserWidget*                            OwnerWidget;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_AdminWindowTemplate(int32 EntryPoint);
	void BndEvt__UMG_AdminWindowTemplate_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void Init(class UUserWidget* Param_OwnerWidget);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AdminWindowTemplate_C">();
	}
	static class UUMG_AdminWindowTemplate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AdminWindowTemplate_C>();
	}
};
static_assert(alignof(UUMG_AdminWindowTemplate_C) == 0x000008, "Wrong alignment on UUMG_AdminWindowTemplate_C");
static_assert(sizeof(UUMG_AdminWindowTemplate_C) == 0x0002C8, "Wrong size on UUMG_AdminWindowTemplate_C");
static_assert(offsetof(UUMG_AdminWindowTemplate_C, UberGraphFrame) == 0x000278, "Member 'UUMG_AdminWindowTemplate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AdminWindowTemplate_C, ChatHudMovableWidget) == 0x000280, "Member 'UUMG_AdminWindowTemplate_C::ChatHudMovableWidget' has a wrong offset!");
static_assert(offsetof(UUMG_AdminWindowTemplate_C, CmnClose02) == 0x000288, "Member 'UUMG_AdminWindowTemplate_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UUMG_AdminWindowTemplate_C, MainContents) == 0x000290, "Member 'UUMG_AdminWindowTemplate_C::MainContents' has a wrong offset!");
static_assert(offsetof(UUMG_AdminWindowTemplate_C, OtherContents) == 0x000298, "Member 'UUMG_AdminWindowTemplate_C::OtherContents' has a wrong offset!");
static_assert(offsetof(UUMG_AdminWindowTemplate_C, TextBlock_WidowTitle) == 0x0002A0, "Member 'UUMG_AdminWindowTemplate_C::TextBlock_WidowTitle' has a wrong offset!");
static_assert(offsetof(UUMG_AdminWindowTemplate_C, WindowTitle) == 0x0002A8, "Member 'UUMG_AdminWindowTemplate_C::WindowTitle' has a wrong offset!");
static_assert(offsetof(UUMG_AdminWindowTemplate_C, OwnerWidget) == 0x0002C0, "Member 'UUMG_AdminWindowTemplate_C::OwnerWidget' has a wrong offset!");

}

