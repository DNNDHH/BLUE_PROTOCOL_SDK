#pragma once

 

// Package: ShortPin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortPin.ShortPin_C
// 0x0030 (0x0300 - 0x02D0)
class UShortPin_C final : public USBShortPinWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 EnemyImage;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Memberimage;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pointimage;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ShortPinSwitcher;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsNewMark;                                         // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ShortPin(int32 EntryPoint);
	void UpdatePinInfo(bool IsNew);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortPin_C">();
	}
	static class UShortPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortPin_C>();
	}
};
static_assert(alignof(UShortPin_C) == 0x000008, "Wrong alignment on UShortPin_C");
static_assert(sizeof(UShortPin_C) == 0x000300, "Wrong size on UShortPin_C");
static_assert(offsetof(UShortPin_C, UberGraphFrame) == 0x0002D0, "Member 'UShortPin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortPin_C, EnemyImage) == 0x0002D8, "Member 'UShortPin_C::EnemyImage' has a wrong offset!");
static_assert(offsetof(UShortPin_C, Memberimage) == 0x0002E0, "Member 'UShortPin_C::Memberimage' has a wrong offset!");
static_assert(offsetof(UShortPin_C, Pointimage) == 0x0002E8, "Member 'UShortPin_C::Pointimage' has a wrong offset!");
static_assert(offsetof(UShortPin_C, ShortPinSwitcher) == 0x0002F0, "Member 'UShortPin_C::ShortPinSwitcher' has a wrong offset!");
static_assert(offsetof(UShortPin_C, IsNewMark) == 0x0002F8, "Member 'UShortPin_C::IsNewMark' has a wrong offset!");

}

