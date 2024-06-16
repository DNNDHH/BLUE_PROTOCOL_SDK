#pragma once

 

// Package: UMG_LiquidMemoryFilledIconL

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C
// 0x00B8 (0x0330 - 0x0278)
class UUMG_LiquidMemoryFilledIconL_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimationDrinking;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           FillingSize;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hl;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_bubble;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_edge;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Effect1;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ExtractionMachine;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Filling_1;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glass;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_L1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_S1;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_S2;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_S3;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_S4;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_S5;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_S6;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_S7;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Star_S8;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              ImageFillingDefaultSize;                           // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FilledLevelMax;                                    // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LiquidMemoryId;                                    // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDrinkingAnimationFinished;                       // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDrinkingAnimationFinished__DelegateSignature();
	void ExecuteUbergraph_UMG_LiquidMemoryFilledIconL(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PreConstruct(bool IsDesignTime);
	void SetLiquidMemory(int32 InLiquidMemoryId, int32 InFilledLevel);
	void SetFilledLevel(int32 InFilledLevel);
	void PlayDrinkingAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryFilledIconL_C">();
	}
	static class UUMG_LiquidMemoryFilledIconL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryFilledIconL_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryFilledIconL_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryFilledIconL_C");
static_assert(sizeof(UUMG_LiquidMemoryFilledIconL_C) == 0x000330, "Wrong size on UUMG_LiquidMemoryFilledIconL_C");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LiquidMemoryFilledIconL_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, AnimationDrinking) == 0x000280, "Member 'UUMG_LiquidMemoryFilledIconL_C::AnimationDrinking' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, FillingSize) == 0x000288, "Member 'UUMG_LiquidMemoryFilledIconL_C::FillingSize' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Hl) == 0x000290, "Member 'UUMG_LiquidMemoryFilledIconL_C::Hl' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Image_bubble) == 0x000298, "Member 'UUMG_LiquidMemoryFilledIconL_C::Image_bubble' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Image_edge) == 0x0002A0, "Member 'UUMG_LiquidMemoryFilledIconL_C::Image_edge' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Image_Effect1) == 0x0002A8, "Member 'UUMG_LiquidMemoryFilledIconL_C::Image_Effect1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Image_ExtractionMachine) == 0x0002B0, "Member 'UUMG_LiquidMemoryFilledIconL_C::Image_ExtractionMachine' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Image_Filling_1) == 0x0002B8, "Member 'UUMG_LiquidMemoryFilledIconL_C::Image_Filling_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Image_Glass) == 0x0002C0, "Member 'UUMG_LiquidMemoryFilledIconL_C::Image_Glass' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_L1) == 0x0002C8, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_L1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_S1) == 0x0002D0, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_S1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_S2) == 0x0002D8, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_S2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_S3) == 0x0002E0, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_S3' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_S4) == 0x0002E8, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_S4' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_S5) == 0x0002F0, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_S5' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_S6) == 0x0002F8, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_S6' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_S7) == 0x000300, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_S7' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, Star_S8) == 0x000308, "Member 'UUMG_LiquidMemoryFilledIconL_C::Star_S8' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, ImageFillingDefaultSize) == 0x000310, "Member 'UUMG_LiquidMemoryFilledIconL_C::ImageFillingDefaultSize' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, FilledLevelMax) == 0x000318, "Member 'UUMG_LiquidMemoryFilledIconL_C::FilledLevelMax' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, LiquidMemoryId) == 0x00031C, "Member 'UUMG_LiquidMemoryFilledIconL_C::LiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryFilledIconL_C, OnDrinkingAnimationFinished) == 0x000320, "Member 'UUMG_LiquidMemoryFilledIconL_C::OnDrinkingAnimationFinished' has a wrong offset!");

}

