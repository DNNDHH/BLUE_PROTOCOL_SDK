#pragma once

 

// Package: CmnAnim_LiquidMemoryActive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C
// 0x0020 (0x0298 - 0x0278)
class UCmnAnim_LiquidMemoryActive_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LightAnim;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Light;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Light_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CmnAnim_LiquidMemoryActive(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnAnim_LiquidMemoryActive_C">();
	}
	static class UCmnAnim_LiquidMemoryActive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnAnim_LiquidMemoryActive_C>();
	}
};
static_assert(alignof(UCmnAnim_LiquidMemoryActive_C) == 0x000008, "Wrong alignment on UCmnAnim_LiquidMemoryActive_C");
static_assert(sizeof(UCmnAnim_LiquidMemoryActive_C) == 0x000298, "Wrong size on UCmnAnim_LiquidMemoryActive_C");
static_assert(offsetof(UCmnAnim_LiquidMemoryActive_C, UberGraphFrame) == 0x000278, "Member 'UCmnAnim_LiquidMemoryActive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnAnim_LiquidMemoryActive_C, LightAnim) == 0x000280, "Member 'UCmnAnim_LiquidMemoryActive_C::LightAnim' has a wrong offset!");
static_assert(offsetof(UCmnAnim_LiquidMemoryActive_C, Light) == 0x000288, "Member 'UCmnAnim_LiquidMemoryActive_C::Light' has a wrong offset!");
static_assert(offsetof(UCmnAnim_LiquidMemoryActive_C, Light_1) == 0x000290, "Member 'UCmnAnim_LiquidMemoryActive_C::Light_1' has a wrong offset!");

}

