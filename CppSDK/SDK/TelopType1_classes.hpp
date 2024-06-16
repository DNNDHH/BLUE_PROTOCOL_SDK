#pragma once

 

// Package: TelopType1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopType1.TelopType1_C
// 0x0028 (0x0330 - 0x0308)
class UTelopType1_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IconGrp;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopType1(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlayBGM();
	void PlaySE(class UAkAudioEvent* SE);
	void OnPlay();

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopType1_C">();
	}
	static class UTelopType1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopType1_C>();
	}
};
static_assert(alignof(UTelopType1_C) == 0x000008, "Wrong alignment on UTelopType1_C");
static_assert(sizeof(UTelopType1_C) == 0x000330, "Wrong size on UTelopType1_C");
static_assert(offsetof(UTelopType1_C, UberGraphFrame) == 0x000308, "Member 'UTelopType1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopType1_C, InOut) == 0x000310, "Member 'UTelopType1_C::InOut' has a wrong offset!");
static_assert(offsetof(UTelopType1_C, CommonIcon) == 0x000318, "Member 'UTelopType1_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UTelopType1_C, IconGrp) == 0x000320, "Member 'UTelopType1_C::IconGrp' has a wrong offset!");
static_assert(offsetof(UTelopType1_C, Text) == 0x000328, "Member 'UTelopType1_C::Text' has a wrong offset!");

}

