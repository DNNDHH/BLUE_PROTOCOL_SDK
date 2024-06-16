#pragma once

 

// Package: TelopNormal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopNormal.TelopNormal_C
// 0x0018 (0x0320 - 0x0308)
class UTelopNormal_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopNormal(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlaySE(class UAkAudioEvent* SE);

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopNormal_C">();
	}
	static class UTelopNormal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopNormal_C>();
	}
};
static_assert(alignof(UTelopNormal_C) == 0x000008, "Wrong alignment on UTelopNormal_C");
static_assert(sizeof(UTelopNormal_C) == 0x000320, "Wrong size on UTelopNormal_C");
static_assert(offsetof(UTelopNormal_C, UberGraphFrame) == 0x000308, "Member 'UTelopNormal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopNormal_C, InOut) == 0x000310, "Member 'UTelopNormal_C::InOut' has a wrong offset!");
static_assert(offsetof(UTelopNormal_C, Text) == 0x000318, "Member 'UTelopNormal_C::Text' has a wrong offset!");

}

