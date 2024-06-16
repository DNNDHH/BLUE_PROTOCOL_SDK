#pragma once

 

// Package: CmnOperationRotate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnOperationRotate.CmnOperationRotate_C
// 0x0030 (0x02A8 - 0x0278)
class UCmnOperationRotate_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Mouse1;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Stick1;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMouseStick;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBOperateMode                                OperateMode;                                       // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_497C[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                SaveManager;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CmnOperationRotate(int32 EntryPoint);
	void Destruct();
	void OnUpdateOperateMode();
	void Construct();
	void SwitchIconByOperateMode(ESBOperateMode InOperateMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnOperationRotate_C">();
	}
	static class UCmnOperationRotate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnOperationRotate_C>();
	}
};
static_assert(alignof(UCmnOperationRotate_C) == 0x000008, "Wrong alignment on UCmnOperationRotate_C");
static_assert(sizeof(UCmnOperationRotate_C) == 0x0002A8, "Wrong size on UCmnOperationRotate_C");
static_assert(offsetof(UCmnOperationRotate_C, UberGraphFrame) == 0x000278, "Member 'UCmnOperationRotate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnOperationRotate_C, Mouse1) == 0x000280, "Member 'UCmnOperationRotate_C::Mouse1' has a wrong offset!");
static_assert(offsetof(UCmnOperationRotate_C, Stick1) == 0x000288, "Member 'UCmnOperationRotate_C::Stick1' has a wrong offset!");
static_assert(offsetof(UCmnOperationRotate_C, SwitchMouseStick) == 0x000290, "Member 'UCmnOperationRotate_C::SwitchMouseStick' has a wrong offset!");
static_assert(offsetof(UCmnOperationRotate_C, OperateMode) == 0x000298, "Member 'UCmnOperationRotate_C::OperateMode' has a wrong offset!");
static_assert(offsetof(UCmnOperationRotate_C, SaveManager) == 0x0002A0, "Member 'UCmnOperationRotate_C::SaveManager' has a wrong offset!");

}

