#pragma once

 

// Package: SmasherBoostCartridgeIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "ECartridgeType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C
// 0x0030 (0x02A8 - 0x0278)
class USmasherBoostCartridgeIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackImage;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CartridgeImage;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CartridgeImage_03;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CartridgeImage_04;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SmasherBoostCartridgeIcon(int32 EntryPoint);
	void SetCartridge(ECartridgeType ECartridgeType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SmasherBoostCartridgeIcon_C">();
	}
	static class USmasherBoostCartridgeIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmasherBoostCartridgeIcon_C>();
	}
};
static_assert(alignof(USmasherBoostCartridgeIcon_C) == 0x000008, "Wrong alignment on USmasherBoostCartridgeIcon_C");
static_assert(sizeof(USmasherBoostCartridgeIcon_C) == 0x0002A8, "Wrong size on USmasherBoostCartridgeIcon_C");
static_assert(offsetof(USmasherBoostCartridgeIcon_C, UberGraphFrame) == 0x000278, "Member 'USmasherBoostCartridgeIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USmasherBoostCartridgeIcon_C, BackImage) == 0x000280, "Member 'USmasherBoostCartridgeIcon_C::BackImage' has a wrong offset!");
static_assert(offsetof(USmasherBoostCartridgeIcon_C, CartridgeImage) == 0x000288, "Member 'USmasherBoostCartridgeIcon_C::CartridgeImage' has a wrong offset!");
static_assert(offsetof(USmasherBoostCartridgeIcon_C, CartridgeImage_03) == 0x000290, "Member 'USmasherBoostCartridgeIcon_C::CartridgeImage_03' has a wrong offset!");
static_assert(offsetof(USmasherBoostCartridgeIcon_C, CartridgeImage_04) == 0x000298, "Member 'USmasherBoostCartridgeIcon_C::CartridgeImage_04' has a wrong offset!");
static_assert(offsetof(USmasherBoostCartridgeIcon_C, Switch1) == 0x0002A0, "Member 'USmasherBoostCartridgeIcon_C::Switch1' has a wrong offset!");

}

