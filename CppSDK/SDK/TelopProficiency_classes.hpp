#pragma once

 

// Package: TelopProficiency

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopProficiency.TelopProficiency_C
// 0x0030 (0x0338 - 0x0308)
class UTelopProficiency_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GlowAnim;                                          // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HBStar;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopProficiency(int32 EntryPoint);
	void EndAnimStarActive();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void OnPlay();
	void SetupStar();
	void PlayAnimOut();
	void PlaySE(class UAkAudioEvent* SE);
	void PlayAnimGlow();

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopProficiency_C">();
	}
	static class UTelopProficiency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopProficiency_C>();
	}
};
static_assert(alignof(UTelopProficiency_C) == 0x000008, "Wrong alignment on UTelopProficiency_C");
static_assert(sizeof(UTelopProficiency_C) == 0x000338, "Wrong size on UTelopProficiency_C");
static_assert(offsetof(UTelopProficiency_C, UberGraphFrame) == 0x000308, "Member 'UTelopProficiency_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopProficiency_C, GlowAnim) == 0x000310, "Member 'UTelopProficiency_C::GlowAnim' has a wrong offset!");
static_assert(offsetof(UTelopProficiency_C, Out) == 0x000318, "Member 'UTelopProficiency_C::Out' has a wrong offset!");
static_assert(offsetof(UTelopProficiency_C, In) == 0x000320, "Member 'UTelopProficiency_C::In' has a wrong offset!");
static_assert(offsetof(UTelopProficiency_C, HBStar) == 0x000328, "Member 'UTelopProficiency_C::HBStar' has a wrong offset!");
static_assert(offsetof(UTelopProficiency_C, Text) == 0x000330, "Member 'UTelopProficiency_C::Text' has a wrong offset!");

}

