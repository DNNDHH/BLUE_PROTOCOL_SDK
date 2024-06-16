#pragma once

 

// Package: StatusAlimentNotify

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatusAlimentNotify.StatusAlimentNotify_C
// 0x00D0 (0x0370 - 0x02A0)
class UStatusAlimentNotify_C final : public USBStatusAlimentNotifyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BasePlateSwitcher;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuffIcon_C*                            BufIcon2;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PlateCaverSwitcher;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextStatus;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, struct FSlateColor>       TextStatusColors;                                  // 0x02D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, struct FSlateColor>       TextBgColors;                                      // 0x0320(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_StatusAlimentNotify(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BP_Play(class AActor* OwnerActor, const struct FSBStatusAilmentIconConfig& InputPin);
	void Init_Internal(const struct FSBStatusAilmentIconConfig& Status_AlimentIcon_Config, const class FName InTextID, ESBStatusAilmentPlateType Type);
	void SetBasePlate(ESBStatusAilmentPlateType Type, const struct FSBStatusAilmentIconConfig& SBStatusAilmentIconConfig);
	void SetText(const struct FSBStatusAilmentIconConfig& SBStatusAilmentIconConfig, const class FName InTextID);
	void SetIcon(const struct FSBStatusAilmentIconConfig& InStatusAlimentIconConfig, ESBStatusAilmentPlateType InType);
	void SetIconCover(const struct FSBStatusAilmentIconConfig& SBStatusAilmentIconConfig, ESBStatusAilmentPlateType InPlateType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusAlimentNotify_C">();
	}
	static class UStatusAlimentNotify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusAlimentNotify_C>();
	}
};
static_assert(alignof(UStatusAlimentNotify_C) == 0x000008, "Wrong alignment on UStatusAlimentNotify_C");
static_assert(sizeof(UStatusAlimentNotify_C) == 0x000370, "Wrong size on UStatusAlimentNotify_C");
static_assert(offsetof(UStatusAlimentNotify_C, UberGraphFrame) == 0x0002A0, "Member 'UStatusAlimentNotify_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatusAlimentNotify_C, AnimInOut) == 0x0002A8, "Member 'UStatusAlimentNotify_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UStatusAlimentNotify_C, BasePlateSwitcher) == 0x0002B0, "Member 'UStatusAlimentNotify_C::BasePlateSwitcher' has a wrong offset!");
static_assert(offsetof(UStatusAlimentNotify_C, BufIcon2) == 0x0002B8, "Member 'UStatusAlimentNotify_C::BufIcon2' has a wrong offset!");
static_assert(offsetof(UStatusAlimentNotify_C, PlateCaverSwitcher) == 0x0002C0, "Member 'UStatusAlimentNotify_C::PlateCaverSwitcher' has a wrong offset!");
static_assert(offsetof(UStatusAlimentNotify_C, TextStatus) == 0x0002C8, "Member 'UStatusAlimentNotify_C::TextStatus' has a wrong offset!");
static_assert(offsetof(UStatusAlimentNotify_C, TextStatusColors) == 0x0002D0, "Member 'UStatusAlimentNotify_C::TextStatusColors' has a wrong offset!");
static_assert(offsetof(UStatusAlimentNotify_C, TextBgColors) == 0x000320, "Member 'UStatusAlimentNotify_C::TextBgColors' has a wrong offset!");

}

