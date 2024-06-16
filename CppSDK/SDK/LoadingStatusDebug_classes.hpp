#pragma once

 

// Package: LoadingStatusDebug

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadingStatusDebug.LoadingStatusDebug_C
// 0x0030 (0x02A8 - 0x0278)
class ULoadingStatusDebug_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01_93;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Status;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingBase_C*                         LoadingWidget;                                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoadingStatusDebug(int32 EntryPoint);
	void BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void UpdateStatus();
	void UpdateVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadingStatusDebug_C">();
	}
	static class ULoadingStatusDebug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingStatusDebug_C>();
	}
};
static_assert(alignof(ULoadingStatusDebug_C) == 0x000008, "Wrong alignment on ULoadingStatusDebug_C");
static_assert(sizeof(ULoadingStatusDebug_C) == 0x0002A8, "Wrong size on ULoadingStatusDebug_C");
static_assert(offsetof(ULoadingStatusDebug_C, UberGraphFrame) == 0x000278, "Member 'ULoadingStatusDebug_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadingStatusDebug_C, CanvasPanel_0) == 0x000280, "Member 'ULoadingStatusDebug_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(ULoadingStatusDebug_C, CmnClose01_93) == 0x000288, "Member 'ULoadingStatusDebug_C::CmnClose01_93' has a wrong offset!");
static_assert(offsetof(ULoadingStatusDebug_C, Image_BG) == 0x000290, "Member 'ULoadingStatusDebug_C::Image_BG' has a wrong offset!");
static_assert(offsetof(ULoadingStatusDebug_C, Label_Status) == 0x000298, "Member 'ULoadingStatusDebug_C::Label_Status' has a wrong offset!");
static_assert(offsetof(ULoadingStatusDebug_C, LoadingWidget) == 0x0002A0, "Member 'ULoadingStatusDebug_C::LoadingWidget' has a wrong offset!");

}

