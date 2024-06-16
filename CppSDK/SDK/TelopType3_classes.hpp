#pragma once

 

// Package: TelopType3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopType3.TelopType3_C
// 0x0030 (0x0338 - 0x0308)
class UTelopType3_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Effect_star;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextEff;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSBG;                                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopType3(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlayBGM();
	void PlaySE(class UAkAudioEvent* SE);
	void SetBG(int32 Param_Index);

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;
	class USBRuntimeTextBlock* GetTextEffect() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopType3_C">();
	}
	static class UTelopType3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopType3_C>();
	}
};
static_assert(alignof(UTelopType3_C) == 0x000008, "Wrong alignment on UTelopType3_C");
static_assert(sizeof(UTelopType3_C) == 0x000338, "Wrong size on UTelopType3_C");
static_assert(offsetof(UTelopType3_C, UberGraphFrame) == 0x000308, "Member 'UTelopType3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopType3_C, InOut) == 0x000310, "Member 'UTelopType3_C::InOut' has a wrong offset!");
static_assert(offsetof(UTelopType3_C, Effect_star) == 0x000318, "Member 'UTelopType3_C::Effect_star' has a wrong offset!");
static_assert(offsetof(UTelopType3_C, Text) == 0x000320, "Member 'UTelopType3_C::Text' has a wrong offset!");
static_assert(offsetof(UTelopType3_C, TextEff) == 0x000328, "Member 'UTelopType3_C::TextEff' has a wrong offset!");
static_assert(offsetof(UTelopType3_C, WSBG) == 0x000330, "Member 'UTelopType3_C::WSBG' has a wrong offset!");

}

