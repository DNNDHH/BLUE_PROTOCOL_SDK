#pragma once

 

// Package: TelopType2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopType2.TelopType2_C
// 0x0018 (0x0320 - 0x0308)
class UTelopType2_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopType2(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlaySE(class UAkAudioEvent* SE);

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopType2_C">();
	}
	static class UTelopType2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopType2_C>();
	}
};
static_assert(alignof(UTelopType2_C) == 0x000008, "Wrong alignment on UTelopType2_C");
static_assert(sizeof(UTelopType2_C) == 0x000320, "Wrong size on UTelopType2_C");
static_assert(offsetof(UTelopType2_C, UberGraphFrame) == 0x000308, "Member 'UTelopType2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopType2_C, InOut) == 0x000310, "Member 'UTelopType2_C::InOut' has a wrong offset!");
static_assert(offsetof(UTelopType2_C, Text) == 0x000318, "Member 'UTelopType2_C::Text' has a wrong offset!");

}

