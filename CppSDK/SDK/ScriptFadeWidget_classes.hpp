#pragma once

 

// Package: ScriptFadeWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScriptFadeWidget.ScriptFadeWidget_C
// 0x0040 (0x02B8 - 0x0278)
class UScriptFadeWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Elapsed;                                           // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeTime;                                          // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFadeEnd;                                         // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         MaxAlpha;                                          // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFadeIn;                                           // 0x02A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D0[0x2];                                     // 0x02A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           FadeColor;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFadeEnd__DelegateSignature();
	void ExecuteUbergraph_ScriptFadeWidget(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void FadeIn(float InFadeTime, bool* bResult);
	void FadeOut(float InFadeTime, const struct FLinearColor& InFadeColor, float InMaxAlpha);
	void Update_Internal(float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScriptFadeWidget_C">();
	}
	static class UScriptFadeWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScriptFadeWidget_C>();
	}
};
static_assert(alignof(UScriptFadeWidget_C) == 0x000008, "Wrong alignment on UScriptFadeWidget_C");
static_assert(sizeof(UScriptFadeWidget_C) == 0x0002B8, "Wrong size on UScriptFadeWidget_C");
static_assert(offsetof(UScriptFadeWidget_C, UberGraphFrame) == 0x000278, "Member 'UScriptFadeWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScriptFadeWidget_C, Image_0) == 0x000280, "Member 'UScriptFadeWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UScriptFadeWidget_C, Elapsed) == 0x000288, "Member 'UScriptFadeWidget_C::Elapsed' has a wrong offset!");
static_assert(offsetof(UScriptFadeWidget_C, FadeTime) == 0x00028C, "Member 'UScriptFadeWidget_C::FadeTime' has a wrong offset!");
static_assert(offsetof(UScriptFadeWidget_C, OnFadeEnd) == 0x000290, "Member 'UScriptFadeWidget_C::OnFadeEnd' has a wrong offset!");
static_assert(offsetof(UScriptFadeWidget_C, MaxAlpha) == 0x0002A0, "Member 'UScriptFadeWidget_C::MaxAlpha' has a wrong offset!");
static_assert(offsetof(UScriptFadeWidget_C, bActive) == 0x0002A4, "Member 'UScriptFadeWidget_C::bActive' has a wrong offset!");
static_assert(offsetof(UScriptFadeWidget_C, bFadeIn) == 0x0002A5, "Member 'UScriptFadeWidget_C::bFadeIn' has a wrong offset!");
static_assert(offsetof(UScriptFadeWidget_C, FadeColor) == 0x0002A8, "Member 'UScriptFadeWidget_C::FadeColor' has a wrong offset!");

}

