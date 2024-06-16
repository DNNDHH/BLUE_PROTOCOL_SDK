#pragma once

 

// Package: ShortcutCoolTime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutCoolTime.ShortcutCoolTime_C
// 0x0040 (0x02B8 - 0x0278)
class UShortcutCoolTime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Gauge;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTime;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBPlayerStorageComponent*              StorageComponent;                                  // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GuageMat;                                          // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShow;                                            // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsExecute;                                         // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_766F[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EndCoolTime;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EndCoolTime__DelegateSignature();
	void ExecuteUbergraph_ShortcutCoolTime(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ShowCoolTime();
	void HideCoolTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutCoolTime_C">();
	}
	static class UShortcutCoolTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutCoolTime_C>();
	}
};
static_assert(alignof(UShortcutCoolTime_C) == 0x000008, "Wrong alignment on UShortcutCoolTime_C");
static_assert(sizeof(UShortcutCoolTime_C) == 0x0002B8, "Wrong size on UShortcutCoolTime_C");
static_assert(offsetof(UShortcutCoolTime_C, UberGraphFrame) == 0x000278, "Member 'UShortcutCoolTime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortcutCoolTime_C, Gauge) == 0x000280, "Member 'UShortcutCoolTime_C::Gauge' has a wrong offset!");
static_assert(offsetof(UShortcutCoolTime_C, TxtTime) == 0x000288, "Member 'UShortcutCoolTime_C::TxtTime' has a wrong offset!");
static_assert(offsetof(UShortcutCoolTime_C, StorageComponent) == 0x000290, "Member 'UShortcutCoolTime_C::StorageComponent' has a wrong offset!");
static_assert(offsetof(UShortcutCoolTime_C, GuageMat) == 0x000298, "Member 'UShortcutCoolTime_C::GuageMat' has a wrong offset!");
static_assert(offsetof(UShortcutCoolTime_C, IsShow) == 0x0002A0, "Member 'UShortcutCoolTime_C::IsShow' has a wrong offset!");
static_assert(offsetof(UShortcutCoolTime_C, IsExecute) == 0x0002A1, "Member 'UShortcutCoolTime_C::IsExecute' has a wrong offset!");
static_assert(offsetof(UShortcutCoolTime_C, EndCoolTime) == 0x0002A8, "Member 'UShortcutCoolTime_C::EndCoolTime' has a wrong offset!");

}

