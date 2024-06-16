#pragma once

 

// Package: WBP_FmMenu

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FmMenu.WBP_FmMenu_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_FmMenu_C final : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FmMenu_C">();
	}
	static class UWBP_FmMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FmMenu_C>();
	}
};
static_assert(alignof(UWBP_FmMenu_C) == 0x000008, "Wrong alignment on UWBP_FmMenu_C");
static_assert(sizeof(UWBP_FmMenu_C) == 0x000288, "Wrong size on UWBP_FmMenu_C");
static_assert(offsetof(UWBP_FmMenu_C, OnClose) == 0x000278, "Member 'UWBP_FmMenu_C::OnClose' has a wrong offset!");

}

