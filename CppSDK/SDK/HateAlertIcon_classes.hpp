#pragma once

 

// Package: HateAlertIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HateAlertIcon.HateAlertIcon_C
// 0x0040 (0x02B8 - 0x0278)
class UHateAlertIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBlink;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                BorderAlpha;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BorderBlink;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon1;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsAlert;                                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A45[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimationSpeed;                                    // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HateAlertIcon(int32 EntryPoint);
	void RequestSetAnimationSpeed(float Param_AnimationSpeed);
	void RequestSetOwnerCharacter(class ASBCharacter* OwnerCharacter);
	void RequestHide();
	void RequestShow();
	void PreConstruct(bool IsDesignTime);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void Show();
	void Hide();
	void SetIconColor(const struct FLinearColor& InColorAndOpacity);
	void SetIconColorName(const class FString& ColorName);
	void PlayAnimIn();
	void PlayAnimOut();
	void PlayAnimBlink();
	void SetAnimationSpeed(float Param_AnimationSpeed);
	void RequestSetIconColorName(const class FString& ColorName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HateAlertIcon_C">();
	}
	static class UHateAlertIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHateAlertIcon_C>();
	}
};
static_assert(alignof(UHateAlertIcon_C) == 0x000008, "Wrong alignment on UHateAlertIcon_C");
static_assert(sizeof(UHateAlertIcon_C) == 0x0002B8, "Wrong size on UHateAlertIcon_C");
static_assert(offsetof(UHateAlertIcon_C, UberGraphFrame) == 0x000278, "Member 'UHateAlertIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHateAlertIcon_C, AnimBlink) == 0x000280, "Member 'UHateAlertIcon_C::AnimBlink' has a wrong offset!");
static_assert(offsetof(UHateAlertIcon_C, AnimOut) == 0x000288, "Member 'UHateAlertIcon_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UHateAlertIcon_C, AnimIn) == 0x000290, "Member 'UHateAlertIcon_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UHateAlertIcon_C, BorderAlpha) == 0x000298, "Member 'UHateAlertIcon_C::BorderAlpha' has a wrong offset!");
static_assert(offsetof(UHateAlertIcon_C, BorderBlink) == 0x0002A0, "Member 'UHateAlertIcon_C::BorderBlink' has a wrong offset!");
static_assert(offsetof(UHateAlertIcon_C, Icon1) == 0x0002A8, "Member 'UHateAlertIcon_C::Icon1' has a wrong offset!");
static_assert(offsetof(UHateAlertIcon_C, bIsAlert) == 0x0002B0, "Member 'UHateAlertIcon_C::bIsAlert' has a wrong offset!");
static_assert(offsetof(UHateAlertIcon_C, AnimationSpeed) == 0x0002B4, "Member 'UHateAlertIcon_C::AnimationSpeed' has a wrong offset!");

}

