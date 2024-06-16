#pragma once

 

// Package: Loading

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Loading.Loading_C
// 0x0040 (0x02B8 - 0x0278)
class ULoading_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LoopAnim2;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LoopAnim1;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImageLight1;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLight2;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine1;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine2;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLoading;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Loading(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Loading_C">();
	}
	static class ULoading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoading_C>();
	}
};
static_assert(alignof(ULoading_C) == 0x000008, "Wrong alignment on ULoading_C");
static_assert(sizeof(ULoading_C) == 0x0002B8, "Wrong size on ULoading_C");
static_assert(offsetof(ULoading_C, UberGraphFrame) == 0x000278, "Member 'ULoading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoading_C, LoopAnim2) == 0x000280, "Member 'ULoading_C::LoopAnim2' has a wrong offset!");
static_assert(offsetof(ULoading_C, LoopAnim1) == 0x000288, "Member 'ULoading_C::LoopAnim1' has a wrong offset!");
static_assert(offsetof(ULoading_C, ImageLight1) == 0x000290, "Member 'ULoading_C::ImageLight1' has a wrong offset!");
static_assert(offsetof(ULoading_C, ImageLight2) == 0x000298, "Member 'ULoading_C::ImageLight2' has a wrong offset!");
static_assert(offsetof(ULoading_C, ImageLine1) == 0x0002A0, "Member 'ULoading_C::ImageLine1' has a wrong offset!");
static_assert(offsetof(ULoading_C, ImageLine2) == 0x0002A8, "Member 'ULoading_C::ImageLine2' has a wrong offset!");
static_assert(offsetof(ULoading_C, ImageLoading) == 0x0002B0, "Member 'ULoading_C::ImageLoading' has a wrong offset!");

}

