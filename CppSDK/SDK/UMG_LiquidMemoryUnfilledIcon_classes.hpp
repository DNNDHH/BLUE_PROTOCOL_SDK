#pragma once

 

// Package: UMG_LiquidMemoryUnfilledIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C
// 0x0058 (0x02D0 - 0x0278)
class UUMG_LiquidMemoryUnfilledIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           FillingSize;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_bubble;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_edge;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Filling;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconMaxFilledBg;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconMaxFilledFog;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              ImageFilling_DefaultSize;                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LiquidMemoryId;                                    // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AccumulatedRate;                                   // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IconFillingColor;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon(int32 EntryPoint);
	void SetLiquidMemory(int32 InLiquidMemoryId, float InAccumulatedRate);
	void PreConstruct(bool IsDesignTime);
	void SetAccumulatedRate(float InAccumulatedRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryUnfilledIcon_C">();
	}
	static class UUMG_LiquidMemoryUnfilledIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryUnfilledIcon_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryUnfilledIcon_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryUnfilledIcon_C");
static_assert(sizeof(UUMG_LiquidMemoryUnfilledIcon_C) == 0x0002D0, "Wrong size on UUMG_LiquidMemoryUnfilledIcon_C");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, FillingSize) == 0x000280, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::FillingSize' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, Image_bubble) == 0x000288, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::Image_bubble' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, Image_edge) == 0x000290, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::Image_edge' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, Image_Filling) == 0x000298, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::Image_Filling' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, Image_IconMaxFilledBg) == 0x0002A0, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::Image_IconMaxFilledBg' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, Image_IconMaxFilledFog) == 0x0002A8, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::Image_IconMaxFilledFog' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, ImageFilling_DefaultSize) == 0x0002B0, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::ImageFilling_DefaultSize' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, LiquidMemoryId) == 0x0002B8, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::LiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, AccumulatedRate) == 0x0002BC, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::AccumulatedRate' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryUnfilledIcon_C, IconFillingColor) == 0x0002C0, "Member 'UUMG_LiquidMemoryUnfilledIcon_C::IconFillingColor' has a wrong offset!");

}

