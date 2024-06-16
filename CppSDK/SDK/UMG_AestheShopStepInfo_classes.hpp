#pragma once

 

// Package: UMG_AestheShopStepInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_AestheShop_Step_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C
// 0x0018 (0x0290 - 0x0278)
class UUMG_AestheShopStepInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HBStepIcons;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_AestheShopStepInfo(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetStep(E_AestheShop_Step InStep);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AestheShopStepInfo_C">();
	}
	static class UUMG_AestheShopStepInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AestheShopStepInfo_C>();
	}
};
static_assert(alignof(UUMG_AestheShopStepInfo_C) == 0x000008, "Wrong alignment on UUMG_AestheShopStepInfo_C");
static_assert(sizeof(UUMG_AestheShopStepInfo_C) == 0x000290, "Wrong size on UUMG_AestheShopStepInfo_C");
static_assert(offsetof(UUMG_AestheShopStepInfo_C, UberGraphFrame) == 0x000278, "Member 'UUMG_AestheShopStepInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_C, HBStepIcons) == 0x000280, "Member 'UUMG_AestheShopStepInfo_C::HBStepIcons' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_C, Line) == 0x000288, "Member 'UUMG_AestheShopStepInfo_C::Line' has a wrong offset!");

}

