#pragma once

 

// Package: TelopMission

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopMission.TelopMission_C
// 0x0020 (0x0328 - 0x0308)
class UTelopMission_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchBgColor;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopMission(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlaySE(class UAkAudioEvent* SE);
	void SetBG(int32 Param_Index);

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopMission_C">();
	}
	static class UTelopMission_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopMission_C>();
	}
};
static_assert(alignof(UTelopMission_C) == 0x000008, "Wrong alignment on UTelopMission_C");
static_assert(sizeof(UTelopMission_C) == 0x000328, "Wrong size on UTelopMission_C");
static_assert(offsetof(UTelopMission_C, UberGraphFrame) == 0x000308, "Member 'UTelopMission_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopMission_C, InOut) == 0x000310, "Member 'UTelopMission_C::InOut' has a wrong offset!");
static_assert(offsetof(UTelopMission_C, SwitchBgColor) == 0x000318, "Member 'UTelopMission_C::SwitchBgColor' has a wrong offset!");
static_assert(offsetof(UTelopMission_C, Text) == 0x000320, "Member 'UTelopMission_C::Text' has a wrong offset!");

}

