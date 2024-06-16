#pragma once

 

// Package: StackBNetworkLoadView

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBNetworkLoadView.StackBNetworkLoadView_C
// 0x0008 (0x0280 - 0x0278)
class UStackBNetworkLoadView_C final : public UUserWidget
{
public:
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBNetworkLoadView_C">();
	}
	static class UStackBNetworkLoadView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBNetworkLoadView_C>();
	}
};
static_assert(alignof(UStackBNetworkLoadView_C) == 0x000008, "Wrong alignment on UStackBNetworkLoadView_C");
static_assert(sizeof(UStackBNetworkLoadView_C) == 0x000280, "Wrong size on UStackBNetworkLoadView_C");
static_assert(offsetof(UStackBNetworkLoadView_C, CmnImageThrobber) == 0x000278, "Member 'UStackBNetworkLoadView_C::CmnImageThrobber' has a wrong offset!");

}

