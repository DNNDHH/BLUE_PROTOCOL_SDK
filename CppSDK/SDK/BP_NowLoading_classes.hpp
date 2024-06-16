#pragma once

 

// Package: BP_NowLoading

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_NowLoading.BP_NowLoading_C
// 0x0010 (0x0288 - 0x0278)
class UBP_NowLoading_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnAnim;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_NowLoading(int32 EntryPoint);
	void StopAnim();
	void StartAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NowLoading_C">();
	}
	static class UBP_NowLoading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NowLoading_C>();
	}
};
static_assert(alignof(UBP_NowLoading_C) == 0x000008, "Wrong alignment on UBP_NowLoading_C");
static_assert(sizeof(UBP_NowLoading_C) == 0x000288, "Wrong size on UBP_NowLoading_C");
static_assert(offsetof(UBP_NowLoading_C, UberGraphFrame) == 0x000278, "Member 'UBP_NowLoading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NowLoading_C, OnAnim) == 0x000280, "Member 'UBP_NowLoading_C::OnAnim' has a wrong offset!");

}

