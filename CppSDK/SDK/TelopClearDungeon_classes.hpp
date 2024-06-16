#pragma once

 

// Package: TelopClearDungeon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopClearDungeon.TelopClearDungeon_C
// 0x0020 (0x0328 - 0x0308)
class UTelopClearDungeon_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    EffText;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopClearDungeon(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlaySE(class UAkAudioEvent* SE);

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;
	class USBRuntimeTextBlock* GetTextEffect() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopClearDungeon_C">();
	}
	static class UTelopClearDungeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopClearDungeon_C>();
	}
};
static_assert(alignof(UTelopClearDungeon_C) == 0x000008, "Wrong alignment on UTelopClearDungeon_C");
static_assert(sizeof(UTelopClearDungeon_C) == 0x000328, "Wrong size on UTelopClearDungeon_C");
static_assert(offsetof(UTelopClearDungeon_C, UberGraphFrame) == 0x000308, "Member 'UTelopClearDungeon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopClearDungeon_C, InOut) == 0x000310, "Member 'UTelopClearDungeon_C::InOut' has a wrong offset!");
static_assert(offsetof(UTelopClearDungeon_C, EffText) == 0x000318, "Member 'UTelopClearDungeon_C::EffText' has a wrong offset!");
static_assert(offsetof(UTelopClearDungeon_C, Text) == 0x000320, "Member 'UTelopClearDungeon_C::Text' has a wrong offset!");

}

