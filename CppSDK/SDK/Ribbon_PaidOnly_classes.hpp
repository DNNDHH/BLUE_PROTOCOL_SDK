#pragma once

 

// Package: Ribbon_PaidOnly

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ribbon_PaidOnly.Ribbon_PaidOnly_C
// 0x0028 (0x02A0 - 0x0278)
class URibbon_PaidOnly_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg_L;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_S;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         RibbonType;                                        // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Ribbon_PaidOnly(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ribbon_PaidOnly_C">();
	}
	static class URibbon_PaidOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URibbon_PaidOnly_C>();
	}
};
static_assert(alignof(URibbon_PaidOnly_C) == 0x000008, "Wrong alignment on URibbon_PaidOnly_C");
static_assert(sizeof(URibbon_PaidOnly_C) == 0x0002A0, "Wrong size on URibbon_PaidOnly_C");
static_assert(offsetof(URibbon_PaidOnly_C, UberGraphFrame) == 0x000278, "Member 'URibbon_PaidOnly_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URibbon_PaidOnly_C, Bg_L) == 0x000280, "Member 'URibbon_PaidOnly_C::Bg_L' has a wrong offset!");
static_assert(offsetof(URibbon_PaidOnly_C, Bg_S) == 0x000288, "Member 'URibbon_PaidOnly_C::Bg_S' has a wrong offset!");
static_assert(offsetof(URibbon_PaidOnly_C, Switcher) == 0x000290, "Member 'URibbon_PaidOnly_C::Switcher' has a wrong offset!");
static_assert(offsetof(URibbon_PaidOnly_C, RibbonType) == 0x000298, "Member 'URibbon_PaidOnly_C::RibbonType' has a wrong offset!");

}

