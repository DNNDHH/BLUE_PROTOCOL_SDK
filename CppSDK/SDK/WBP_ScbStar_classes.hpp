#pragma once

 

// Package: WBP_ScbStar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScbStar.WBP_ScbStar_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_ScbStar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_ScbStar(int32 EntryPoint);
	void SetActive(bool Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScbStar_C">();
	}
	static class UWBP_ScbStar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScbStar_C>();
	}
};
static_assert(alignof(UWBP_ScbStar_C) == 0x000008, "Wrong alignment on UWBP_ScbStar_C");
static_assert(sizeof(UWBP_ScbStar_C) == 0x000290, "Wrong size on UWBP_ScbStar_C");
static_assert(offsetof(UWBP_ScbStar_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ScbStar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ScbStar_C, WidgetSwitcher) == 0x000280, "Member 'UWBP_ScbStar_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_ScbStar_C, IsActive) == 0x000288, "Member 'UWBP_ScbStar_C::IsActive' has a wrong offset!");

}

