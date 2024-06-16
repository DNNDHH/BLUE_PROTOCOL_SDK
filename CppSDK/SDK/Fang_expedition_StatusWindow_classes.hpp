#pragma once

 

// Package: Fang_expedition_StatusWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C
// 0x0040 (0x02B8 - 0x0278)
class UFang_expedition_StatusWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_StatusFinishIconAnm_C* Fang_expedition_StatusFinishIconAnm;               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_New;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayCountText;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Status;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressPlayListOpen;                               // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPressPlayListOpen__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_StatusWindow(int32 EntryPoint);
	void BndEvt__Fang_expedition_StatusWindow_SBButton_C_277_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetData(struct FSBFang_expeditionData& ExpeditionData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_StatusWindow_C">();
	}
	static class UFang_expedition_StatusWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_StatusWindow_C>();
	}
};
static_assert(alignof(UFang_expedition_StatusWindow_C) == 0x000008, "Wrong alignment on UFang_expedition_StatusWindow_C");
static_assert(sizeof(UFang_expedition_StatusWindow_C) == 0x0002B8, "Wrong size on UFang_expedition_StatusWindow_C");
static_assert(offsetof(UFang_expedition_StatusWindow_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_StatusWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusWindow_C, BG) == 0x000280, "Member 'UFang_expedition_StatusWindow_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusWindow_C, Fang_expedition_StatusFinishIconAnm) == 0x000288, "Member 'UFang_expedition_StatusWindow_C::Fang_expedition_StatusFinishIconAnm' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusWindow_C, Image_New) == 0x000290, "Member 'UFang_expedition_StatusWindow_C::Image_New' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusWindow_C, PlayCountText) == 0x000298, "Member 'UFang_expedition_StatusWindow_C::PlayCountText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusWindow_C, SBButton_Status) == 0x0002A0, "Member 'UFang_expedition_StatusWindow_C::SBButton_Status' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusWindow_C, OnPressPlayListOpen) == 0x0002A8, "Member 'UFang_expedition_StatusWindow_C::OnPressPlayListOpen' has a wrong offset!");

}

